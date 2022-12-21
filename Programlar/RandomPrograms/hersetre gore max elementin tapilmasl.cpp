#include<iostream>
using namespace std;
int main(){
	int setir = 3, sutun = 3;
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
	 
   for(int i=0;i<setir;i++){
max=matris[i][0];
   		for(int j=0;j<sutun;j++)
		if(max<matris[i][j]) max=matris[i][j];
	cout<<i+1<<"ci setrde en boyuk eded: "<<max<<endl;;
   }
	return 0;
}
