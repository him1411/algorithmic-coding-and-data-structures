int Solution::uniquePaths(int A, int B) 
{
    if(A==1 || B==1)
        return 1;
    
    return Solution::uniquePaths(A-1,B) + Solution::uniquePaths(A,B-1);
}
