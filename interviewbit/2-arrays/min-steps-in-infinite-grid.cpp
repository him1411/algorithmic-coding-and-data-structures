int Solution::coverPoints(vector<int> &A, vector<int> &B) 
{
    int s1=A.size(), s2=B.size(),ans=0;

    for(int i=1;i<s1;i++)

    {

        ans = ans + (abs(A[i]-A[i-1]) < abs(B[i]-B[i-1]) ? abs(B[i]-B[i-1]) : abs(A[i]-A[i-1]));

    }

    return ans;
}