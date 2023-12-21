#include <iostream>
#include <vector>
using namespace std;
// finding the missing element
void missingelement(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] - arr[i] != 1)
        {
            cout << arr[i] + 1;
            break;
        }
    }
}

// divide two numbers using binary search
int divide(int dividend, int divisor)
{
    int s = 0, e = abs(dividend);
    int mid = s + (e - s) / 2;
    int ans = 1;
    while (s <= e)
    {
        if (abs(divisor * mid) <= abs(dividend))
        {
            ans = mid;
            s = mid + 1;
        }
        else if (abs(mid * divisor) > abs(dividend))
            e = mid - 1;

        mid = s + (e - s) / 2;
    }
    if ((dividend > 0 && divisor > 0) || (dividend < 0 && divisor < 0))
        return ans;
    else
        return -ans;
}
// finding peak element
int peakelement(int n, int arr[])
{
    // using binary
    int s = 0, e = n - 1;
    int mid = s = (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
        {
            cout << arr[mid];
            break;
        }
        else if (arr[mid] > arr[mid + 1] && arr[mid] < arr[mid - 1])
            e = mid - 1;
        else
            s = mid + 1;

        mid = s + (e - s) / 2;
    }
    return 0;
}
int codepeakelement(int n, int arr[])
{
    // using binary
    int s = 0, e = n - 1;
    int mid = s = (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
            e = mid;
        mid = s + (e - s) / 2;
    }
    return s;
}
// time complexity big O(n)
int odd_occurence_01(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i += 2)
    {
        if (arr[i] != arr[i + 1])
        {
            return arr[i];
            break;
        }
    }
}
// time complexity big O(logn)
int odd_occurence(vector<int> arr)
{
    int s = 0, e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == arr[mid + 1])
            e = mid;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int a = odd_occurence_01(arr);
    cout << a;
}