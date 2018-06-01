vector<int> Solution::sieve(int n) 
{
    vector<int> v(n+1);
    vector<int> a;
    for( int i =0; i<=n; i++)
        v[i] =1;
        
    v[0]=0;
    v[1]=0;
    for (int i =2; i<= sqrt(n);i++)
    {
        if(v[i]==1)
            for(int j=2; i*j <= n;j++)
                v[i*j]=0;
    }
    for(int i=0;i<=n;i++)
    {
        if(v[i]==1)
            a.push_back(i);
    }
    return a;
}