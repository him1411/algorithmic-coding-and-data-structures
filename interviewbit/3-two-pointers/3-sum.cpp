int Solution::threeSumClosest(vector<int> &A, int B) 
{
    if(A.size()<3)
        return 0;
        
    //vector<int> b=A;
    sort(A.begin(),A.end());
    int sum,mindiff=INT_MAX;
    for(int i=0; i<A.size()-2;i++)
    {
        int l =i+1;
        int r = A.size()-1;
        while(l<r)
        {
            int temp = A[l] + A[r] +A[i];
            int diff = abs( B - (A[l] + A[r] +A[i]) );
            if(A[l] + A[i] + A[r] == B )
                return B;
            
            if(diff<mindiff)
            {
                mindiff = diff;
                sum = A[i]+A[l]+A[r];
            }
            if(temp <B)
                l++;
            else
                r--;
        }
}
