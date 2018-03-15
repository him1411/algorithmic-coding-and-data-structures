#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n,temp,x;
    cin>>n;
    vector <int> v;
    for(int i =0; i<n;i++)
    {
        cin>>temp;
        if(temp == 1)
        {
            cin>>x;
            v.push_back(x);
        }
        else if(temp == 2)
        {
            v.pop_back();
        }
        else if(temp ==3)
        {
            int x = *std::max_element(v.begin(),v.end());
            cout<<x<<endl;
        }
    }
    return 0;
}
