#include<iostream>
using namespace std;

int main(){
 // If a five-digit number is input through the keyboard, write a
// program to calculate the sum of its digits 
  int n;
  cout<<"please enter 5 digits to sum: ";
  cin>>n;
  int sum = 0;
  int i = 1;
  while(i<=n){
    int digit=n%10;
    sum = sum+digit;
    n = n/10;
    i++;
    
  }
  cout<<sum;
  return 0;
}
