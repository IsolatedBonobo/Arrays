#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int c;
    for(int i=0;i<=n-1;i++){
        if(arr[i+1]==arr[i]+1)
        cout<<"";
        else{
            cout<<arr[i]<<"is the pivot element"<<endl;
            cout<<"OR "<<arr[i+1]<<"is the pivot element";
            break;
        }
        
    }
}