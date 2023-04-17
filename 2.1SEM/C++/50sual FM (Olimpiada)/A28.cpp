#include<iostream>
using namespace std;
bool tester(string s){
	for(int i=0; i<s.size();i++){
		if(s[i]=='3' and s[i+1]=='7')return true;
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

//dord reqemli ededin yazilisinda ardicil olaraq 3 ve 7 reqeminin olub olmadigini teyin edir
