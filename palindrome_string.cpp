#include <iostream>
#include<string.h>
using namespace std;
bool Palindrome(string& str,int s,int e){
  //base case
  if(s==e)
    return true;
  //ek case
  if(str[s]!=str[e])
    return false;
  //recursion dekhlega baaki
  return (str,s+1,e-1);
}

int main() {
  string str;
  cin>>str;
  cout<<Palindrome(str,0,str.size()-1);
}
