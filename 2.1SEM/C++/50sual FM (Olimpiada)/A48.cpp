#include<iostream>
using namespace std;
int main(){
	int n;
	bool test=false;
	cin>>n;
	for(int i=1;i<=n;i++)
	if(i*i == n){
		test = true;
		break;
	}
	if(test)cout<<"yes";
	else cout<<"no";
	
return 0;
}

//ededin hansisa natural ededin kvadrati olub-olmadigini mueyyen eden program
