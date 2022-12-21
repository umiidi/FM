#include<iostream>
#include<ctime>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	if (a<b){
		a = a+b;
		b = a-b;
		a = a-b;
	}
	while(a%b!=0){
		int temp=a%b;
		a = b;
		b = temp;
	}
	cout<<b;
	return 0;
}

