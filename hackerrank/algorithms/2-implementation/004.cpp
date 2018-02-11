#include <bits/stdc++.h>
using namespace std;

int getTotalX(vector <int> a, vector <int> b, int n,int m)
{
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int c=a[n-1],count=0,flag;
    for (int i=c;i<=b[m-1];i++)
    {
        flag=0;
        for(int j=0;j<n;j++)
        {
            if (i%a[j] == 0)
            {
                flag =1;
            }
            else
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            for (int k=0;k<m;k++)
            {
                if(b[k]%i==0)
                {
                    flag=1;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
        }
        if (flag==1)
        {   
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++)
    {
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    int total = getTotalX(a, b,n,m);
    cout << total << endl;
    return 0;
}
