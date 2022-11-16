#include<iostream>
#include<iomanip>
using namespace std;
int main(){
float x,y,eorta,hasil;
cin>>x>>y;
eorta = (x+y)/2;
hasil = 2*x*y;
if(x>y){
	y = eorta;
	x = hasil;
}else {
	x = eorta;
	y = hasil;
}
cout<<fixed<<setprecision(2)<<x<<" "<<y;
return 0;
}

//x ve y ededlerinin ededi ortasini tapir kicik edede menimsedir, ikiqat hasili ise boyuk edede menimsedir
