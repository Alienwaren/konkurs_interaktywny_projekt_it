#include "postac.h"
#include <iostream>

using namespace std;
postac::postac(void)
{
	hp = 100;
}

int postac::ustawAtrybuty()
{
	
	const int przelicznik_intel_mana = 10;
	const int przelicznik_obr_str = 2;
	const int przeliczniek_agl_obr_bzw = 1;
	const int def_obr = 1;
	cin >> str;
	cin >> intel;
	cin >> agl;
	obrona_bazowa = agl * przeliczniek_agl_obr_bzw;
	def = obrona_bazowa;
	obr = (str * przelicznik_obr_str) - def;
	mana = intel * przelicznik_intel_mana;
	return obr, intel;
}


postac::~postac(void)
{
}
