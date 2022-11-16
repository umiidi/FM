#include<iostream>
using namespace std;
int main(){
	int n,result=0,count=1;
	cin>>n;
	while(n>0){
		if(n%2!=0){
			result+=n%10*count;
			count*=10;
		}
		n/=10;
	}
	cout<<result;
return 0;
}

//dordreqemli ededin cut reqemlerini atir, yerde qalanlari chap edir
