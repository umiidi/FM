#include<iostream>
using namespace std;
int main(){
int eded[9],x;
for(int i=0;i<10;i++){
cout<<i+1<<". ededi daxil edin: ";
cin>>eded[i];
}
cout<<"x ededini daxil edin: ";
cin>>x;

for(int i=0;i<10;i++){
if(eded[i]!=x) cout<<eded[i]<<" ";
else eded[i]=0;	
}
for(int i=0;i<10;i++){
if(eded[i]==0) cout<<eded[i]<<" ";
}
return 0;
}

//10 eded, daha sonra x ededi daxil edilir. Sonra x-a beraber olan ededler 0-la deyiþdirilir. Diger ededler önce, 0lar sonra çap olunur.
