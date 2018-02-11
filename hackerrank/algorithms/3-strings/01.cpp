#include <bits/stdc++.h>
using namespace std;

string super_reduced_string(string s)
{
	int flag=1;
    for (int i = 0; i < s.length()-1&&flag; i++)
    {
    		if ( (s[i]==s[i+1]) )
    		{
    			s.erase(i,2);
    			i--;
			}
    		if (s.length()==0)
    		{flag=0;}
    }
    return s;
}

int main() {
    string s;
    cin >> s;
    int l=s.length();
    string result=s;
    for (int i = 0; i < l; ++i)
    {
    	result=super_reduced_string(result);
    }
    if (result.length()==0)
    {cout<<"Empty String";}
    else
    {cout << result << endl;}
    return 0;
}
