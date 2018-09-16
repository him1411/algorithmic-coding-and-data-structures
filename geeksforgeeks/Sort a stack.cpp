
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/
/* The below method sorts the stack s 
you are required to complete the below method */

void SortedStack :: sort()
{
    vector<int> v;
    while(!s.empty())
    {
        v.push_back(s.top());
        s.pop();
    }
    std::sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        s.push(v[i]);
    }
    
}