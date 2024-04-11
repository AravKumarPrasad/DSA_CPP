#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string>q;
    q.push("Arav");
    q.push("Kumar");
    q.push("Prasad");

    cout<<q.front()<<endl;
    cout<<"Size : "<<q.size()<<endl;
    q.pop();
    
    cout<<q.front();    
}
