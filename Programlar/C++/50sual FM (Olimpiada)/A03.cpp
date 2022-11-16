#include<iostream>
using namespace std;
int main(){
int X,Y;
cin>>X;
cin>>Y;
if(X>Y){
cout<<X<<" "<<Y;
}
else {
Y=X+Y;
X=Y-X;
Y=Y-X;
cout<<X<<" "<<Y;
}
return 0;
}


//X ve Y yerlerini X en boyuyu Y en kiciyi olmaqla deyismek
