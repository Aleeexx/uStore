// TwErg - Shop.cpp: Hauptprojektdatei.

#include "stdafx.h"
#include "uStore_Login.h"
#include "uStore_main.h"

using namespace TwErgShop;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Aktivieren visueller Effekte von Windows XP, bevor Steuerelemente erstellt werden
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Hauptfenster erstellen und ausführen
	Application::Run(gcnew uStore_Login());
	return 0;
}

Void uStore_Login::Login_Click(System::Object^  sender, System::EventArgs^  e)
{
	if(IDLogin->Text == L"Benutzername" && PWLogin->Text == L"Passwort")
	{
		//Starte Main Programm
		Hide();
		uStore_main ^ main = gcnew uStore_main();
		main->ShowDialog();
		//Visible = true;
		Close();
	}
	else
	{
		//Login Fehler
		Login_Fehler ^ fail = gcnew Login_Fehler();
		fail->ShowDialog();
	}
}
Void uStore_Login::Beenden_Click(System::Object^  sender, System::EventArgs^  e) 
{
	 
	Close();
}
Void uStore_Login::Register_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 ClientSize = System::Drawing::Size(328, 300);
			 Login->Location = System::Drawing::Point(-1, 253);
			 Register->Location = System::Drawing::Point(108, 253);
			 Beenden->Location = System::Drawing::Point(218, 253);
			 ButtonBorder->Location = System::Drawing::Point(-1, 253);

			 Label^ label4 = (gcnew System::Windows::Forms::Label());
		 	 label4->AutoSize = true;
		 	 label4->Location = System::Drawing::Point(10, 161);
			 label4->Name = L"label4";
			 label2->Size = System::Drawing::Size(100, 16);
			 label4->TabIndex = 8;
			 label4->Text = L"Passwort wiederholen:";
		 }