#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    long long n[t];
    int a;
    for(a=0;a<t;a++)
    cin>>n[a];
    
    int x;
    for(x=0;x<t;x++){
    int i,j;
    int ans=0;
    int ans1=0;
    for(i=0;i*i+j*j<=n[x]*n[x];i++){
        
        
        for( j=i; i*i+j*j<=n[x]; j++ ){
        // cout<<i<<" "<<j<<" "<<i*i+j*j<<endl;
        if(i*i+j*j==n[x]){
            ans = i;
            ans1 = j;
            break;
        }
        }
    }
    if(ans==0 && ans1==0)
    cout<<"-1"<<endl;
    else
    cout<<ans<<" "<<ans1<<endl;
    
 
    
    }
    
}