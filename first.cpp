#include<stdio.h>
#include<iostream>
using namespace std;

struct rectangle
{
  int breadth;
  int length;
};

int main()
{
  struct rectangle r1={10,5};
  //to change the values
  r1.breadth=15;
  r1.length=6;

  cout<<r1.breadth<<endl;
  cout<<r1.length<<endl;
  return 0;
}