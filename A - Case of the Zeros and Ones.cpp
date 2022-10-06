#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int n,i,c=0,f,a,d;
char ar[200001];
cin>>n;

for(i=0;i<n;i++){
cin>>ar[i];}
for(i=0;i<n;i++){
    if(ar[i]=='0')
    c++;
}
d=n-c;
a=min(c,d);

f=n-a*2;

cout<<f;
}

