#pragma once
#include "stdafx.h"

ref class CArtikel
{
private:
	String^ Artikelname;
	String^ Firma;
	String^ Beschreibung;
	String^ Bild;
	String^ BildPfad;

	float Preis;
	int Anzahl;
	bool neuGebraucht;

public:
	CArtikel();
	~CArtikel();
};