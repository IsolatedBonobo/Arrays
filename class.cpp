#include<iostream>
#include<vector>
using namespace std;
void selection_sort(vector<int>arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min])
            min=j;
        }
        swap(arr[i],arr[min]);
    }

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
void bubble_sort(vector<int>arr){
    int n=arr.size();
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
void insertion_sort(vector<int>arr){
    int n=arr.size();
    for(int i=1;i<n;i++){
        int fecth=arr[i];
        for(int j=i;j>=0;j--){
            if(arr[j]>fecth){
                arr[j+1]=arr[j];
            }
            else
            break;
        }

    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    sort(arr.begin())

}