#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int>l;

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);

    l.push_front(10);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    cout<<"After Erase"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size : "<<l.size()<<endl;
    
    list<int>a(5,100);
    for(int i:a){
        cout<<i<<" ";
    }
}
