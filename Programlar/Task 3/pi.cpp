#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	srand(time(NULL));
	int count=0, allcount=0;
	cin>>allcount;
	for(int i=0; i<allcount; i++){
		double x = -1 + 2*(float) rand()/RAND_MAX;
		double y = -1 + 2*(float) rand()/RAND_MAX;
		if(x*x + y*y<=1)count++;
	}
	cout<<4*(double)count/allcount;
}

//pi ededini texmini hesablayan program