#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    int n;
    string str;
    cin>>n;
    map<string,int>reg;
    while(n--){
    cin>>str ;
    if(reg.count(str)==0){
    cout<<"OK"<<endl;
    reg[str]=1;
    //cout<<reg[str]<<endl;
    }
    else{
      cout<<str<<reg[str]<<endl;
        reg[str]=reg[str]+1;
        //cout<<reg[str]<<endl;

    }

    }

}
