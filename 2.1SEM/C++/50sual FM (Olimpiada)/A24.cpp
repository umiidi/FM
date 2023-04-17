#include<iostream>
using namespace std;
bool tester(string s){
	for(int i=0; i<s.size();i++){
		for(int j=i+1;j<s.size();j++){
			if(s[i] == s[j])return true;
		}
	}
	return false;
}
int main(){
string n;
cin>>n;
if(tester(n))cout<<"yes";
else cout<<"no";
return 0;
}

//5reqemli ededin yazilisinda eyni reqem olub olmadigini yoxlayir
