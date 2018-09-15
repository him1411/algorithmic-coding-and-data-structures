void Solution::merge(vector<int> &A, vector<int> &B) 
{
    int n =B.size(),i=0,j=0;
    while(i<A.size() && j<n)
    {
        if(A[i]<B[j])
        {
            i++;
        }
        else if(A[i] >= B[j])
        {
            A.insert(A.begin()+i,B[j]);
            i++;j++;
        }
    }
    while(j<n)
    {
        A.push_back(B[j]);
        j++;
    }
}
