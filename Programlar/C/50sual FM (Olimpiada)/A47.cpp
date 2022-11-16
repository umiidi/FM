#include<stdio.h>
int main(){
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(b+c+d>a and a+c+d>b and a+b+d>c and a+b+c>d)printf("yes");
	else printf("no");
return 0;
}

//terefleri a,b,c,d olan dordbucaglinin movcud olub olmamasini yoxlayan program
