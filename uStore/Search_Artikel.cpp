#include "StdAfx.h"
#include "Search_Artikel.h"
#include "Found_Artikel_Control.h"

using namespace System;
using namespace System::IO;

namespace uStore 
{
	Void Search_Artikel::BnArtSuche_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//Alle "gefundenen Artikel" aus dem Großen Panel löschen
		PanelArtFound->Controls->Clear();

		//Vorabdeklaration
		String^ fileNameList = Environment::GetFolderPath(Environment::SpecialFolder::ApplicationData)
				+ "\\uStore\\Listen\\userList.txt";

		//Überprüfung ob userList.txt vorhanden ist
		if(File::Exists(fileNameList))
		{
		//Vorabdeklaration
		String^ Username;
		String^ Artikel;
		
		String^ tmpPfadArt;
		String^ tmpPfadArt2;
		String^ fileNameArt;
		
		StreamReader^ srListSchleife = File::OpenText(fileNameList);
		StreamReader^ srList = File::OpenText(fileNameList);

		StreamReader^ srArtListSchleife;
		StreamReader^ srArtList;

		StreamReader^ srArt;
		String^ tmpPfadArtikel;
		String^ tmpPfadArtikel2;
		String^ fileNameArtikel;

		Found_Artikel_Control^ tmpControl;
		int anz = 0;

		while(srListSchleife->ReadLine() != nullptr)
		{
			Username = srList->ReadLine();

			//Zusammensetzung des Pfades %AppData%\uStore\Listen\artList_Benutzername.txt
			tmpPfadArt = Environment::GetFolderPath(Environment::SpecialFolder::ApplicationData)
				+ "\\uStore\\Listen\\artUserList\\artList";
			tmpPfadArt2 = ".txt";
			fileNameArt = tmpPfadArt + Username + tmpPfadArt2;
			if(File::Exists(fileNameArt))
			{
				srArtListSchleife = File::OpenText(fileNameArt);
				srArtList = File::OpenText(fileNameArt);
				while(srArtListSchleife->ReadLine() != nullptr)
				{
					Artikel = srArtList->ReadLine();
					if((Artikel->IndexOf(artSearchName->Text, 0) >= 0)
					&& !(String::IsNullOrWhiteSpace(Artikel)))
					{
						//Anlegen von Objekt
						tmpControl = gcnew Found_Artikel_Control(ptrMainPanel, this);

						//Zusammensetzung des Pfades %AppData%\uStore\Artikel\art_Artikelname.txt
						tmpPfadArtikel = Environment::GetFolderPath(Environment::SpecialFolder::ApplicationData) 
							+ "\\uStore\\Artikel\\art_";
						tmpPfadArtikel2 = ".txt";
						fileNameArtikel = tmpPfadArtikel + Artikel + tmpPfadArtikel2;

						//Informationen von Artikel holen
						srArt = File::OpenText(fileNameArtikel);
						tmpControl->artFoundName->Text = srArt->ReadLine();
						tmpControl->artFoundPreis->Text = srArt->ReadLine();
						tmpControl->artFoundVerkaeufer->Text = srArt->ReadLine();
						tmpControl->artFoundBeschreibung->Text = srArt->ReadLine();
						tmpControl->artFoundBild->ImageLocation = srArt->ReadLine();
						srArt->Close();

						//Position des UserControls
						tmpControl->Location = Point(10, (10 + (190 * anz)));
						//Hinzufügen zum ControlCollective
						PanelArtFound->Controls->Add(tmpControl);
						//Anzahl hochzählen
						anz++;
					}
				}
				srArtList->Close();
				srArtListSchleife->Close();
			}
		}
		srListSchleife->Close();
		srList->Close();
		}
	}
	Void Search_Artikel::Abbrechen_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Close();
	}
}