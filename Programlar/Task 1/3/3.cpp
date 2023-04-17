#include<iostream>
using namespace std;
int main(){
	int n;
	int arr[10] = {0};
	cin>>n;
	while(n){
		arr[n%10]++;
		n/=10;
	}
	for(int i=0; i<10; i++){
		if (arr[i]>=2){
			cout<<"Yes";
			return 0;
		}
	}
	cout<<"No";
	return 0;
}

// Verilmis ededin reqemlerinin bezilerini silmekle minimum uzunlugu 3 olan polindrom eded almagin mumkunluyunu test eden program
