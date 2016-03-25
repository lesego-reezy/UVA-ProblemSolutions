#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	string line;
	char c;
	vector<int> numbers;
	vector<int> diffs;
	bool jolly = true;
	bool negative=false;

	while(getline(cin,line)){
		istringstream iss(line);
		iss >> c;
		while(iss >> c){
			if(c=='-')
				negative = true;
			else{
			if(negative){
				numbers.push_back((c-48)*-1);//incase of a negative number
				negative=false;
			}else
				numbers.push_back(c-48);
			}
		}
		for(int i=0;i<numbers.size()-1;i++){
			diffs.push_back(abs(numbers[i]-numbers[i+1]));
		}
		// sort(diffs.begin(),diffs.end());//sort numbers in ascending order
		for(int i=0;i<diffs.size();i++){
			if(diffs[i]>diffs.size() || diffs[i]<1){
				jolly = false;//incase any number is out of bounds
			}
		}
		diffs.clear();//clear vectors for new line input
		numbers.clear();
		if(jolly)
			cout << "Jolly" << endl;
		else
			cout << "Not jolly" << endl;
		jolly = true;
	}
 return 0;	
}