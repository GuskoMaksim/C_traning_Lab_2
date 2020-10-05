#include <iostream>
#include "Strochka.h"
using namespace std;

int main()
{
	Strochka first("Hello, my name is Maks");
	Strochka second("I from Belarus!");
	Strochka th("I live",51);
	Strochka fo("Two lines are in one",10);
	cout << endl << endl;
	first.redact();
	second.redact();
	th.redact('.', '!');
	fo.redact('s', '?');
}