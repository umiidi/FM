#include<iostream>
using namespace std;
int main(){
int n,eksi=0;
cin>>n;
while(n>0){
	eksi = eksi*10 + n%10;
	n/=10;
}
cout<<eksi;
return 0;
}

//5reqemli ededin eks sira ile yazmaqla yeni eded yaradilir
