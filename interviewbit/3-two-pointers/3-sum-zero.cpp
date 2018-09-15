vector<vector<int> > Solution::threeSum(vector<int> &A) 
{
    sort(A.begin(),A.end());
    int n =A.size(),c=0;
    vector<vector<int>> result;
    for(int i=0;i<n-2;i++)
    {
        int l =i+1,r=n-1;
        if(i>0 && A[i]==A[i-1])
            continue;
            
        while(l<r)
        {
            int sum = A[l] + A[i] + A[r];
            if(sum ==0)
            {
                vector<int>temp = {A[i],A[l],A[r]};
                int s =result.size();
                if(s>0 && result[s-1][0]==temp[0] && result[s-1][1]==temp[1] && result[s-1][2]==temp[2]);
                else
                    result.push_back(temp);
                
                ++l;r--;
            }
            else if(sum>0)
                r--;
            
            else
                l++;
        }
    }
    
    return result;
}
