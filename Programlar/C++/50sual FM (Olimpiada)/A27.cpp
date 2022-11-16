#include<iostream>
using namespace std;
int main(){
int n;
bool test = false;
cin>>n;
while(n>0){
	if(n%10 == 3){
		test = true;
		break;
	}
	n/=10;
}
if(test) cout<<"yes";
else cout <<"no";
return 0;
}

//3reqemli ededin yazilisinda 3 reqeminin olub olmadigini teyin edir
