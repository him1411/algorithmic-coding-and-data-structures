vector<int> Solution::maxset(vector<int> &A) 
{
    int len = A.size();  
    long long maxSum = 0;  
    long long curSum = 0;  
    int startMax = -1;  
    int endMax = -1;  
    int start = 0;  
    int end = 0;  
    while(end < len) 
    {  
        if(A[end] >= 0) 
        {  
            curSum = cursum + (long long)A[end];  
            if(curSum > maxSum) 
            {  
                   maxSum = curSum;  
                   startMax = start;  
                   endMax = end + 1;  
            } 
            else if(curSum == maxSum) 
            {  
                if(end + 1 - start > endMax - startMax) 
               {  
                    startMax = start;  
                    endMax = end + 1;  
               }  
            }  
        }
        else 
        {  
            start = end + 1;  
            curSum = 0;  
        }  
        end++;  
   }  
   
   vector<int> ans;  
   ans.clear();  
   if(startMax == -1 || endMax == -1)
        return ans;  
   for(int i = startMax; i < endMax; ++i)  
      ans.push_back(A[i]);  
   return ans; 
}
