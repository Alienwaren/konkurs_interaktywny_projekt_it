#include "postac.h"
#include <iostream>

using namespace std;
postac::postac(void)
{
}

int postac::ustawAtrybuty()
{
	hp = 100;
	const int przelicznik_obr_str = 2;
	cin >> str;
	cin >> intel;
	cin >> agl;
	obr = str * przelicznik_obr_str;
	return obr;
}


postac::~postac(void)
{
}
