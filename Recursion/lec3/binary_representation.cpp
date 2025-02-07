#include <bits/stdc++.h>
using namespace std;
string binary_conv(int n){
  if(n==0){
    return "";
  }
  return binary_conv(n/2)+to_string(n%2); //first binary_conv(n/2) will be executed then to_string(n%2);
}
int main() {
  
  int n=5;
  string binary=binary_conv(n);
  cout<<binary;
  return 0;
}