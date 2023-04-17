#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
printf("%d",n/10000 + n/1000%10 - (n/10%10 + n%10));
return 0;
}

//5reqemli ededin ilk 2reqeminin ceminden son 2reqeminin cemini cixan program
