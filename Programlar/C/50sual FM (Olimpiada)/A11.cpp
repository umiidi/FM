#include<stdio.h>
int main(){
int n,result;
scanf("%d",&n);
result = n%10*100 + n/10%10 * 10 + n/100; 
printf("%d",result);
return 0;
}

//3reqemli ededin sagdan sola oxunmasi ile alinan ededi capa veren program
