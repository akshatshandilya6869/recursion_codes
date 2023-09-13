#include <iostream>
#include<string.h>
using namespace std;
void reverse(string& str,int s,int e){
  //base case
  if(s>=e)
    return;
  //ek case
  swap(str[s],str[e]);
  //recursion
  reverse(str,s+1,e-1);
  
}
int main() {
  string str;
  cin>>str;
  reverse(str,0,str.size()-1); 
  cout<<str<<endl;
}
