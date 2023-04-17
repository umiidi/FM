#include<iostream>
using namespace std;
int main(){
	string n;
	cin>>n;
	for(int i=0; i<n.length(); i++){
		int count=0;
		for(int j=0; j<n.length(); j++){
			if (n[j] == n[i]) count++;
		}
		if(count>=2){
			cout<<"Yes";
			return 0;
		}
	}
	cout<<"No";
	return 0;
}

// Verilmis setrin simvollarinin bezilerini silmekle minimum uzunlugu 3 olan polindrom setr almagin mumkunluyunu test eden program
