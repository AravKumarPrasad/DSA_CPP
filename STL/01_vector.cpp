#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    cout<<"capacity : "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity : "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity : "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity : "<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"capacity : "<<v.capacity()<<endl;

    v.push_back(5);
    cout<<"capacity : "<<v.capacity()<<endl;

    cout<<"size : "<<v.size()<<endl;

    cout<<"Element at index 2 : "<<v.at(2)<<endl;

    for(int i:v){
        cout<<i<<" ";
        // cout<<endl;
    }
}