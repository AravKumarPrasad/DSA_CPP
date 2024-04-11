#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int , string>m;
    m[1]="Arav";
    m[13]="Kumar";
    m[2]="Prasad";

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding -13 : "<<m.count(-13)<<endl;

    m.erase(13);
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
}