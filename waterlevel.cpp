#include <iostream>
using namespace std;
int main()
{
    // improvement needed as a can't be at first position.
    int n;
    cin >> n;

    int height[n];
    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }
    int a=height[0];
    int c, d;

    for (int i = 0; i < n - 1; i++)
    {
        
        if (height[i + 1] >= a)
        {
            a = height[i + 1];
            c = i+1;
            break;
        }
    }

    cout<< a << endl;

    int b=height[0];
    for (int i = 0; i < n; i++)
    {
        
        
        if (height[i] != a)
        {
            if (height[i] >= b){
                b = height[i];
                d = i;
            }
            
        
        }
    }
    cout << b << endl;

    int area=0;
    if (d > c)
        area = b * (d - c);
    else
        area = b * (c - d);
    cout << area;

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(height[i]=a-i)
    //         b=height[i];
    //     }
    // }
}