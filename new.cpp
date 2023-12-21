#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
void check(char *str,char *ptr){
    int a =strlen(str);
    char c[a];
}
int main(){
    char f[100]="ashutosh";
    char s[100]="kasaudhan";
    int a=strlen(f);
    char c[a];
    vector<int>d(a,0);
    label:
    
    for(int i=0;i<a;i++){
        c[i]=f[i];
        for(int j=0;j<a;j++){
            if(c[i]==s[j])
            break;
            else
            d[i]++;
        }
    }
    vector<int>count(8,0);
    for(int i=0;i<a;i++){
        cout<<d[i]<<endl;
        if(d[i]==8){
            count[i]++;
            f[i]++;
            cout<<f[i]<<endl;
            goto label;
        }
    }
    
    
}