#include<iostream>
using namespace std;
int main(){
	string n;
	cin>>n;
	int len = n.length();
	for(int i=0; i<len/2; i++){
		if(n[i] != n[len - i - 1]){
			cout<<"No";
			return 0;
		}
	}
	cout<<"Yes";
	return 0;
}

//Verilmis setrin polindrom olub olmadigini yoxlayan program
