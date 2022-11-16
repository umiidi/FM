#include<iostream>
using namespace std;
int main(){
int n,cem=0;
cin>>n;
while(n>0){
	cem +=n%10;
	n/=10;
}
if(cem%2==0 and cem%3==0)cout<<"yes";
else cout<<"no";
return 0;
}

//4reqemli ededin reqemleri ceminin 2 veya 3un misilleri oldugunu teyin eden program
