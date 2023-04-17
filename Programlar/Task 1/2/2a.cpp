#include<iostream>
using namespace std;
int main(){
	string n;
	char c = NULL;
	cin>>n;
	for(int i=0; i<n.length(); i++){
		int count=0;
		if(c == n[i]) continue;
		for(int j=0; j<n.length(); j++){
			if(n[i] == n[j]) count++;
		}
		if(count%2 == 1){
			if(c) {
				cout<<"No";
				return 0;
			}
			c = n[i];
		}
	}
	cout<<"Yes";
	return 0;
}

// Verilmis setrin simvollarinin yerlerini deyisdikde polindrom eded alinib-alinmadigini test eden program
