
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*You are required to complete this method */
bool isInterleave(string A, string B, string C) 
{
    int lena=A.length(),lenb=B.length(),lenc=C.length(),i,j;
    int dp[lena+1][lenb+1];
    dp[0][0]=1;
    for(i=1;i<=lena;i++)
    {
        if(A[i-1]==C[i-1])
            dp[i][0]=dp[i-1][0];
        else
            dp[i][0]=0;
    }
    for(j=1;j<=lenb;j++)
    {
        if(B[j-1]==C[j-1])
            dp[0][j]=dp[0][j-1];
        else
            dp[0][j]=0;
    }
    for(i=1;i<=lena;i++)
    {
        for(j=1;j<=lenb;j++)
        {
            dp[i][j]=(dp[i-1][j] && (A[i-1]==C[i+j-1])) ||(dp[i][j-1] && (B[j-1]==C[i+j-1]));
        }
    }
    if(dp[lena][lenb]) return true;
    return false;
}
