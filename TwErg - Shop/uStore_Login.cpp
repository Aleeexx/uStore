// TwErg - Shop.cpp: Hauptprojektdatei.

#include "stdafx.h"
#include "uStore_Login.h"
#include "uStore_main.h"
#include "uStore_Register.h"
#include "Fehler.h"

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
	String^ fileName = IDLogin->Text;
	String^ tmp = ".txt";

	//Wenn Datei vorhanden, Datei nicht leer und Passwort vorhanden
	if(File::Exists(fileName + tmp))
	{
		StreamReader^ sr = File::OpenText(fileName + tmp);
		if((sr->ReadLine() == PWLogin->Text) && (sr->ReadLine() != nullptr))
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
			Fehler ^ fail = gcnew Fehler();
			fail->ShowDialog();
			}
		sr->Close();
	}
	else
		{
			//Login Fehler
			Fehler ^ fail = gcnew Fehler();
			fail->ShowDialog();
		}
}
Void uStore_Login::Beenden_Click(System::Object^  sender, System::EventArgs^  e) 
{
	 
	Close();
}
Void uStore_Login::Register_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 //ClientSize = System::Drawing::Size(328, 300);
			 //Login->Location = System::Drawing::Point(-1, 253);
			 //Register->Location = System::Drawing::Point(108, 253);
			 //Beenden->Location = System::Drawing::Point(218, 253);
			 //ButtonBorder->Location = System::Drawing::Point(-1, 253);

			 Hide();
			 uStore_Register^ Register = gcnew uStore_Register();
			 Register->ShowDialog();
			 Visible = true;
		 }