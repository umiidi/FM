#include<stdio.h>
int main(){
	int n,a,b,c;
	int result;
	scanf("%d",&n);
	a = n%10;
	b = n/10%10;
	c = n/100;
	if(a>=b and b>=c) result = c*100 + b*10 + a;
	else if(a>=c and c>=b) result = b*100 + c*10 + a;
	else if(b>=a and a>=c) result = c*100 + a*10 + b;
	else if(b>=c and c>=a) result = a*100 + c*10 + b;
	else if(c>=a and a>=b) result = b*100 + a*10 + c;
	else result = a*100 + b*10 + c;
	printf("%d",result);
return 0;
}

//3reqemli ededin reqemlerini ele deyismek lazimdir ki, eded minimal olsun
