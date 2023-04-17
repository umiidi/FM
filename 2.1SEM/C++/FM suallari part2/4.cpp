#include<iostream>
#include<cmath>
using namespace std;
int main(){
double a,b,c,D;
cin>>a>>b>>c;

if(a==0 && b==0 && c==0) cout<<"an infinite number of solution";
else if (a==0 && b==0) cout<<"the equation has no root";
else if(a==0) {
	cout<<-c/b;
}
else {
	D = b*b - 4*a*c;
    if(D>0){
	double x1=(-b-sqrt(D))/(2*a);
	double x2=(-b+sqrt(D))/(2*a);
	cout<<x1<<" "<<x2;
    } else if(D==0){
    	double x=(-b)/(2*a);
	    cout<<x;
	}
    else cout<<"the equation has no root";	
}
return 0;
}

//kvadrat tenlik hesablayan program
