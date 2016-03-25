#include <iostream>

using namespace std;

int main(){
	int n,farmers,size,animals,eco;
	int premium=0;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> farmers;
		premium = 0;
		for(int j=0;j<farmers;j++){
			cin >> size >> animals >> eco;
			premium+=size*eco;
		}
		cout << premium << endl;
	}
}