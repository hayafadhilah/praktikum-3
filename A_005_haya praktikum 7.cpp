 /***haya fadhilah***/
/////20051397005/////
/*****MI 2020A*****/

#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "segitiga angka";
	cin >> n;
	
	cout << "pola haya\n\n";
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			cout << j ;
		}
		
		cout << endl;
	}
		for(int i=n-1;i>=1;i--){
	     for(int j=1;j<=i;j++){
	    	cout<<j; 
     	}
     	cout<<endl;
		
		
	}
	cin.get();
	return 0;
	
}
