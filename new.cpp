#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int b;
    cin>>b;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    for(int i=0;i<n;i++){
        if(arr[i]==b)
        cout<<b<<" is the element present in array";
        else
        continue;
        
    }
}