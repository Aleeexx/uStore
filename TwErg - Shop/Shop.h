#pragma once
#include "stdafx.h"

ref class CShop
{
private:
	String^ Shopname;
	String^ Besitzer;
	String^ Tags;

	String^ TelefonNr;
	String^ Strassenname;
	String^ Ort;

	int Hausnummer;
	int PLZ;

	bool privatGeschaeftlich;

public:
	CShop();
	~CShop();
};

