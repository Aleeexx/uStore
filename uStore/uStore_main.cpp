#include "StdAfx.h"
#include "uStore_main.h"
#include "Create_Shop_Control.h"
#include "Create_Artikel_Control.h"
#include "Search_Artikel.h"
#include "Search_Shop.h"

namespace uStore {

Void uStore_main::ShopNeu_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//Panel leeren
		mainPanel->Controls->Clear();
		//UserControl Objekt wird erstellt und übergibt Adresse von uStore_main
		Create_Shop_Control^ ShopControl = gcnew Create_Shop_Control(mainPanel, user);
		//Hinzufügen zum ControlCollective
		mainPanel->Controls->Add(ShopControl);
	}
Void uStore_main::ArtikelVerkaufen_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//Panel leeren
		mainPanel->Controls->Clear();
		//UserControl Objekt wird erstellt und übergibt Adresse von uStore_main
		Create_Artikel_Control^ ArtikelControl = gcnew Create_Artikel_Control(mainPanel, user);
		//Hinzufügen zum ControlCollective
		mainPanel->Controls->Add(ArtikelControl);
	}
Void uStore_main::ArtikelSuchen_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//Panel leeren
		mainPanel->Controls->Clear();
		//Form Objekt wird erstellt und übergibt Adresse von uStore_main
		Search_Artikel^ tmpSearch = gcnew Search_Artikel(mainPanel);
		//Form zeigen
		tmpSearch->Show();
	}
Void uStore_main::ShopSuchen_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//Panel leeren
		mainPanel->Controls->Clear();
		//Form Objekt wird erstellt und übergibt Adresse von uStore_main
		Search_Shop^ tmpSearch = gcnew Search_Shop(mainPanel);
		//Form zeigen
		tmpSearch->Show();
	}
Void uStore_main::Logout_Click(System::Object^  sender, System::EventArgs^  e)
	{
			Close();	 
			/*Schließt uStore_main und springt zurück
			zu uStore_Login (Wird auch direkt geschlossen)*/
	}
}