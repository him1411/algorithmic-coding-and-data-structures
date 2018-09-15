void Solution::arrange(vector<int> &v) 
{
    int n =v.size();
    for(int i=0;i<n;i++)
    {
        v[i] = v[i] + (v[v[i]]%n)*n;
    }
}
