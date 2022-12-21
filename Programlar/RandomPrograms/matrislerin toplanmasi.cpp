#include<iostream>
using namespace std;
int main(){
	int setir=3 , sutun=3;   //ölçünü deyiþmek üçün tekce buradan setir sutun qiymetini deyismek kifayetdir
	int A[setir][sutun],B[setir][sutun];
	
	for(int x=0; x<setir; x++)
	 for(int y=0; y<sutun; y++){
	  cout<<"A["<<x+1<<"]"<<"["<<y+1<<"] ";
	  cin>>A[x][y];   
	}                  //A matrisinin daxil edilmesi
	 cout<<endl;
	 
	for(int x=0; x<setir; x++)
	 for(int y=0; y<sutun; y++){
	  cout<<"B["<<x+1<<"]"<<"["<<y+1<<"] ";
	  cin>>B[x][y];
    }                 //B matrisinin daxil edilmesi
    
   cout<<endl;
   
   cout<<"A matrisi"<<endl;
    for(int x=0; x<setir; x++){
     for(int y=0; y<sutun; y++)
	  cout<<" "<<A[x][y];
	cout<<endl;		
	}                 //A matrisinin ekrana çixarilmasi
	
	 cout<<endl;
	 
	 cout<<"B matrisi"<<endl;
	for(int x=0; x<setir; x++){
	 for(int y=0; y<sutun; y++)
	  cout<<" "<<B[x][y];
	cout<<endl;       
	}                  //B matrisinin ekrana çixarilmasi
	
	cout<<endl;
	
	cout<<"Matrisin cemi"<<endl;
	for(int x=0; x<setir; x++) {
	 for(int y=0; y<sutun; y++)
	 	cout<<" "<<A[x][y] + B[x][y];
	cout<<endl;
	}                //Matrisin ceminin ekrana çixarilmasi
	 	
	return 0;
}
