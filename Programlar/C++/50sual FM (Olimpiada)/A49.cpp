#include<iostream>
using namespace std;
int main(){
	int n,a,b,c;
	int result;
	cin>>n;
	a = n%10;
	b = n/10%10;
	c = n/100;
	if(a>=b and b>=c) result = a*100 + b*10 + c;
	else if(a>=c and c>=b) result = a*100 + c*10 + b;
	else if(b>=a and a>=c) result = b*100 + a*10 + c;
	else if(b>=c and c>=a) result = b*100 + c*10 + a;
	else if(c>=a and a>=b) result = c*100 + a*10 + b;
	else result = a*100 + b*10 + c;
	cout<<result;
return 0;
}

//3reqemli ededin reqemlerini ele deyismek lazimdir ki, eded maksimum olsun
