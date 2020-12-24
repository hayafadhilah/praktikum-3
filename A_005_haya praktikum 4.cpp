/////haya fadhilah/////
/*****20051397005****/
/******MI 2020A******/

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

main()
{
	int jumlah = 0, i, pangkat;
	printf ("jumlah 9 suku pertama dari:");
	printf("\n");
	for(int i = 1; i <= 6; i++)
	{
		pangkat = pow(i, 2);
		printf("%i", i);
		printf("^ 2 = %i,", pangkat);
		jumlah += pangkat, pangkat++;
	}
	printf("\n");
	printf("jumlah hasil pangkat=%i",jumlah);
}
