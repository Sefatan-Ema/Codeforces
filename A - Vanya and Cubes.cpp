#include<iostream>
using namespace std;
int main(){
    int n,i,c=0,s=0,d=0;
cin>>n;

for(i=1;i<=n;i++){
    s=s+i;
    d=s+d;
    if(d<=n)
c++;
else
    break;}
cout<<c;

}
