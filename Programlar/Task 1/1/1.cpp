#include<iostream>
using namespace std;
int main(){
	int n, temp, eks=0;
	cin>>n;
	temp = n;
	while(temp){
		eks = eks*10 + temp%10;
		temp/=10;
	}
	if(n==eks) cout<<"Yes";
	else cout<<"No";
	return 0;
}

//Verilmis ededin polindrom olub olmadigini yoxlayan program
