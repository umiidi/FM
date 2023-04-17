#include<stdio.h>
int main(){
int n,result=0;
scanf("%d",&n);
while(n>0){
	result+=(n%10)*(n%10);
	n/=10;
}
printf("%d",result);
return 0;
}

//5reqemli ededin reqemlerinin kvadratlari cemini tapir
