#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main() {
srand(time(NULL));
int count=0;
int a = rand()%10;
int x;
cout<<"ededi daxil edin: ";
cin>>x;
while(count<5){
	count+=1;
	if (a==x) {cout<<"duz tapdiniz!"; return 0;}
	else if(a<x) cout<<"boyuk eded daxil etdini, yeniden  cehd edin: ";
	else if(a>x) cout<<"kicik eded daxil etdiniz, yeniden  cehd edin: ";
	cin>>x;
}
cout<<"Cox cehd edildi, amma duz tapilmadi(";
return 0; 
}
