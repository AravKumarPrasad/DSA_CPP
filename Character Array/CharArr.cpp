#include<iostream>
using namespace std;

int main (){
    cout<<"Enter Your Name :: ";
    char ch[20];
    
    cin>>ch;
    ch[2] = '\0';
    cout<<"Your name is :: "<<ch;
    return 0;
}