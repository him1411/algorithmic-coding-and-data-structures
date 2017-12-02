#include <bits/stdc++.h>
using namespace std;

int main() 
{
	vector<int> a(26);
    for(int i = 0; i < 26; i++)
    {
       cin >> a[i];

    }
    string word;
    cin >> word;
    int k = word.length ();
    vector<int> b(k);
    int max =0;
    for (int i = 0; i < k; ++i)
    {
    	if (a[(int)word[i]-97]>max)
    	{
    		max= a[(int)word[i]-97];
    	}
    }
    cout<<(max*k);
    return 0; 
}