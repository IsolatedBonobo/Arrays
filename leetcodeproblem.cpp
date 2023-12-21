#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int min_array(vector<int>arr){
    int min=arr[0];
    for(int i=0;i<arr.size();i++){
        if(min>arr[i])
        min=arr[i];
    }
    return min;
}
int max_array(vector<int>arr){
    int max=arr[0];
    for(int i=0;i<arr.size();i++){
        if(max<arr[i])
        max=arr[i];
    }
    return max;
}

// search array in rotated sorted array
int search(vector<int>arr,int target){
    int s=0,e=arr.size()-1;
    int mid=s+(e-s)/2;
    // babbar's algo
    while(s<=e){
        if(arr[mid]==target)
        return mid;
        if(arr[mid+1]==target)
        return mid+1;
        else if(arr[mid-1]==target)
        return mid-1;
        if(arr[mid]>target)
        e=mid-2;
        else
        s=mid+2;
        mid=s+(e-s)/2;

    }
    return -1;
}
// my algo
int search_1(vector<int>arr,int t){
    int s=0,e=arr.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==t)
        return mid;
        if(arr[mid+1]==t)
        return mid+1;
        else if(arr[mid-1]==t)
        return mid-1;
        if(arr[mid]==min_array(arr)){
            if(t>arr[mid] && t>=arr[s])
            e=mid-2;
            else if(t>arr[mid] && t<arr[s])
            s=mid+2;
        }
        else if(arr[mid]==max_array(arr)){
            if(t<arr[mid] && t>=arr[s])
            e=mid-2;
            else if(t<arr[mid] && t<arr[s])
            s=mid+2;
        }
        else{
            if(t>arr[mid] && t>=arr[s])
            e=mid-2;
            else if(t>arr[mid] && t<arr[s])
            s=mid+2;
            if(t<arr[mid] && t>=arr[s])
            e=mid-2;
            else if(t<arr[mid] && t<arr[s])
            s=mid+2;
        }


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
    int target;
    cin>>target;
    int a=search_1(arr,target);
    cout<<a;
    
}
