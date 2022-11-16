#include<iostream>
using namespace std;
bool testPrimeNumber(int n){
	if(n==0 || n==1) return false;
	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int main(){
int n;
while(true){
	cout<<"ededi daxil edin: ";
	cin>>n;
	if(testPrimeNumber(n))cout<<"sadedir \n\n";
	else cout<<"eded sade deyil \n\n";
}	
 }
 
  //n ededinin sade olub olmadigini mueyyen edir
