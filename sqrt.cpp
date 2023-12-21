#include<iostream>
using namespace std;
// finding integral part of sq root of any no
int sqrt_Int(int n){
    int s=0,e=n;
    int mid=s+(e-s)/2;
    int ans= -1;
    while(s<=e){
        if(mid*mid==n)
        return mid;
        if(mid*mid>n)
        e=mid-1;
        else{
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;

    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int a=sqrt_Int(n);
    cout<<"ans is "<<a<<endl;

// complete sqrt of a number
    int precision;
    cin>>precision;
    double step = 0.1;
    double finalans=a;

    for(int i=0;i<precision;i++){
        for(double j=finalans;j*j<=n;j+=step){
            finalans=j;
        }
        step=step/10;
    }
    cout<<"final ans is "<<finalans;

}