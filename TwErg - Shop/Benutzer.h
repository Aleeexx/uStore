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
public:
	CBenutzer();
	~CBenutzer();
};

