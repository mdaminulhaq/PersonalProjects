// DPCoinChange.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int coins[] = { 1, 5, 10, 20, 25 };

int makeChange(int amount)
{
	return amount;
}

int main()
{
	cout << "What is amount to change:";
	int amount;
	cin >> amount;
	int minCoinRequired = makeChange(amount);
	cout << "Minimum coins required is " << minCoinRequired << endl;
    return 0;
}

