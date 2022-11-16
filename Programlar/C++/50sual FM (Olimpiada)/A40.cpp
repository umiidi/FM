#include<iostream>
#include<iomanip>
using namespace std;
int main(){
float x,y;
cin>>x>>y;
if(x<0){
	if(x>y)cout<<fixed<<setprecision(2)<<x;
	else cout<<fixed<<setprecision(2)<<y;
}
else{
	if(x<y)cout<<fixed<<setprecision(2)<<x;
	else cout<<fixed<<setprecision(2)<<y;
}
return 0;
}

///x ve y ededleri verilir, x menfidirse onlardan boyuyunu capa verir eks halda kiciyini capa verir
