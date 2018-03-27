#include <iostream>
using namespace std;

double average(int arr []);

int main(){
  int a [10];
  cout << "Please enter 10 numbers!" << endl;
	for(int i = 0; i<10; i++){
		cin >> a[i];
	}
	double avg = average(a);
	cout << "Average value is: " << avg << endl;
	cout << "These numbers are greater than " << avg << " -> ";
	for(int i = 0; i<10; i++){
	  double num = a[i];
	  if(num>avg){
	    cout << " " << a[i];
	  }
	}
  cout << endl;
	return 0;
}

double average(int arr []){
  double sum = 0;
	for(int i = 0; i<10; i++){
		sum += arr[i];
	}
	return sum/10;
}
