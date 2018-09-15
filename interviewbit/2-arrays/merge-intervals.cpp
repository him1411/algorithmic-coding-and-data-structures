or<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) 
{
    if(newInterval.start > newInterval.end)
    {
        int temp =newInterval.start;
        newInterval.start = newInterval.end;
        newInterval.end = temp;
    }
    int i=0,p=-1,q=-1;
    int n = intervals.size();
    
    for(int i=0;i<n;i++)
    {
        if(max(intervals[i].start,newInterval.start)< min(intervals[i].end,newInterval.end))
        {
            if(p<0)
                p =i;
                
                
            q=i;
        }
    }
    
    if(p<0)
    {
        vector<Interval> :: iterator it  = intervals.begin();
        for(i =0 ;i<n;i++)
        {
            if(newInterval.start < intervals[i].start)
            {
                intervals.insert(it,newInterval);
                return intervals;
            }
            it++;
        }
        intervals.push_back(newInterval);
        return intervals;
    }
    
    
    intervals[p].start=min(intervals[p].start,newInterval.start);
    
    intervals[p].end=max(intervals[q].end,newInterval.end);
    
    for(i=1;i<n-q;i++)
    {
    	intervals[p+i].start=intervals[q+i].start;
    	intervals[p+i].end=intervals[q+i].end;
 
    }
    
    for(i=n-q+p;i<n;i++)
    	intervals.pop_back();
    	
    return intervals;
}