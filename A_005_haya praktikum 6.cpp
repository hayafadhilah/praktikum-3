/////haya fadhilah/////
/*****20051397005****/
/******MI 2020A*****/

#include <iostream> 
#include <conio.h>
using namespace std;

int main (){
	int i, j;
	
	cout << "\t \t TABEL PERKALIAN 1-10 \t \t \n" << endl;
	cout << " \t1 \t2 \t3 \t4 \t5 \t6 \t7 \t8 \t9 \t10\n";

	
	for (i=1; i<=10; i++){
		cout << i <<endl ;
		
		for (j=1; j<=10; j++){
			
			cout << "\t";
			cout << i*j;
		}
		cout << endl ;
	}
	
	getch();
}
