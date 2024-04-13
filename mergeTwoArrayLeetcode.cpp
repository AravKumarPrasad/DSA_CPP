#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
    int i=0 , j=0;
    while(i<m && j<n){
        if(nums1[i]<nums2[j]){
            nums1[i] = nums2[j];
            i++;
            j++;
        }
    }
}

void printArr(vector<int> ans){
    for(int i=0 ; i<ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> nums1 ={1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};

    merge(nums1 , 5 , nums2 , 3);
    printArr(nums1 );
    return 0;

}