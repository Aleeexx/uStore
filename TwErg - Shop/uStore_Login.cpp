// TwErg - Shop.cpp: Hauptprojektdatei.

#include "stdafx.h"
#include "uStore_Login.h"
#include "uStore_main.h"
#include "uStore_Register.h"
#include "Fehler.h"
#include "Benutzer.h"

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
	String^ tmp1 = Environment::GetFolderPath(Environment::SpecialFolder::Desktop) + "\\Benutzer";
	String^ tmp2 = ".txt";
	String^ fileName = tmp1 + "\\user_" + IDLogin->Text + tmp2;
	//Wenn Ordner nicht vorhanden
	if(!Directory::Exists(tmp1))
	{
		Directory::CreateDirectory(tmp1);
	}
	//Wenn Datei vorhanden, Datei nicht leer und Passwort vorhanden
	if(File::Exists(fileName))
	{
		StreamReader^ sr = File::OpenText(fileName);
		if((sr->ReadLine() == String::Format("{0}", PWLogin->Text->GetHashCode())) 
			&& (sr->ReadLine() != nullptr))
			{
				sr->Close();

				//Lege Benutzerobjekt an
				StreamReader^ sr = File::OpenText(fileName);
				CBenutzer^ user = gcnew CBenutzer(IDLogin->Text, sr->ReadLine(), sr->ReadLine(),
					sr->ReadLine(), sr->ReadLine(), sr->ReadLine());
				sr->Close();

				//Starte Main Programm
				Hide();
				uStore_main ^ main = gcnew uStore_main(user);
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