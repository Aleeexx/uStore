#include "StdAfx.h"
#include "Artikel.h"

CArtikel::CArtikel(String^ tmpName, String^ tmpPreis, String^ tmpBeschreibung, String^ tmpPfad, String^ tmpOwner)
{
	Artikelname = tmpName;
	Preis = tmpPreis;
	Beschreibung = tmpBeschreibung;
	BildPfad = tmpPfad;
	Verkaeufer = tmpOwner;
}
CArtikel::~CArtikel()
{

}