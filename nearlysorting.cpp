#include<iostream>
#include<vector>
using namespace std;
int binary_search(vector<int>arr,int target){
    int s=0,e=arr.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){
    if(arr[mid]==target)
    return mid;
    else if(mid+1 <=e && arr[mid+1]==target)
    return mid+1;
    else if(mid-1 >=s && arr[mid-1]==target)
    return mid-1;

    if(arr[mid]<target)
    s=mid+2;
    else if(arr[mid]>target)
    e=mid-2;

    mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int t;
    cin>>t;
    int a=binary_search(arr,t);
    cout<<a;


}