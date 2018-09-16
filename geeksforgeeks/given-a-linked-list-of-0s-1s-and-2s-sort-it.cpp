
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
  Sort the list of 0's,1's and 2's
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     Node *next;
  }
*/
void sortList(Node *head)
{
   int arr[3] = {0,0,0};
   Node *temp =head;
   while(temp!=NULL)
   {
       arr[temp->data]++;
       temp = temp->next;
   }
   int i=0;
   temp =head;
   while(temp!=NULL)
   {
        if(arr[i]==0)
            i++;
        else
        {
            temp->data=i;
            arr[i]--;
            temp=temp->next;
        }
   }
   
}
