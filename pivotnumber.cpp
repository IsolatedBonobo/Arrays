#include<iostream>
#include<vector>
using namespace std;
// if definition of pivot no is : left sum == right sum and then mediocker no is pivot no
int pivotno_1(int n,vector<int>arr){
    int s=0,e=arr.size()-1;
    int mid=s+(e-s)/2;
    
    while(s<=e){
        int left=0,right=0;
        for(int i=0;i<mid;i++){
            left+=arr[i];
        }
        for(int i=mid+1;i<n;i++){
            right+=arr[i];
        }
        if(left==right){
        return mid;
        break;
        }
        else if(left>right)
        e=mid-1;
        else
        s=mid+1;
        
        mid=s+(e-s)/2;
    }
    return -1;
}
// if pivot number is the no where monotonicity breaks
int pivotno_2(vector<int>arr){
    int s=0,e=arr.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(mid+1<arr.size() && arr[mid]>arr[mid+1])
        return mid;

        if(mid-1>=0 && arr[mid-1]>arr[mid])
        return mid-1;
        if(arr[s]>=arr[mid])
        e=mid-1;
        else
        s=mid+1;
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
    
}