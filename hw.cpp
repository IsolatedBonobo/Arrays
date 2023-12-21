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
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>nums(n);
    for(int i=0;i<nums.size();i++)
        cin>>nums[i];

    int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(i!=j && nums[i]-nums[j]==abs(k)){
                    count++;
                    cout<<nums[i]<<" "<<nums[j]<<endl;
                }
            }
        }
        cout<<count;



    



}