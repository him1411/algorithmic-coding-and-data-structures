vector<vector<int> > Solution::generate(int A) 
{
    vector<vector<int>> r(A);
    for (int i = 0; i < A; i++) 
    {
        r[i].resize(i + 1);
        r[i][0] = r[i][i] = 1;

        for (int j = 1; j < i; j++)
            r[i][j] = r[i - 1][j - 1] + r[i - 1][j];
    }
    return r;
}