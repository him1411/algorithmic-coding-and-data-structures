int search(const vector<int> &A, int B,bool key )
{
    int start =0,end = A.size()-1,ans=-1;
    
    while(start<=end)
    {
        int mid = (start+end) /2;
        if(A[mid]==B)
        {
            ans =mid;
            if(key)
                end = mid -1;
            else
                start =mid +1;
        }
        else if(A[mid]>B)
            end = mid -1;
        else
            start = mid +1;
    }
    
    return  ans;
}
 
 
 
vector<int> Solution::searchRange(const vector<int> &A, int B) 
{
    vector<int> ans;
    int t1 = search(A,B,true);
    int t2 = search(A,B,false);
    ans.push_back(t1);
    ans.push_back(t2);
    
    return ans;
}