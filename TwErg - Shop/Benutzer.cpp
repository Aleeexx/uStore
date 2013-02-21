#include "StdAfx.h"
#include "Benutzer.h"


CBenutzer::CBenutzer(String^ tmpName, String^ tmpPW, String^ tmpVorname,
	String^ tmpNachname, String^ tmpTelefonnr, String^ tmpEmail)
{
	Benutzername = tmpName;
	Passwort = tmpPW;
	Vorname = tmpVorname;
	Nachname = tmpNachname;
	Telefonnr = tmpTelefonnr;
	Email = tmpEmail;
}
CBenutzer::~CBenutzer()
{

}