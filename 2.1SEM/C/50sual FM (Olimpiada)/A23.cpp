#include<stdio.h>
int main(){
int n,eksi=0;
scanf("%d",&n);
while(n>0){
	eksi = eksi*10 + n%10;
	n/=10;
}
printf("%d",eksi);
return 0;
}

//5reqemli ededin eks sira ile yazmaqla yeni eded yaradilir
