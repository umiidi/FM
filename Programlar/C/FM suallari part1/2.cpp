#include<stdio.h>
int main(){
	float x,y,z,a,b,c;
	printf("x= "); scanf("%f",&x);
	printf("y= "); scanf("%f",&y);
	printf("z= "); scanf("%f",&z);
	a=x;
if(a<y) a = y;
if(a<z) a = z;
printf("en boyuk eded: %0.1f",a);

b=x;
if(b>y) b = y;
if(b>z) b=z;
printf("\nen kicik eded: %0.1f",a);

c=x;
if(y<a && y>b) c=y;
if(z<a && z>b) c=z;
printf("\nortalama eded: %0.1f",c);
}
//en boyuk eded, en kicik ve orta ededi tapan program
