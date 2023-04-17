#include <iostream>
#include <vector>
using namespace std;
bool check(vector<int> temp,int x){
	for(int i=0; i<temp.size(); i++){
		if(temp[i] == x)return true;
	}
	return false;
}
int main() {
    int n=1;
    vector<int> arr;
    vector<int> result;
    while(true){
    	cin>>n;
    	if(n>=0)arr.push_back(n);
    	else break;
	}
	vector<int> temp;
	for(int i=0; i<arr.size(); i++){
		for(int j=i; j<arr.size(); j++){
			if(check(temp, arr[j]))break;
			else temp.push_back(arr[j]);
		}
		if(temp.size() > result.size())result = temp;
		temp.clear();
	}

	for(int i=0; i<result.size(); i++){
		cout<<result[i]<<" ";
	}

    return 0;
}
