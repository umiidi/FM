#include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(b+c+d>a and a+c+d>b and a+b+d>c and a+b+c>d)cout<<"yes";
	else cout<<"no";
return 0;
}

//terefleri a,b,c,d olan dordbucaglinin movcud olub olmamasini yoxlayan program
