// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	int t,i,j,l,m,fla,lol;
	long k, *res, *res2;
	cin >> t;
	for (i = 0; i < t; i++)
	{
		cin >> k;
		//res = new long[k+1];
		res2 = new long[k + 1];
		fla = 0;
		lol =( k / 2)+1;
		if (k % 2 == 0)
		{
			lol = k / 2;
		}
		for (j = k,l=1,m=k;j>0; j--)
		{
			if (fla == 0)
			{
				res2[j] = m;
				m--;
				fla = 1;
			}
			else
			{
				res2[j] = l; l++;
				fla = 0;

			}

		}

		for (j = 1; j <= k; j++)
		{
			cout << res2[j] <<" ";
		}


	}
    return 0;
}

