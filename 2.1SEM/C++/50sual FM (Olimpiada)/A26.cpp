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
if(tester(n))cout<<"no";
else cout<<"yes";
return 0;
}

//4reqemli ededin butun reqemlerinin ferqli olub olmadigini teyin edir
