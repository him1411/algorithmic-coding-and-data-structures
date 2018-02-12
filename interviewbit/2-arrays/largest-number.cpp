bool compareNum(string a, string b) 
{
    return a + b > b + a;
}

string Solution::largestNumber(const vector<int> &A) 
{
    string result;
    vector<string> str;
    for (int i = 0; i < A.size(); i++) 
    {
        str.push_back(to_string(A[i]));
    }
    
    sort(str.begin(), str.end(), compareNum);
    
	for (int i = 0; i < str.size(); i++) 
	{
        result += str[i];
    }
    int flag = 0;
    for(int i = 0 ; i<result.size() ; i++)
    {
        if(result[i] == '0')
        {
            flag++;
        }
    }
    return result;
}
