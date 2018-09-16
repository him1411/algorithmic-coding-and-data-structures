
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
/*  
     ar[] is the array
     n = number of element in array
     mod = modulo value;
*/
long long int product(int ar[], int n, long long int mod)
 {
     long long ans =1;
     for (int i=0;i<n;i++)
     {
         ans = ans * ar[i];
         ans = ans % mod;
     }
     return ans;
     
 }