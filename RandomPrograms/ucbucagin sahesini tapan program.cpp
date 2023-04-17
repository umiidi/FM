#include<iostream>
#include<math.h>
using namespace std;
int sahe(int x, int y, int z) 
{
	float p,s;
	if(x+y>z&&x+z>y&&y+z>x) 
	{
		p=(x+y+z)/2;
		s=sqrt(p*(p-x)*(p-y)*(p-z));
		cout<<"s= "<<s;
			

	}
else cout<<"ucbucaq qurmaq mumkun deyil";
return s;

}
int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	cout<<sahe(a,b,c)<<endl;
    cout<<sahe(a,b,d)<<endl;
	cout<<sahe(a,c,d)<<endl;
    cout<<sahe(b,c,d)<<endl;
return 0;
}

//4 teref verilir. Hemin tereflere esasen üçbucað qurmaq mümkündürse sahesini tapýr, eks halda 'Olmaz' mesajý ekrana çýxýr
