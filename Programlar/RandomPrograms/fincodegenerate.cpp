#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
string fingenerate(){
	string fincode;
	string onefincode;
	srand(time(NULL));
	for (int i = 0; i<7 ; i++){
		int x = rand()%2;
		if (x ==0){
			fincode+= char(rand()%26+65);
		}
		else if (x==1){
			fincode+= char(rand()%9+49);
		}
	}
	return fincode;
}

int main(){
	cout<<fingenerate();
	return 0;
}

// Random olaraq herf ve reqemlerden FIN kod yaradýr	
