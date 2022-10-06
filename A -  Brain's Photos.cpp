#include<iostream>
//#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,i,j,c=0;
cin>>n>>m;
char mat;


for(i=0;i<n*m;i++){
  cin>>mat;  if(mat!='B'&& mat!='W' && mat!='G' )c++;
}

if(c>0)
cout<<"#Color"<<endl;
else
 cout<<"#Black&White"<<endl;
}


