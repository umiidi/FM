#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int cem= n%10 + n/10%10 + n/100;
int hasil = (n%10) * (n/10%10) * (n/100);
printf("%d %d",cem,hasil);
return 0;
}

//3reqemliededin cem ve hasilini tapir
