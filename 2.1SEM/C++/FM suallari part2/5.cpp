#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number: ";
	cin>>n;
	
	
	if(n>0){
		bool primeNumber[n+1];

	for(int i=2;i<n+1;i++){
		primeNumber[i] = true;
	}

	for(int i=2;i<n+1;i++){
		if(primeNumber[i] == true)
			for(int j=i*i;j<n+1;j+=i)
			    primeNumber[j] = false;
	}

	for(int i=2;i<n+1;i++){
		if(primeNumber[i] == true) cout<<i<<" ";
	}
	}
else cout<<"enter the correct numbers";

}

//erotosfen xelbiri
