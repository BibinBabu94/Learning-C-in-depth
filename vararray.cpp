/*Variable sized array*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {  
 
   int n,q;
//number of rows n & number of values to be found
    cin>>n>>q;
//Array declaration using vector
   vector<vector<int>>a(n);
  for(int i=0;i<n;i++)
        {   int k;
        cin>>k;
        a[i].resize(k);
        
            for(int j=0;j<k;j++)
            {
                cin>>a[i][j];
            }
        }   
    for(int l=0;l<q;l++)
        { 
            int i,j;
            cin>>i>>j;
                cout<<a[i][j]<<endl;
        }   
    
     
    return 0;
}

