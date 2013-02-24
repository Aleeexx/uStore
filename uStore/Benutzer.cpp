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

String^ CBenutzer::getName()
{
	return Benutzername;
}
String^ CBenutzer::getVorname()
{
	return Vorname;
}
String^ CBenutzer::getNachname()
{
	return Nachname;
}
String^ CBenutzer::getTelefonnr()
{
	return Telefonnr;
}
String^ CBenutzer::getEmail()
{
	return Email;
}
String^ CBenutzer::getShopname()
{
	return Shopname;
}