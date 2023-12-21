#include<iostream>
#include<vector>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;

}
void sorted_array(vector<int>arr){
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]>arr[i+1])
        swap(arr[i],arr[i+1]);
    }
}
void rev_arr_in_gps(vector<int>arr,int k){

    for(int i=k-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    
    for(int i= arr.size()-1;i>=k;i--)
    cout<<arr[i]<<" ";
}
// time complexity of code is big O(n^2)
int equal_arrays(vector<int>arr,vector<int>brr){  
    int n=arr.size();
    vector<int>a(n,0);
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size();j++){
            
            if(arr[i]!=brr[j])
            a[i]++;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]==n){
            return 0;
        }
    }
    return 1;
}
//to check avalibility of two elements 
int solve(vector<int>arr){
    int s=0,e=arr.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(s==e)
        return s;
        if(mid%2==0){
            if(arr[mid]==arr[mid+1])
            s=mid+2;
            else{
                e=mid;
            }
        }
        else{
            if(arr[mid-1]==arr[mid])
            s=mid+1;
            else
            e=mid-1;

        }
    }
    return -1;
} 
int main(){
    int n;
    cin>>n;
    
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    // vector<int>brr(n);
    // for(int i=0;i<n;i++)
    // cin>>brr[i];
    
    int a=solve(arr);
    cout<<arr[a];

}