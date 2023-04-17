#include<iostream>
using namespace std;
int main(){
	float x,y,z,a,b,c;
	cout<<"x= ";   cin>>x;
	cout<<"y= ";   cin>>y;
	cout<<"z= ";   cin>>z;
	
a=x;
if(a<y) a = y;
if(a<z) a = z;
cout<<"en boyuk eded: "<<a;

b=x;
if(b>y) b = y;
if(b>z) b=z;
cout<<"\nen kicik eded: "<<b;

c=x;
if(y<a && y>b) c = y;
if(z<a && z>b) c=z;
cout<<"\nortalama eded: "<<c;
}

//en boyuk eded, en kicik ve orta ededi tapan program
