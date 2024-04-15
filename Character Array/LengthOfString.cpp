#include<iostream>
using namespace std;

void reverse(char arr[] , int n){
    int s = 0 ;
    int e = n-1;

    while(s<e){
        swap(arr[s++] , arr[e--]);
    }
}

int getLength(char arr[]){
    int count = 0;
    for(int i=0 ; arr[i] != '\0' ; i++){
        count++;
    }
    return count;
}

int main (){
    cout<<"Enter Your Name :: ";
    char ch[20];
    
    cin>>ch;
    cout<<"Your name is :: "<<ch <<endl;

    int len = getLength(ch);
    cout<<"The Length is ::"<<len<<endl;

    cout<<"The reverse String is :: ";
    reverse(ch , len);

    return 0;
}