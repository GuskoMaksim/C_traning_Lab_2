#pragma once
#include <iostream>
#include <string>
using namespace std;
class Strochka
{
private:
	string Str;
	int dlin;
public:
	Strochka(string Str_new): Str(Str_new)
	{
		dlin = Str.length();
		cout << Str << endl;
	}
	Strochka(string Str_new, int dl) : Str(Str_new), dlin(dl)
	{
		cout << Str << endl;
		dl = Str.length();
		if (dl > dlin)
			for (int i = dl; i > dlin; i--)
			{
				Str[i] = '\0';
			}
		if (dl < dlin)
		{
			for (int i = dl - 1; i < dlin; i++)
			{
				Str = Str + ".";
			}
		}
	}
	~Strochka()
	{
		cout << Str << endl;
	}
	void redact(char poisk = ' ', char zamen = '.')
	{
		if (dlin % 2 == 0)
		{
			int a=dlin;
			while (true)
			{
				a = Str.find_last_of(poisk);
				if (a < dlin / 2)
					break;
				Str[a] = zamen;
			} 
		}
		else
		{
			Str[dlin / 2] = zamen;
		}
	}
};

