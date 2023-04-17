#include<stdio.h>
#include<math.h>
int main(){
double a,b,c,D;
scanf("%lf %lf %lf",&a,&b,&c);
if(a==0 && b==0 && c==0) printf("an infinite number of solution");
else if (a==0 && b==0) printf("the equation has no root");
else if(a==0) {
	printf("%0.2f",-c/b);
}
else {
	D = b*b - 4*a*c;
    if(D>0){
	double x1=(-b-sqrt(D))/(2*a);
	double x2=(-b+sqrt(D))/(2*a);
	printf("%0.2lf %0.2lf",x1,x2);
    } else if(D==0){
    	double x=(-b)/(2*a);
	    printf("%0.2lf",x);
	}
    else printf("the equation has no root");
}
return 0;
}

//kvadrat tenlik hesablayan program
