#include<iostream>
using namespace std;

int main(){
  //  A five-digit number is entered through the keyboard. Write a
    //program to obtain the reversed number and to determine whether
    //the original and reversed numbers are equal or not
  int n;
  cout<<"Please enter a five digit number: ";
  cin>>n;
  int i = 1;
  int rev = 0;
  int dup = n;
  while(n>0){
    int digit = n%10;
    rev = (rev*10)+digit;
    n = n/10;
  }

  if(dup == rev){
    cout<<"equal"<<endl;
  }

  else{
    cout<<"not equal"<<endl;
  }

  return 0;
}
