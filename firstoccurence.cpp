#include<iostream>
#include<vector>
using namespace std;
int firstoccurence(int n,vector<int>arr,int target){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans= -1;
    while(s<=e){
        int element=arr[mid];
        if(target==element){
            ans=mid;
            e=mid-1;
        }
        else if(target>element)
        s=mid+1;
        else
        e=mid-1;
        mid=s+(e-s)/2;
        
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int t;
    cin>>t;
    int u=firstoccurence(n,arr,t);
    
    cout<<"target index is "<<u<<endl;
    return 0;
}