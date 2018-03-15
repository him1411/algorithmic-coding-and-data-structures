#include <bits/stdc++.h>
using namespace std;

bool checkbrakets(string str)
{
    stack<char> v;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='{' || str[i]=='(' || str[i] == '[')
            v.push(str[i]);
        else if(str[i] == ')' || str[i] == ']' || str[i] == '}' )
        {
            if( v.empty() || (str[i]==')'&&v.top()!='(') || (str[i]=='}'&&v.top()!='{') || (str[i]==']'&&v.top()!='[') )
            {
                return false;
            }
            else
                v.pop();
        }
    }
    if (v.empty())
        return true;
    else
        return false;
}

int main() 
{
    int n;
    cin>>n;
    string str;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        bool x = checkbrakets(str);
        if (x)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
