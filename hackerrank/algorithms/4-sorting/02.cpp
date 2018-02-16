#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int binarysearch(vector<int> v, int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;
        if (v[mid] == x)  
            return mid;
       
        if (v[mid] > x) 
            return binarysearch(v, l, mid-1, x);

        return binarysearch(v, mid+1, r, x);
   }
   return -1;
}

int main() 
{
    int num,n,temp;
    vector<int> v;
    cin>>num>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    int ans = binarysearch(v,0,v.size(),num);
    cout<<ans;
    return 0;
}
