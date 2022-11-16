#include<iostream>
using namespace std;
int main(){
int n,m,i,j,c;
cout<<"size of chessboard: \n";
cin>>n>>m;
cout<<"coordinate: \n";
cin>>i>>j;
cout<<"black(1) or white(0) ? \n";
cin>>c;
int first= c==0?1:0;
if((i-1)%2 == (j-1)%2)first=c;
if(m%2==0) cout<<"equals";
else if(n%2==0) cout<<"equals";
else {
	if(first==1)printf("black");
	else printf("white");
}
return 0;
}

//sahmat meselesi. hansisa xanaya teyin edilmis renge gore qurulmus sahmat taxtasinda hansi rengli xana daha coxdur?
