#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t;

    while (t--)
    {
      long long x,y;
      cin>>x>>y;
      if(x>=y){
        long long first_element=0;
         if(x%2==0){
          first_element=x*x;
         }
         else{
          first_element=(x-1)*(x-1)+1;
         }
         if(x%2==0){
          cout<<first_element-y+1<<endl;
         }
         else{
          cout<<first_element+y-1<<endl;
         }
      }

      else{
        long long first_element=0;
         if(y%2!=0){
          first_element=y*y;
         }
         else{
          first_element=(y-1)*(y-1)+1;
         }
         if(y%2!=0){
          cout<<first_element-x+1<<endl;
         }
         else{
          cout<<first_element+x-1<<endl;
         }





      }
    }
    return 0;
}

