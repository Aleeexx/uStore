#pragma once
#include "stdafx.h"

ref class CAdresse
{
private:
	String^ Strassenname;
	int Hausnummer;
	int PLZ;
	String^ Ort;
	
public:
	CAdresse();
	~CAdresse();
};

