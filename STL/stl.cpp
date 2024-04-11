#include<iostream>
#include<vector>
using namespace std;

// Function for printing the vector 
void print(vector<int>v){
    cout<<"Printing the Vector"<<endl;
    int size = v.size();
    for(int i=0; i<size ; i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    vector<int> data;
    vector<int> v;
    // Printing the Capacity and Size of Vector
    /*
    while(1){
        int a;
        cin>>a;
        data.push_back(a);
        cout<<"Capacity: " <<data.capacity()<<" Size: "<<data.size()<<endl;
    }
    */
//   Inserting the Elements in Vector
/*
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        int d;
        cin >>d;
        v.push_back(d);
    }
    print(v);
*/
    // Clearing the Entire vector 
    // v.clear();

    // Deleting the element from vector 
    // v.pop_back();

}