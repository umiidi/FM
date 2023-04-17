#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
n = n/100 * 100 + n%10 *10 + n/10%10;
printf("%d",n);
return 0;
}

//3reqemli ededin teklikleri ve onluqlarinin yerini deyismek
