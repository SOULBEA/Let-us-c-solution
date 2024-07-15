#include<iostream>
using namespace std;

int main(){
  /*If ages of Ram, Shyam and Ajay are input through the keyboard,
    write a program to determine the youngest of the three.*/
  int a, b, c;
  cout<<"please enter Ram's age: ";
  cin>>a;
  cout<<"please enter Shyam's age: ";
  cin>>b;

  cout<<"please enter Ajay's age: ";
  cin>>c;

  if(a<b && a<c){
    cout<<"Ram is younger"<<endl;
  }
  else if(b<a && b<c){
    cout<<"Shayam is younger"<<endl;

  }
  else{
    cout<<"Ajay is younger"<<endl;
  }
  return 0;
}
