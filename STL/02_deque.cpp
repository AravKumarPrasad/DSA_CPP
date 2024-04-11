#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int>d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Size : "<<d.size()<<endl;

    d.pop_back();
    cout<<"Size : "<<d.size()<<endl;

    d.push_front(10);
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Empty or not "<<d.empty()<<endl;

    cout<<"Element at 2nd index is "<<d.at(0)<<endl;

    cout<<"Before Erase: "<<d.size()<<endl;
    d.erase(d.begin() , d.begin()+1);
    cout<<"After Erase: "<<d.size()<<endl;
}