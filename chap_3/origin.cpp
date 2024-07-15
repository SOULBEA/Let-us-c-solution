#include<iostream>
using namespace std;

int main(){
  int x, y;
  cout<<"please enter co-orinates of x: ";
  cin>>x;

  cout<<"please enter co-orinates of y: ";
  cin>>y;

  if(x==0 && y==0){
    cout<<"the point lies on origin";
  }
  else if(x==0 && y!=0){
    cout<<"the point lies on y-axis";
  }
  else if(x!= 0; && y==0){
    cout<<"the point lies on x-axis";
  }
  else {
    cout<<"point does not lies on origin, x, or y-axis";
  }
  return 0;
}
