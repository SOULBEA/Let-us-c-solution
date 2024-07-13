#include<bits/stdc++.h>
using namespace std;

int main(){
  float x,r,y, theta;
  cout<<"enter x and y corrdinates: ";
  cin>>x>>y;
  r = sqrt(x*x + y*y);
  theta = atan2(x,y);
  theta = theta * 180 / 3.14 ;
  cout<<theta;
  return 0;
}
