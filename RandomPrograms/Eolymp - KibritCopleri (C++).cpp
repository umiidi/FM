#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,result;
	cin>>n;
	int temp = sqrt(n);
	result = 4 + (temp-1)*3*2  + pow((temp-1),2)*2;
	int x = n-(temp*temp);
	if (x!=0){
		int a = x/(temp+1)+1;
		int b = x-a;
		result+=a*3 + b*2;
	}
	cout<<result;
}
