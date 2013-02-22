#pragma once
#include "stdafx.h"
ref class CBenutzer
{
private:
	String^ Benutzername;
	String^ Passwort;
	String^ Vorname;
	String^ Nachname;
	String^ Telefonnr;
	String^ Email;
	String^ Shopname;
public:
	CBenutzer(String^ , String^ , String^ , String^ , String^ , String^);
	~CBenutzer();

	String^ getName();
	String^ getVorname();
	String^ getNachname();
	String^ getTelefonnr();
	String^ getEmail();
	String^ getShopname();
};

