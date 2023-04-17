#include<stdio.h>
int main(){
float a,b;

printf("ax=b\n");
printf("a= ");      scanf("%f",&a);
printf("b= ");      scanf("%f",&b);
printf("");

if(a==0 && b==0) printf("tenliyin sonsuz sayda helli var");
else if(a==0) printf("tenliyin helli yoxdur");
else printf("x= %0.2f",b/a);
}

//xetti tenlik sistemini helli programi
