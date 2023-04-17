#include<stdio.h>
int main(){
	float a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c and a+c>b and b+c>a){
		if(a*a + b*b == c*c)printf("duzbucaqli");
		else if(a*a + b*b < c*c)printf("korbucaqli");
		else printf("itibucaqli");
	}
	else printf("bele ucbucag yoxdur");
	
return 0;
}

//terefleri daxil edilmis ucbucagin hansi novune aid oldugunu teyin edir
