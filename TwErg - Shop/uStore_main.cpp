#include "StdAfx.h"
#include "uStore_main.h"

namespace TwErgShop
{
	Void uStore_main::ShopNeu_Click(System::Object^  sender, System::EventArgs^  e)
		{
			//UserControl Objekt wird erstellt
			Create_Shop_Control^ ShopControl = gcnew Create_Shop_Control();
			//Position des UserControls
			ShopControl->Location = Point(200, 90);
			//Hinzuf�gen zum ControlCollective
			Controls->Add(ShopControl);
		}
	Void uStore_main::Logout_Click(System::Object^  sender, System::EventArgs^  e)
		{
				Close();	 
				/*Schlie�t uStore_main und springt zur�ck
				zu uStore_Login (Wird auch direkt geschlossen)*/
		}
}