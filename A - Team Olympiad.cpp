#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int n,ar[5001],i,ar1[5001],a=0,b=0,c=0,x[5001],y[5001],z[5001];
cin>>n;
for(i=0;i<n;i++)
cin>>ar[i];
for(i=0;i<n;i++)
    ar1[i]=0;
for(i=0;i<n;i++)
ar1[ar[i]]=ar1[ar[i]]+1;
int d=min(ar1[1],min(ar1[2],ar1[3]));
//mini=n;
for(i=0;i<=n;i++){
if(ar[i]==1){
x[a]=i+1;
a++;}
 else if(ar[i]==2){
  y[b]=i+1;
  b++;}
 else if(ar[i]==3){
  z[c]=i+1;
  c++;
 }
}
cout<<d<<endl;
for(i=0;i<d;i++){
    cout<<x[i]<<" "<<y[i]<<" "<<z[i]<<" "<<endl;


}
}
