#include "StdAfx.h"
#include "Search_Shop.h"
#include "Found_Shop_Control.h"
#include "Fehler.h"

using namespace System;
using namespace System::IO;

namespace uStore
{
Void Search_Shop::BnShopSuche_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//Leere Panel
		PanelShopFound->Controls->Clear();

		//Vorabdeklarationen
		int anz = 0;
		Found_Shop_Control^ tmpControl;
		String^ tmpPfadShop;
		String^ tmpPfadShop2;
		String^ fileNameShop;
		String^ Shop;

		String^ fileNameList = Environment::GetFolderPath(Environment::SpecialFolder::ApplicationData)
				+ "\\uStore\\Listen\\shopList.txt";

		if(File::Exists(fileNameList))
		{
			StreamReader^ srShopListSchleife = File::OpenText(fileNameList);
			StreamReader^ srShopList = File::OpenText(fileNameList);
			while(srShopListSchleife->ReadLine() != nullptr)
			{
				Shop = srShopList->ReadLine();
				if((Shop->IndexOf(shopSearchName->Text, 0) >= 0)
				&& !(String::IsNullOrWhiteSpace(Shop)))
				{
					//Zusammensetzung des Pfades %AppData%\uStore\Listen\artList_Benutzername.txt
					tmpPfadShop = Environment::GetFolderPath(Environment::SpecialFolder::ApplicationData)
								+ "\\uStore\\Shops\\shop_";
					tmpPfadShop2 = ".txt";
					fileNameShop = tmpPfadShop + Shop + tmpPfadShop2;

					//Anlegen des UserControl Objektes
					tmpControl = gcnew Found_Shop_Control(ptrMainPanel, this);

					//Informationen von Shop holen
					StreamReader^ srShop = File::OpenText(fileNameShop);
					tmpControl->Shopname->Text = srShop->ReadLine();
					tmpControl->shopBesitzerName->Text = srShop->ReadLine();
					tmpControl->shopTelefonnr->Text = srShop->ReadLine();
					tmpControl->shopStrassenname->Text = srShop->ReadLine();
					tmpControl->shopPLZ->Text = srShop->ReadLine();
					tmpControl->shopOrt->Text = srShop->ReadLine();
					srShop->Close();

					//Position des UserControls
					tmpControl->Location = Point(0, -1 +  (102 * anz));

					//Hinzufügen zum ControlCollective
					PanelShopFound->Controls->Add(tmpControl);

					//Anzahl hochzählen
					anz++;
				}
			}
			//Wenn nur 1 oder 2 Shops gefunden -> verkleinere Fenster um Scrollbalkenbreite (Wegen Rahmen)
			if(anz <= 2) this->ClientSize = System::Drawing::Size(575 - SystemInformation::VerticalScrollBarWidth, 451);

			//Ansonsten wieder so groß, dass Scrollbalken mit hinein passt
			else this->ClientSize = System::Drawing::Size(575, 451);
		}
		else
		{
			Fehler^ fail = gcnew Fehler();
			fail->ShowDialog();
		}
	}
Void Search_Shop::Abbrechen_Click(System::Object^  sender, System::EventArgs^  e) 
	{
			 Close();
	}
}