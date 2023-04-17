#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,c,S,p;
cout<<"terefleri daxil edin: \n";
cout<<"a= ";   cin>>a;
cout<<"b= ";   cin>>b;
cout<<"c= ";   cin>>c;

if(a+b>c && a+c>b && c+b>a){
	p=a+b+c;
	cout<<"ucbucagin perimetri: "<<p;
	p/=2;
	S = sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<"\nucbucagin sahesi: "<<S;
}
else cout<<"\nbele ucbucaq movcud deyil";
    
}

//ucbucagin perimetr ve sahesini hesablayir
