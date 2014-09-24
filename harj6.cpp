/******
*ohjelman nimi: harjoitus 6
*tekij� Markus Malm
*Lyhyt kuvaus:
Kirjoita ohjelma, joka kysyy käyttäjältä lompakossa olevan rahamäärän
ja lihapiirakan hinnan.

Ohjelma tutkii, onko käyttäjällä varaa ostaa lihapiirakka.
Jos on, ohjelma ilmoittaa, kuinka paljon lompakkoon jää vielä rahaa.
Muuten ohjelma kehottaa käyttäjää paastoamaan.

Käytä vain kahta muuttujaa. älä vähennä lompakon sisältää, ellet voi
ostaa lihapiirakkaa.
*versio 1.0
*pvm: 17.9.2014
*/
#include <iostream>
using namespace std;
void main(void)
{
	int rahat;
	int hinta;

	cout << "Rahaa lompakossa?";
	cin >> rahat;
	cout << "Lihiksen hinta?";
	cin >> hinta;

	if (rahat >= hinta)
		cout << rahat - hinta;
	else
		cout << "Paastoa.";
}