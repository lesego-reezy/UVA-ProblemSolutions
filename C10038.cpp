#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
vector<int> numbers;
vector<int> diffs;
bool jolly = true;
int n,t;

while(cin >> n){
for(int k=0;k<n;k++){
cin >> t;
numbers.push_back(t);
}
for(int i=0;i<numbers.size()-1;i++){
diffs.push_back(abs(numbers[i]-numbers[i+1]));
if(diffs[i]>numbers.size()-1 || diffs[i]<1){
    jolly = false;
cout << "Not jolly" << endl;
break;
}
}
if(jolly)
cout << "Jolly" << endl;
diffs.clear();//clear vectors for new line input
numbers.clear();
}
return 0;	
}