#include<iostream>
#include<vector>
using namespace std;
int binarysearch(int n,int arr[],int target){
    int start=0,end=n-1;
    int mid=start+(end-start)/2;
    for( ;start<=end; ){
        int element=arr[mid];
        if(element==target)
        return mid;
        else if(element >target)
        end=mid-1;
        else
        start=mid+1;

        mid=start+(end-start)/2;
    }
    return -1;

}
int main(){
    int t;
    cin>>t;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int u=binarysearch(n,arr,t);
    if(u>0)
    cout<<"target is at "<<u<<" index";
    else
    cout<<"target does not found";
    

    return 0;
}