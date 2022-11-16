#include<stdio.h>
int main(){
float a,b,c,d;
scanf("%f%f%f%f",&a,&b,&c,&d);
if(a>=b and b>=c and c>=d){
	b=a;
	c=a;
	d=a;
	printf("%0.2f %0.2f %0.2f %0.2f",a,b,c,d);
}
else if(a<b and b<c and c<d){
	printf("%0.2f %0.2f %0.2f %0.2f",a,b,c,d);
}
else {
	a=a*a;
	b=b*b;
	c=c*c;
	d=d*d;
	printf("%0.2f %0.2f %0.2f %0.2f",a,b,c,d);
}
return 0;
}

//a b c d ededleri verilib
//d<=c<=b<=a olarsa en boyuyunun qiymetini hamsina menimsedin
//a<b<c<d olarsa hec bir deyisiklik olmur
//eks halda ededleri kvadratlari ile evezleyir
