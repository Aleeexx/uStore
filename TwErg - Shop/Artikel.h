#pragma once
#include "stdafx.h"

ref class CArtikel
{
private:
	String^ Artikelname;
	String^ Preis;
	String^ Beschreibung;
	String^ BildPfad;
	String^ Verkaeufer;

	int Anzahl;
	bool neuGebraucht;

public:
	CArtikel(String^, String^, String^, String^, String^);
	~CArtikel();
};