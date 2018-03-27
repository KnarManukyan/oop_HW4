#include <iostream>
using namespace std;
int nextprime (int num);
int nextperfect (int num);
int main() {
  int num;
  cout << "Enter a number!" << endl;
  cin >> num;
  cout << "The next prime number is " << nextprime(num) << endl;
  int n = nextperfect(num);
  cout << "The next perfect number is " << n << endl;
  return 0;
}

int nextprime (int num){
  int div = num;
  while(div>1){
    if((num+1)%div==0){
      num++;
      div=num-1;
    }
    div--;
  }
 return num+1;
}

int nextperfect (int num){
  int n = num;
  int sum = 0;
  while(true){
    n++;
    sum = 0;
    for(int i = 1; i < n; i++){
      if(n%i == 0){
        sum += i;
      }
    }
