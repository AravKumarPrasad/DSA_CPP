#include<iostream>
using namespace std;

int binarySearch(int arr[] , int n , int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            s = mid +1;
        }
        else{
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main(){
    int oddArr[5] = {12,15,17,20,22};
    int evenArr[6] = {5,8,9,12,43,54};

    int oddindex = binarySearch(oddArr , 5 , 15);
    cout<<"The Index of the given value is :: "<<oddindex<<endl;

    int evenindex = binarySearch(evenArr , 6 , 54);
    cout<<"The Index of the given value is :: "<<evenindex;
}
