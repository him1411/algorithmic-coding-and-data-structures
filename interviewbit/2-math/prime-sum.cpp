vector<int> Solution::primesum(int n) 
{
    vector <bool> v(n+1,true);
    vector<int> a;
    v[0]=false;v[1]=false;
    for(int i =2;i<sqrt(n);i++)
    {
        if(v[i]==true)
        {
            for(int j=2;i*j<=n;j++)
            {
                v[i*j]=false;
            }
        }
    }
    
    for(int i=0;i<=n;i++)
    {
        if(v[i]==1 && v[n-i]==1)
        {
            a.push_back(i);
            a.push_back(n-i);
            return a;
        }
    }
    return a;
}
