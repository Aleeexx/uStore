#include "StdAfx.h"
#include "Search_Artikel_Control.h"

using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;

namespace uStore {

Void Search_Artikel_Control::OnChanceArtSearchName(System::Object^  sender, System::EventArgs^  e)
	{
		//Zusammensetzung des Pfades %AppData%\uStore\Artikel\art_Artikelname.txt
		String^ tmp1 = Environment::GetFolderPath(Environment::SpecialFolder::ApplicationData)
			+ "\\uStore\\Artikel\\art_";
		String^ tmp2 = ".txt";
		String^ fileName = tmp1 + artSearchName->Text + tmp2;

		//Überprüfung ob Datei vorhanden, wenn ja Fenster vergrößern und
		//Eigenschaften in Labels etc. eintragen
		if(File::Exists(fileName))
		{
			//Zeige Labels etc
			this->Size = System::Drawing::Size(318, 322);

			StreamReader^ sr = File::OpenText(fileName);
			artFoundName->Text = sr->ReadLine();
			artFoundPreis->Text = sr->ReadLine();
			artFoundVerkaeufer->Text = sr->ReadLine();
			artFoundBeschreibung->Text = sr->ReadLine();
			artFoundBild->ImageLocation = sr->ReadLine();
			sr->Close();
		}

		//Wenn nicht vorhanden Fenster verkleinern und Labels etc. leeren
		else
		{
			this->Size = System::Drawing::Size(318, 95);
			artFoundName->Text = "";
			artFoundPreis->Text = "";
			artFoundVerkaeufer->Text = "";
			artFoundBeschreibung->Text = "";
			artFoundBild->ImageLocation = "";
		}
	}
Void Search_Artikel_Control::Abbrechen_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//UserControl schließen
		ptrParent->Controls->Remove(this);
	}

}