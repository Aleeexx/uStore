#include "StdAfx.h"
#include "Create_Artikel_Control.h"

using namespace uStore;

Void Create_Artikel_Control::btnOpen_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 if(Artikelname->Text != "")
			 {
				 //Startorder: Eigene Bilder
				  openPicture->InitialDirectory = Environment::GetFolderPath(
					  Environment::SpecialFolder::MyPictures);

				  openPicture->ShowDialog();
				  //Ausgewähltes Bild in PictureBox
				  Bild->BackColor = System::Drawing::Color::White;
				  Pfad = openPicture->FileName;
				  Bild->ImageLocation = Pfad;
			 }
			 else
			 {
				//Wenn artName leer ist Schrift = rot und Button öffnet nicht
				artName->ForeColor = Color::Red;
			 }
		 }
Void Create_Artikel_Control::erstellenAbbrechen_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//UserControl schließen
		ptrParent->Controls->Remove(this);
	}
Void Create_Artikel_Control::erstellen_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//%Appdata%\uStore\Bilder anlegen
		String^ tmp = Environment::GetFolderPath(Environment::SpecialFolder::ApplicationData)
				+ "\\uStore\\Bilder";
		if(!Directory::Exists(tmp))
		{
		Directory::CreateDirectory(tmp);
	 	}
		//Bild kopieren rename zu artName.png
		File::Copy(Bild->ImageLocation, Environment::GetFolderPath(Environment::SpecialFolder::ApplicationData) 
			+ "\\uStore\\Bilder\\" + Artikelname->Text + ".png", true);
			 
		// art_artName.txt in %Appdata%\uStore\Artikel anlegen
		String^ tmp1 = Environment::GetFolderPath(Environment::SpecialFolder::ApplicationData) + "\\uStore\\Artikel";
		String^ tmp2 = ".txt";
		String^ fileName = tmp1 + "\\art_" + Artikelname->Text + tmp2;
		if(!Directory::Exists(tmp1))
		{
		 	Directory::CreateDirectory(tmp1);
	 	}
		//In die Datei schreiben
		StreamWriter^ sw = gcnew StreamWriter(fileName);
		sw->WriteLine(Artikelname->Text);
		sw->WriteLine(Preis->Text);
		sw->WriteLine(Beschreibung->Text);
		sw->WriteLine("{0}\\{1}.png", tmp, Artikelname->Text);
		sw->Close();
			 
		//Artikelobjekt anlegen, füllen und in Liste von Benutzer einfügen
		CArtikel^ art = gcnew CArtikel(Artikelname->Text, Preis->Text, Beschreibung->Text, tmp + Artikelname->Text + ".png", user->getName());
		//user->artList->Add(art);

		//UserControl schließen
		ptrParent->Controls->Remove(this);
	}
Void Create_Artikel_Control::OnChangeArtName(System::Object^  sender, System::EventArgs^  e)
	{
		//Wenn artName geändert wird wieder auf schwarz setzen, falls
		//Bild Button geklickt wurde und Feld leer war (denn dann lable = rot)
		artName->ForeColor = Color::Black;
	}