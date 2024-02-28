#include "Time.h"
#include <cmath>
#include <iostream>

using namespace std;

void Time::SetFirst(int value)
{
	first = value;
}

void Time::SetSecond(int value)
{
	second = value;
}

bool Time::Init(int x, int y)
{
	if (x > 0 && y > 0)
	{
		first = x;
		second = y;
		return true;
	}
	else
	{
		return false;
	}
}

void Time::Read()
{
	int x, y;
	do
	{
		cout << "Input hours and minutes:" << endl;
		cout << " Hours = "; cin >> x;
		cout << " Minutes = "; cin >> y;
	} while (!Init(x, y));
}

void Time::Display() const
{
	cout << endl;
	cout << " Hours = " << first << endl;
	cout << " Minutes = " << second << endl;
}

int Time::Minutes() const
{
	return first * 60 + second;
}
