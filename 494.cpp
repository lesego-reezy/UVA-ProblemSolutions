#include <iostream>
#include <sstream>
#include <string>

using namespace std;
bool isWord(char a){
	if(a>=65 && a<=90 || a>=97 && a <= 122){
		if(a>=65 && a<=90 || a>=97 && a<=122){
			return true;
		}
	}	
	return false;
}

int main(){
	string line;
	string word="";
	int count = 0;
	int size=0;
	while(getline(cin,line)){
		istringstream iss(line);
		
		while(iss >> word){
		size = word.size();
		try{
		if(isWord(word[0]) || isWord(word[1])){
			if(isWord(word[size-1]) || isWord(word[size-2])){
				count+=1;
			}
	    }
	    }catch(exception e){
	    }
	}
	    cout << count << endl;
	    count = 0; 
	
}
}
