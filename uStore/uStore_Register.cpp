#include "StdAfx.h"
#include "uStore_Register.h"
#include "Fehler.h"

namespace uStore {

void uStore_Register::EingabeFehler()
	{
		Fehler^ fail = gcnew Fehler();
		fail->ShowDialog();
		Passwort1->Text = "";
		Passwort2->Text = "";
	}
Void uStore_Register::erstellenAbbrechen_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//Schließe Form
		Close();
	}
Void uStore_Register::erstellen_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//Wenn alle Felder (korrekt) gefüllt
		if(freiBelegt->ImageLocation == "frei.png")
		{
		if(korrektFalsch->ImageLocation == "frei.png")
		{
		if(Benutzername->Text != "")
		{
		if(Vorname->Text != "")
		{
		if(Nachname->Text != "")
		{
		if(Telefonnr->Text != "")
		{
		if(Email->Text != "")
		{
		//Passwort Felder 1+2 nicht leer und 1 = 2
		if((Passwort1->Text != "" && Passwort2->Text != "") && (Passwort1->Text == Passwort2->Text))
		{
			//user_Benutzername.txt in &Appdata%\uStore\Benutzer anlegen
			String^ tmp1 = Environment::GetFolderPath(Environment::SpecialFolder::ApplicationData) + "\\uStore\\Benutzer";
			String^ tmp2 = ".txt";
			String^ fileName = tmp1 + "\\user_" + Benutzername->Text + tmp2;

			//Erstelle %AppData%\uStore\Benutzer
			if(!Directory::Exists(tmp1))
			{
				Directory::CreateDirectory(tmp1);
			}

			//In die Datei schreiben
			StreamWriter^ sw1 = gcnew StreamWriter(fileName);
			//Passwort in Hash umwandeln
			sw1->WriteLine(Passwort1->Text->GetHashCode());
			sw1->WriteLine(Vorname->Text);
			sw1->WriteLine(Nachname->Text);
			sw1->WriteLine(Telefonnr->Text);
			sw1->WriteLine(Email->Text);
			sw1->Close();

			//userList.txt in &Appdata%\uStore\Benutzer anlegen
			tmp1 = Environment::GetFolderPath(Environment::SpecialFolder::ApplicationData) + "\\uStore\\Listen";
			fileName = tmp1 + "\\userList.txt";

			//Erstelle %AppData%\uStore\Liste 
			if(!Directory::Exists(tmp1))
			{
				Directory::CreateDirectory(tmp1);
			}
			
			//userList.txt schreiben
			StreamWriter^ sw2 = gcnew StreamWriter(fileName, true);
			sw2->WriteLine(Benutzername->Text);
			sw2->Close();
			
			//Form schließen
			Close();
		}
		//Fehlermeldungsfenster und Schließung der Ifs
		else {EingabeFehler();}} else {EingabeFehler();}}
		else {EingabeFehler();}} else {EingabeFehler();}}
		else {EingabeFehler();}} else {EingabeFehler();}}
		else {EingabeFehler();}} else {EingabeFehler();}
	}
Void uStore_Register::OnChangeName(System::Object^  sender, System::EventArgs^  e)
	{
		//Überprüfung ob Benutzername schon vorhanden
		//Wenn Benutzername Textfeld nicht leer, dann..
		if(Benutzername->Text != "")
		{
			//zusammensetzung der Pfades mit eingegebenen Benutzername
			String^ tmp1 = Environment::GetFolderPath(Environment::SpecialFolder::ApplicationData) + "\\uStore\\Benutzer";
			String^ tmp2 = ".txt";
			String^ fileName = tmp1 + "\\user_" + Benutzername->Text + tmp2;

			//Wenn vorhanden, belegt.png in PictureBox
			if(File::Exists(fileName)) freiBelegt->ImageLocation = "belegt.png";
			//Wenn frei, frei.png in PictureBox
			else freiBelegt->ImageLocation = "frei.png";
		}
		//Wenn TextBox leer, leere die PictureBox
		else freiBelegt->ImageLocation = "";
	}
Void uStore_Register::OnChanceEmail(System::Object^  sender, System::EventArgs^  e)
	{
	//Überprüfung ob Email-Syntax korrekt ist
	//Wenn Email '@' enthält
	if(Email->Text->IndexOf('@') > 0)
	{
		//Speichere den Index von '@' in index 
		int index = Email->Text->IndexOf('@');
		//Suche ab index nach .de, .net. .com usw.
		if (Email->Text->IndexOf(".de",   index) != -1
			|| Email->Text->IndexOf(".de",   index) != -1
			|| Email->Text->IndexOf(".net",  index) != -1
			|| Email->Text->IndexOf(".com",  index) != -1
			|| Email->Text->IndexOf(".info", index) != -1
			|| Email->Text->IndexOf(".org",  index) != -1)
		{
			//Wenn eine der "Domains" nach dem '@' kommt, frei.png in PictureBox
			korrektFalsch->ImageLocation = "frei.png";
		}
		else
		{
			//Wenn nicht belegt.png in PictureBox
			korrektFalsch->ImageLocation = "belegt.png";
		}
	}
	else
	{
		//Wenn Email kein '@' enthält belegt.png in Picture Box
		korrektFalsch->ImageLocation = "belegt.png";
	}
	}
Void uStore_Register::uStore_Register_Load(System::Object^  sender, System::EventArgs^  e)
	{
		//Erstelle %AppData%\uStore\Benutzer bei LoadUp von uStore_Register
		String^ tmp = Environment::GetFolderPath(Environment::SpecialFolder::ApplicationData) + "\\uStore\\Benutzer";
		if(!Directory::Exists(tmp))
		{
		Directory::CreateDirectory(tmp);
		}
	}

}