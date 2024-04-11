#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string>s;

    s.push("Arav");
    s.push("Kumar");
    s.push("Prasad");

    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;

    cout<<"Size : "<<s.size()<<endl;
    cout<<"Empty or not : "<<s.empty()<<endl;
}