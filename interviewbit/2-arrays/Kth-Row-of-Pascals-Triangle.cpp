vector<int> Solution::getRow(int A) 
{
    vector<int> v;
    int n = A+1;
    for(int line =1;line<=n;line++)
    {
        int c=1;
        for(int i=1;i<=line;i++)
        {
            if(line ==n)
                v.push_back(c);
                
            c = c*(line-i)/i;
        }
    }
    
    return v;
}
