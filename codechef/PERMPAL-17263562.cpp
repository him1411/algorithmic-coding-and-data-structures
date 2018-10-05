#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int result(string str, int length)
{
	int ans[length], num_of_odd=0;
	char odd_char = '#';
	map<char,int> char_map;
	map<char, stack<int>> position_map;
	for(char ch = 'a';ch<='z';ch++)
	{
		char_map[ch] = 0;
	}
	for(int i=0;i<length;i++)
	{
		++char_map[str[i]];
		position_map[str[i]].push(i);
	}
	for(char ch = 'a';ch<='z';ch++)
	{
		if(char_map[ch]!=0 && char_map[ch]%2!=0){
			 num_of_odd++;
			 odd_char = ch;
		 }
		if(num_of_odd>1)
		{
			cout<<"-1\n";
			return 1;
		}
	}
	int p1 = 0, p2 = length-1;
	//even
	for(char ch = 'a';ch<='z';ch++)
	{
		if(char_map[ch]!=0 && char_map[ch]%2==0)
		{
			while(!position_map[ch].empty())
			{
				ans[p1] = position_map[ch].top();
				position_map[ch].pop();
				ans[p2] = position_map[ch].top();
				position_map[ch].pop();
				p1++;
				p2--;
			}
		}
	}
	//odd, at this point there only one character that has odd frequency
	if(odd_char!='#')
	{
		    char ch = odd_char;
			while(!position_map[ch].empty())
			{
				ans[p1] = position_map[ch].top();
				position_map[ch].pop();
				if(position_map[ch].empty()) break;
				ans[p2] = position_map[ch].top();
				position_map[ch].pop();
				p1++;
				p2--;
			}
	}
	
	for(int i=0;i<length;i++)
	{
		cout<<(ans[i]+1)<<" ";
	}
	cout<<"\n";
	return 1;
}

int main()
{
	int T;
	string str;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		cin>>str;
		result(str, str.length());
	}
	return 0;
}
