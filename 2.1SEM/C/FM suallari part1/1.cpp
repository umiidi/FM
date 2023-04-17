#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,S,p;
    printf("terefleri daxil edin: \n");
    printf("a= "); scanf("%f",&a);
    printf("b= "); scanf("%f",&c);
    printf("c= "); scanf("%f",&b);


if(a+b>c && a+c>b && c+b>a){
	p=a+b+c;
	printf("ucbucagin perimetri: %0.1f",p);
	p/=2;
	S = sqrt(p*(p-a)*(p-b)*(p-c));
	printf("\nucbucagin sahesi: %0.1f",S);
}
else printf("bele ucbucaq movcud deyil");

    
}

//ucbucagin perimetr ve sahesini hesablayir
