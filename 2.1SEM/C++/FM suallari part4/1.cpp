#include<iostream>
using namespace std;
int find(string n, char x){
	for(int i=0; i<n.size(); i++){
		if(n[i]==x)return i;
	}
}
int main(){
	string n;
	cin>>n;
	int count=0;
	for(int i=0; i<n.size(); i++){
		if(find(n,n[i]) == i) count++;
	}
	cout<<count;
}
//ededde muxtelif reqemlerin sayini tapan program
