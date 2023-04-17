#include<iostream>
using namespace std;
int main(){
	int n, arr[10] = {0};
	bool test=false;
	cin>>n;
	while(n){
		arr[n%10]++;
		n/=10;
	}
	for(int i=0; i<10; i++){
		if(arr[i]%2==1){
			if(test){
				cout<<"No";
				return 0;
			}
			test=true;
		}
	}
	cout<<"Yes";
	return 0;
}

// Verilmis ededin reqemlerinin yerlerini deyisdikde polindrom eded alinib-alinmadigini test eden program