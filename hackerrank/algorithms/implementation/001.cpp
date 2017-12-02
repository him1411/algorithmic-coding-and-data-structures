//https://www.hackerrank.com/challenges/grading/problem
#include <bits/stdc++.h>
using namespace std;

vector < int > solve(vector < int > grades)
{
    int n=grades.size();
    for(int i =0; i<n ; i++)
    {
        if(grades[i] < 38 )
        {
            continue;
        }
        else
        {
            if(grades[i]%10==3 || grades[i]%10==8)
            {
                grades[i] += 2;
            }
            if(grades[i]%10==4 || grades[i]%10==9)
            {
                grades[i] += 1;
            }

        }
    }
    return grades;
}

int main() 
{
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int i = 0; i < n;i++)
    {
       cin >> grades[i];
    }
    vector < int > result = solve(grades);
    for (ssize_t i = 0; i < result.size(); i++) 
    {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;
    return 0;
}
