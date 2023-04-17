#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c;
	cin>>a>>b>>c;
	if(a==0 && b==0 && c==0)cout<<"sonsuz sayda kökü var";
	else if(a==0 && b==0)cout<<"kökü yoxdur";
	else if (a==0)cout<<-c/b;
	else{
		float D = b*b-4*a*c;
		if(D>0){
			float x1 = (-b + sqrt(D))/(2*a);
			float x2 = (-b - sqrt(D))/(2*a);
			cout<<x1<<" "<<x2;
		}else if(D==0){
			float x = (-b + sqrt(D))/(2*a);
			cout<<x;
		}else{
			cout<<"kökü yoxdur";
		}
	}
}