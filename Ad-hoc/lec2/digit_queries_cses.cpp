#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long q;
    cin >>q;

    while (q--)
    {
      long long k;
      cin>>k;
      if(k<=9){
        cout<<k<<endl;
        continue;
      }

      long long digit=0;
      long long powerten=1;
      while(true){
        digit++;
        long long chars=(long long)9*digit*powerten;
        if(chars>=k){
            long long  number=powerten+(k+digit-1)/digit -1;
            string nums=to_string(number);
            if(k%digit==0){
                cout<<nums[digit-1]<<endl;
            }
            else{
                cout<<nums[k%digit-1]<<endl;
            }
            break;
        }

        k-=chars;
        powerten=powerten*10;
      }
    }
    return 0;
}

