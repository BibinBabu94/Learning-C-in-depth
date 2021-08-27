#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    int arr[4];
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int j=n;j>=1;j--)
    cout<<arr[j]<<'\t';
    return 0;
}

