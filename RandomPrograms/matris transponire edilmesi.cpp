#include <iostream>
using namespace std;
int main() {
int setir = 3 , sutun = 3; //isteye uyğun olaraq setir sutun qiymetlerini tekce burdan deyişmek kifayetdir
int matris[setir][sutun];
cout<<"elementleri daxil edin \n";
	for(int i=0;i<setir;i++)
	 for(int j=0;j<sutun;j++){
    cout<<"["<<i+1<<"]"<<"["<<j+1<<"] ";
	cin>>matris[i][j];
	 }
for(int i=0;i<setir;i++){
	for(int j=0;j<sutun;j++)
	 cout<<" "<<matris[i][j];
	 cout<<endl; }   //Matrisin ekrana çıxarılması
   
cout<<"transponire edilmis matris: \n";

   for(int i=0;i<sutun;i++){
	for(int j=0;j<setir;j++)
	 cout<<" "<<matris[j][i];
	 cout<<endl; }    //Transponire edilmiş matrisin ekrana çıxarılması
   return 0;
}

//İlk önce matrisin özünü, sonra transponire edilmiş şekilde ekrana çap edir
