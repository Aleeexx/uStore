#include "StdAfx.h"
#include "uStore_main.h"
#include "Create_Shop_Control.h"
#include "Create_Artikel_Control.h"

using namespace uStore;

	Void uStore_main::ShopNeu_Click(System::Object^  sender, System::EventArgs^  e)
		{
			//UserControl Objekt wird erstellt und �bergibt Adresse von uStore_main
			Create_Shop_Control^ ShopControl = gcnew Create_Shop_Control(this, user);
			//Position des UserControls
			ShopControl->Location = Point(200, 90);
			//Hinzuf�gen zum ControlCollective
			Controls->Add(ShopControl);
		}
	Void uStore_main::ArtikelVerkaufen_Click(System::Object^  sender, System::EventArgs^  e)
		{
			//UserControl Objekt wird erstellt und �bergibt Adresse von uStore_main
			Create_Artikel_Control^ ArtikelControl = gcnew Create_Artikel_Control(this, user);
			//Position des UserControls
			ArtikelControl->Location = Point(200, 90);
			//Hinzuf�gen zum ControlCollective
			Controls->Add(ArtikelControl);
		}
	Void uStore_main::Logout_Click(System::Object^  sender, System::EventArgs^  e)
		{
				Close();	 
				/*Schlie�t uStore_main und springt zur�ck
				zu uStore_Login (Wird auch direkt geschlossen)*/
		}