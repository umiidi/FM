#include<iostream>
using namespace std;
int main(){
	string ard;
	cout<<"zehmet olmasa ardicilligi daxil edin: ";
	cin>>ard;
	int cavab = ard[0] - '0';
	
	for(int i = 1;i<ard.size();i+=2){
		if(ard[i] == '+') cavab +=ard[i+1] - '0';
		else if (ard[i] == '-') cavab -=ard[i+1] - '0';

	}
	
	cout<<ard<<" = "<<cavab<<endl;
	return 0;
}

//Misal ���n - 4+3-1 daxil edilerse ekrana 6 ��xaracaq. Qeyd edim ki, hesab emellerinde yalniz 1reqemli natural ededler i�tirak ede biler
