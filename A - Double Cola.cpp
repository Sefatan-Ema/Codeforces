#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{string str[]={ "Sheldon", "Leonard", "Penny", "Rajesh", "Howard" };
int n,i=0,j,s=0,v=0,x=0;
   cin>>n;
    while(1){
    s=s+5*pow(2,i);
    
    if(s>=n){
        x=1;
s=s-5*pow(2,i);
v=s;

for(j=0;j<5;j++){
v=v+pow(2,i);

        if(v>=n)
            break;
}}
     if(x==1)
        break;
     i++;
    }
    cout<<str[j];

}

