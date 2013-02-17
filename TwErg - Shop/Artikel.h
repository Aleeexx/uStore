#pragma once
#include "stdafx.h"

ref class CArtikel
{
private:
	String^ Artikelname;
	String^ Firma;
	String^ Beschreibung;
	String^ Bild;

	float Preis;
	int Anzahl;
	bool neuGebraucht;

public:
	CArtikel();
	~CArtikel();
};