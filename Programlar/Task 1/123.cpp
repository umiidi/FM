#include<iostream>
using namespace std;
bool checkPolindrom(string n){
	int len = n.length();
	for(int i=0; i<len/2; i++){
		if(n[i] != n[len - i - 1]){
			return 0;
		}
	}
	return true;
}

int countCharacterInString(char x, string n){
	int count=0;
	for(int i=0; i<n.length(); i++){
		if(n[i] == x) count++;
	}
	return count;
}

bool checkPseudoPolindrom(string n){
	char c = NULL;
	for(int i=0; i<n.length(); i++){
		if(c == n[i]) continue;
		int count = countCharacterInString(n[i], n);
		if(count%2 == 1){
			if(c) {
				return false;
			}
			c = n[i];
		}
	}
	return true;
}

bool checkQuasiPolindrom(string n){
	for(int i=0; i<n.length(); i++){
		int count = countCharacterInString(n[i], n);
		if(count>=2)return true;
	}
	return false;
}

int main(){
	string n;
	cin>>n;
	if(checkPolindrom(n)) cout<<"Polindrom";
	else if(checkPseudoPolindrom(n)) cout<<"PseudoPolindrom";
	else if(checkQuasiPolindrom(n)) cout<<"QuasiPolindrom";
	else cout<<"None";
}

// Verilmis setrin polindrom, pseudo polindrom yoxsa quasi polindrom oldugunu teyin eden program
