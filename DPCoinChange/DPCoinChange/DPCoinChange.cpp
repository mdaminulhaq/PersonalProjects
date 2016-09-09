// DPCoinChange.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int coins[] = { 1, 5, 10, 20, 25 };
int coins_size = sizeof(coins) / sizeof(coins[0]);

int result[256] = { -1 };

void init()
{
	for (int i = 0; i < 256; i++)
	{
		result[i] = -1;
	}
}

int makeChange(int amount)
{
	if (amount == 0)
	{
		return 0;
	}
	if (result[amount] != -1)
	{
		return result[amount];
	}

	int min = INT_MAX;
	for (int i = 0; i < coins_size; i++)
	{
		if (amount - coins[i] >= 0)
		{
			int res = makeChange(amount - coins[i]);
			if (res < min)
			{
				min = res;
			}
		}
	}
	result[amount] = min + 1;
	return result[amount];
}

int main()
{
	init();
	cout << "What is amount to change:";
	int amount;
	cin >> amount;
	int minCoinRequired = makeChange(amount);
	cout << "Minimum coins required is " << minCoinRequired << endl;
    return 0;
}

