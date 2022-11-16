#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
n = n%10 + n/100 *10 + n/10%10 *100;
printf("%d",n);
return 0;
}

//3reqemli ededin yuzluk ve onluqlarinin yerini deyisin.
