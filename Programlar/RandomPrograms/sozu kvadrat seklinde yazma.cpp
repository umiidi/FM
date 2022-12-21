#include<iostream>
using namespace std;
int main(){
	int n=1,y; char soz[y];
cout<<"nece herfli soz daxil edeceksiniz? \n";
	cin>>y;
cout<<"sozu daxil edin \n";
    cin>>soz;
while(n<=y)
	{
if(n==1){
    for(int i=0;i<y;i++) cout<<soz[i]; cout<<endl; }
	 
else if (n==y){
    for(int i=y-1;i>=0;i--) cout<<soz[i]; cout<<endl;}
	  
else{ 
    for(int i=1;i<=y;i++) {
	    if(i==1) cout<<soz[n-1]; 
		  else if(i==y)cout<<soz[y-n]<<endl;
			else cout<<" ";  }}
n++;
	}
return 0;	
}

//n herfli söz daxil edilir. Hemin herfi kvadrat þeklinde ekrana çýxardýr

