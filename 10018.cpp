#include <iostream>

using namespace std;

long long reverseNumber(long long a){
  long long retNumber=0;
    while(a!=0){
    	retNumber = retNumber*10+a%10;
        a = a/10; 
    }
   return retNumber;
}

int main(){
  long long num=0;
  int count = 0;
  int N=0;
  cin >> N;
  for(int i=0;i<N;i++){
  	cin >> num;
 	  do{
     	     num+= reverseNumber(num);
     	     count++;
          }while(num!=reverseNumber(num));
  cout << count << " " << num <<"\n";
  count = 0;
 }
return 0;
}

