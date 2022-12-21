#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
srand(time(NULL));
int score=0,N,A[N],B[N];
cout<<"Nece defe zer atilacaq?  ";
cin>>N;
for(int i=0;i<N;i++){
A[i] = rand()%6+1;
B[i] = rand()%6+1;	
if(A[i]>B[i]) score++;
else if(A[i]<B[i]) score--;
}
cout<<N<<"zer atildi"<<endl;
for(int i=0;i<N;i++)  cout<<A[i]<<" ";
cout<<endl;
for(int i=0;i<N;i++)  cout<<B[i]<<" ";
cout<<endl;
if(score>0) cout<<"1ci oyuncu qazandi"<<endl;
else if (score<0) cout<<"2ci oyuncu qazandi"<<endl;
else cout<<"Berabere"<<endl;
main();
}

//Ýki oyunçu olur. N zer atýlýr. Hemin xallar ekranda eks olunur ve müqayise olunaraq hansý oyunçunun qalib olduðu tapýlýr
