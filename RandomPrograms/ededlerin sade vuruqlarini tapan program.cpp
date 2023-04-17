#include<iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	int temp=num;
	cout<<num<<"=";
	if(num==1)cout<<1;
	else{
	for(int i=2;i<=num;i++){
	    while(true){
	        if(temp%i==0){
	        	if(temp==i)cout<<i;
	        	else cout<<i<<"*";
	        	temp/=i;
	        }else break;   	        
}
}
}
return 0;
}
