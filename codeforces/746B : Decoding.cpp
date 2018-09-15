#include<bits/stdc++.h>
using namespace std;

string decode (string s) 
{
    string s2 = "";
    s2.push_back(s[0]);
    for(int i=1;i<s.size();i++)
    {
        if(i%2==1)
        {
            string temp = "";
            temp.push_back(s[i]);
            s2 = temp + s2;
        }
        else
            s2.push_back(s[i]);
    }
    
    if(s2.size() %2 ==0)
    {
        reverse(s2.begin(),s2.end());
        return s2;
    }
    return s2;
}

int main() {

    int n;
    cin>>n;
        string temp;
        cin>>temp;
        string ans = decode(temp);
        cout<<ans;
    return 0;
}