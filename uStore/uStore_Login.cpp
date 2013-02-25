// TwErg - Shop.cpp: Hauptprojektdatei.

#include "stdafx.h"
#include "uStore_Login.h"
#include "uStore_main.h"
#include "uStore_Register.h"
#include "Fehler.h"
#include "Benutzer.h"

namespace uStore {

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Aktivieren visueller Effekte von Windows XP, bevor Steuerelemente erstellt werden
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Hauptfenster erstellen und ausf¸hren
	Application::Run(gcnew uStore_Login());
	return 0;
}

Void uStore_Login::Login_Click(System::Object^  sender, System::EventArgs^  e)
{
	//Pfad Zusammensetzung f¸r user_Benutzername.txt
	String^ tmp1 = Environment::GetFolderPath(Environment::SpecialFolder::ApplicationData) + "\\uStore\\Benutzer";
	String^ tmp2 = ".txt";
	String^ fileName = tmp1 + "\\user_" + IDLogin->Text + tmp2;
	//Erstelle Ordner, wenn noch nicht vorhanden
	if(!Directory::Exists(tmp1))
	{
		Directory::CreateDirectory(tmp1);
	}
	//Wenn Datei vorhanden, Datei nicht leer und Passwort vorhanden
	if(File::Exists(fileName))
	{
		StreamReader^ sr = File::OpenText(fileName);
		if(sr->ReadLine() == String::Format("{0}", PWLogin->Text->GetHashCode()))
			{
				sr->Close();

				//Lege Benutzerobjekt an
				StreamReader^ sr = File::OpenText(fileName);
				//Lies Daten aus user_Benutzername.txt ein und speichere sie in dem Objekt
				//des angemeldeten Benutzers
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
	//Schlieﬂe uStore_Login
	Close();
}
Void uStore_Login::Register_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 //Starte eine neue Instanz von uStore_Register, vestecke uStore_Login
			 Hide();
			 uStore_Register^ Register = gcnew uStore_Register();
			 Register->ShowDialog();
			 //Zeige uStore_Login nach schlieﬂen von uStore_Register wieder
			 Visible = true;
		 }

}