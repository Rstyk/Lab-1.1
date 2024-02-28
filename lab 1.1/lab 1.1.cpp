#include <iostream>
#include "Time.h"

using namespace std;

Time makeTime(double x, double y)
{
	Time z;
	if (!z.Init(x, y))
		cout << "Wrong arguments to Init!" << endl;
	return z;
}

int main()
{
	Time z;
	z.Read();
	z.Display();
	cout << " Time = " << z.Minutes() << endl << endl;

	int x, y;
	cout << "Input time:" << endl << endl;
	cout << " Hours = "; cin >> x;
	cout << " Minutes = "; cin >> y;
	z = makeTime(x, y);
	cout << " Time = " << z.Minutes() << endl << endl;
	cin.get();

	return 0;
}

