#include "StdAfx.h"
#include "uStore_main.h"
#include "Create_Shop_Control.h"
#include "Create_Artikel_Control.h"
#include "Search_Artikel_Control.h"
#include "Search_Artikel.h"

namespace uStore {

Void uStore_main::ShopNeu_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//UserControl Objekt wird erstellt und übergibt Adresse von uStore_main
		Create_Shop_Control^ ShopControl = gcnew Create_Shop_Control(this, user);
		//Position des UserControls
		ShopControl->Location = Point(200, 90);
		//Hinzufügen zum ControlCollective
		Controls->Add(ShopControl);
	}
Void uStore_main::ArtikelVerkaufen_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//UserControl Objekt wird erstellt und übergibt Adresse von uStore_main
		Create_Artikel_Control^ ArtikelControl = gcnew Create_Artikel_Control(this, user);
		//Position des UserControls
		ArtikelControl->Location = Point(200, 90);
		//Hinzufügen zum ControlCollective
		Controls->Add(ArtikelControl);
	}
Void uStore_main::Logout_Click(System::Object^  sender, System::EventArgs^  e)
	{
			Close();	 
			/*Schließt uStore_main und springt zurück
			zu uStore_Login (Wird auch direkt geschlossen)*/
	}
Void uStore_main::ArtikelSuchen_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Search_Artikel^ yo = gcnew Search_Artikel();
		yo->Show();
		////UserControl Objekt wird erstellt und übergibt Adresse von uStore_main
		//Search_Artikel_Control^ ArtikelControl = gcnew Search_Artikel_Control(this, user);
		////Position des UserControls
		//ArtikelControl->Location = Point(200, 75);
		////Hinzufügen zum ControlCollective
		//Controls->Add(ArtikelControl);
	}
}