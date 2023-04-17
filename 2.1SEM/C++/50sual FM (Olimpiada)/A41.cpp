#include<iostream>
using namespace std;
int main(){
float a,b,c,d;
cin>>a>>b>>c>>d;
if(a>=b and b>=c and c>=d){
	b=a;
	c=a;
	d=a;
	cout<<a<<" "<<b<<" "<<c<<" "<<d;
}
else if(a<b and b<c and c<d){
	cout<<a<<" "<<b<<" "<<c<<" "<<d;
}
else {
	a=a*a;
	b=b*b;
	c=c*c;
	d=d*d;
	cout<<a<<" "<<b<<" "<<c<<" "<<d;
}
return 0;
}

//a b c d ededleri verilib
//d<=c<=b<=a olarsa en boyuyunun qiymetini hamsina menimsedin
//a<b<c<d olarsa hec bir deyisiklik olmur
//eks halda ededleri kvadratlari ile evezleyir
