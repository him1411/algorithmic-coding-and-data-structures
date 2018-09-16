
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* The task is to complete merge() which is used
   in below mergeSort() */
/*   l is for left index and r is right index of the
   sub-array of arr to be sorted
void mergeSort(int arr[], int l, int r) {
    if (l < r)   {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
} */
// Merges two subarrays of arr[].  First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
    int n1 = m-l+1;
    int n2= r-m;
    int le[n1],ri[n2];
    for(int i=0;i<n1;i++)
    {
        le[i] = arr[l+i];
    }
    for(int i=0;i<n2;i++)
    {
        ri[i] = arr[m+i+1];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(le[i]<=ri[j])
        {
            arr[k]=le[i];
            i++;
        }
        else
        {
            arr[k]=ri[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=le[i];
        i++;k++;
    }
    while(j<n2)
    {
        arr[k]=ri[j];
        j++;k++;
    }
}