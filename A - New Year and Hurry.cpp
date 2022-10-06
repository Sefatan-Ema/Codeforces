#include<iostream>
using namespace std;
int main()
{
    int n,k,x,s=0,c=0;
cin>>n>>k;
x=240-k;
   for(int i=1;i<=n;i++){
      s=s+5*i;

      if(x<s)
        break;
 c++;
   }
   cout<<c;
}
