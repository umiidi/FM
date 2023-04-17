#include<iostream>
using namespace std;
int main(){
	float a,b,c;
	cin>>a>>b>>c;
	if(a+b>c and a+c>b and b+c>a){
		if(a*a + b*b == c*c)cout<<"duzbucaqli";
		else if(a*a + b*b < c*c)cout<<"korbucaqli";
		else cout<<"itibucaqli";
	}
	else cout<<"bele ucbucag yoxdur";
	
return 0;
}

//terefleri daxil edilmis ucbucagin hansi novune aid oldugunu teyin edir
