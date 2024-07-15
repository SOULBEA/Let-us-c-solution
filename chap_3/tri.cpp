#include<iostream>
using namespace std;

int main(){
  int angle1, angle2, angle3;
  cout<<"please enter angle 1: ";
  cin>>angle1;

  cout<<"please enter angle2: ";
  cin>>angle2;

  cout<<"please enter angle3: ";
  cin>>angle3;

  int valid = 180;

  if(angle1+angle2+angle3 == valid){
    cout<<"This is an triangle";
  }
  else{
    cout<<"this is not an triangle"<<endl;
  }
  return 0;
}
