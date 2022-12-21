#include<iostream>
using namespace std;
int factorial(int a)
{
	int cavabb = 1;
    if(a==1||a==0)
    {
        return 1;
    }
    else
    {
        cavabb=a*factorial(a-1);
        return cavabb;
    }
} 
int kombinzon(int x,int y)
{

    int suret=factorial(x);
    int mexrec=factorial(x-y)*factorial(y);
    int cavab=suret/mexrec;
    return cavab;
}

int main()
{
	int h;
	cout<<"mertebe sayini daxil edin: ";
	cin>>h;
	cout<<"1"<<endl;
 for(int m = 1;m<h;m++){
 	for(int n = 0; n<=m;n++){
 		cout<<kombinzon(m,n)<<" ";
	 }
 	cout<<endl;
 }
     
      
      return 0;
}

//Kombinzon üsulu ile paskal üçbucaðýnýn qurulmasý
