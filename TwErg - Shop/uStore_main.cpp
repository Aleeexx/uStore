#include "StdAfx.h"
#include "uStore_main.h"
#include "Create_Shop_Control.h"
#include "Create_Artikel_Control.h"

namespace TwErgShop
{
	Void uStore_main::ShopNeu_Click(System::Object^  sender, System::EventArgs^  e)
		{
			//UserControl Objekt wird erstellt
			Create_Shop_Control^ ShopControl = gcnew Create_Shop_Control(this);
			//Position des UserControls
			ShopControl->Location = Point(200, 90);
			//Hinzufügen zum ControlCollective
			Controls->Add(ShopControl);
		}
	Void uStore_main::Logout_Click(System::Object^  sender, System::EventArgs^  e)
		{
				Close();	 
				/*Schließt uStore_main und springt zurück
				zu uStore_Login (Wird auch direkt geschlossen)*/
		}
	Void uStore_main::ArtikelVerkaufen_Click(System::Object^  sender, System::EventArgs^  e)
		{
			//UserControl Objekt wird erstellt
			Create_Artikel_Control^ ArtikelControl = gcnew Create_Artikel_Control(this);
			//Position des UserControls
			ArtikelControl->Location = Point(200, 90);
			//Hinzufügen zum ControlCollective
			Controls->Add(ArtikelControl);
		}
	void uStore_main::ControlClose()
	{
		Controls->Clear();
	}
}