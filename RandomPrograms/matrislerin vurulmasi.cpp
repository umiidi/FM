#include<iostream>
using namespace std;
int main(){
	int setirA=2 , sutunA=3 , setirB=3 , sutunB = 3;   //�l��n� deyi�mek ���n tekce buradan uygun setir ve sutun qiymetini deyismek kifayetdir
	int A[setirA][sutunA],B[setirB][sutunB];
	
	if(sutunA != setirB) cout<<" Xeta, hasili tapmaq m�mk�n olmad�";
	
	else {
	 for(int x=0; x<setirA; x++)
	  for(int y=0; y<sutunA; y++){
	   cout<<"A["<<x+1<<"]"<<"["<<y+1<<"] ";
	   cin>>A[x][y];   
	 }                  //A matrisinin daxil edilmesi
	 cout<<endl;
	 
	 for(int x=0; x<setirB; x++)
	  for(int y=0; y<sutunB; y++){
	   cout<<"B["<<x+1<<"]"<<"["<<y+1<<"] ";
	   cin>>B[x][y];
     }                 //B matrisinin daxil edilmesi
    
    cout<<endl;
   
    cout<<"A matrisi"<<endl;
     for(int x=0; x<setirA; x++){
      for(int y=0; y<sutunA; y++)
	   cout<<" "<<A[x][y];
 	cout<<endl;		
 	}                 //A matrisinin ekrana �ixarilmasi
	
 	 cout<<endl;
	 
	 cout<<"B matrisi"<<endl;
	for(int x=0; x<setirB; x++){
	 for(int y=0; y<sutunB; y++)
	  cout<<" "<<B[x][y];
	cout<<endl;       
	}                  //B matrisinin ekrana �ixarilmasi
	
	cout<<endl;
	
	cout<<"Matrislerin hasili"<<endl;
	for(int x=0; x<setirA; x++) {
	 for(int y=0; y<sutunB; y++) {
	  int temp=0;
	  for(int z=0; z<sutunA; z++)
	 	temp += A[x][z] * B[z][y];
	  cout<<" "<<temp; }
	cout<<endl;
	}                //Matrislerin vurulmas�ndan al�nan neticenin ekrana ��xar�lmas�
	
	 }	
	return 0;
}
