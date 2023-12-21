#include<iostream>
#include<vector>
using namespace std;
main(){


    vector<int>arr{1,3,5,7,2,4,6};
    for(int k=0;k<arr.size();k++){
    for(int i=0;i<k;i++){
        for(int j=0;j<i;j++){
            if(arr[i]+arr[j]+arr[k]==9){
            cout<<arr[i]<<" ";
            cout<<arr[j]<<" "<<arr[k];
            cout<<endl;
            

            }
        }
        

    }
    }


    return 0;

}