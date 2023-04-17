#include<iostream>
using namespace std;
int main(){
	string n;
	cin>>n;
	bool test=false;
 for(int i=0; i<n.size()-1; i++){
 	for(int j=i+1; j<n.size();j++){
 		if(n[i]==n[j]){
 			test=true;
 			break;
		 }
	 }
 }
 
 if(test)cout<<"yes";
 else cout<<"no";
 
	return 0;
}

//n reqemli ededde eyni reqemin olub olmadigini tapan program
