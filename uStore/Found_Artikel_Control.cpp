#include "StdAfx.h"
#include "Found_Artikel_Control.h"

namespace uStore
{
Void Found_Artikel_Control::BnZumArtikel_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//Beschriftung in Kaufen ändern
		if(BnZumArtikel->Text == "Zum Artikel")
		{
			ptrMainPanel->Controls->Add(this);
			Location = System::Drawing::Point(0, 0);
			BnZumArtikel->Text = "Kaufen";
				 
			ptrSearchArtikel->Close();
		}
		//Den Artikel kaufen
		else if(BnZumArtikel->Text == "Kaufen")
		{

		}
	}
}