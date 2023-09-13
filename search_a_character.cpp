#include <iostream>
#include<string.h>
using namespace std;
void lastOCCR(string&s,char x,int i,int& ans){
  //base case
  if(i<0)
    return ;
  //1 case solved
  if(s[i]==x){
    ans=i;
  return ;
  }
  lastOCCR(s,x,i-1,ans);
}
void lastOCCL(string&s,char x,int i,int& ans){
  //base case
  if(i>=s.size())
    return ;
  //1 case solved
  if(s[i]==x){
    ans=i;
  }
  lastOCCL(s,x,i+1,ans);
}
int main() {
  string s;
  cin>>s;
  char x;
  cin>>x;
  int ans=-1;
  lastOCCL(s,x,0,ans);
  cout<<ans<<endl;
}
