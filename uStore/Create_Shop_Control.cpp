#include "StdAfx.h"
#include "Create_Shop_Control.h"

namespace uStore {

Void Create_Shop_Control::erstellen_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//Pfad Zusammensetzung
		String^ tmp1 = Environment::GetFolderPath(Environment::SpecialFolder::ApplicationData) + "\\uStore\\Shops";
		String^ tmp2 = ".txt";
		String^ fileName = tmp1 + "\\shop_" + Shopname->Text + tmp2;

		//Erstelle und schreibe in shop_Shopname in %Appdata%\uStore\Shops
		StreamWriter^ sw = gcnew StreamWriter(fileName);
		sw->WriteLine(Shopname->Text);
		sw->WriteLine(user->getName());
		sw->WriteLine(user->getTelefonnr());
		sw->WriteLine(Strassenname->Text);
		sw->WriteLine(PLZ->Text);
		sw->WriteLine(Ort->Text);
		sw->Close();

		//Pfad Zusammensetzung shopList
		tmp1 = Environment::GetFolderPath(Environment::SpecialFolder::ApplicationData)
						 + "\\uStore\\Listen\\";
		fileName = tmp1 + "shopList.txt";

		//Erstelle %AppData%\uStore\Listen
		if(!Directory::Exists(tmp1))
		{
			Directory::CreateDirectory(tmp1);
		}

		//shopList.txt schreiben
		StreamWriter^ sw1 = gcnew StreamWriter(fileName, true);
		sw1->WriteLine(Shopname->Text);
		sw1->Close();
				 
		//Schließe UserControl
		ptrMainPanel->Controls->Remove(this);
	}
Void Create_Shop_Control::erstellenAbbrechen_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//Panel leeren
		ptrMainPanel->Controls->Clear();
	}
Void Create_Shop_Control::Create_Shop_Control_Load(System::Object^  sender, System::EventArgs^  e)
	{
		//Erstelle %AppData%\uStore\Shops bei LoadUp von Create_Shop_Control,
		//wenn noch nicht vorhanden
		String^ tmp = Environment::GetFolderPath(Environment::SpecialFolder::ApplicationData) + "\\uStore\\Shops";
		if(!Directory::Exists(tmp))
			{
				Directory::CreateDirectory(tmp);
			}
	}

}