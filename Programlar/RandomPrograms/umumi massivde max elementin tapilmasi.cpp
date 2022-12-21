#include<iostream>
using namespace std;
int main(){
	int setir = 3, sutun = 4;
	int matris[setir][sutun],max;
	cout<<"elementleri daxil edin \n";
	for(int i=0;i<setir;i++)
	 for(int j=0;j<sutun;j++){
    cout<<"["<<i+1<<"]"<<"["<<j+1<<"] ";
	cin>>matris[i][j];
	 }
	
for(int i=0;i<setir;i++){
	for(int j=0;j<sutun;j++)
	 cout<<" "<<matris[i][j];
	 cout<<endl; }
	 
 max=matris[0][0];
   for(int i=0;i<setir;i++)
      		for(int j=0;j<sutun;j++)
		if(max<matris[i][j]) max=matris[i][j];
	cout<<"massivin en boyuk elementi: "<<max<<endl;
	return 0;
}

//n,m ölçülü matrisde maks elementi tapan program
