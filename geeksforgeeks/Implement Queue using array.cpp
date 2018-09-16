
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* 
The structure of the class is
class Queue {
private:
    int arr[10001];
    int front;
    int rear;
public :
    Queue(){front=0;rear=0;}
    void push(int);
    int pop();
};
 */
/* The method push to push element into the queue */
void Queue :: push(int x)
{
    arr[rear] = x;
    rear++;
}
/*The method pop which return the element poped out of the queue*/
int Queue :: pop()
{
    if(front==rear)
    {
        front =0;rear=0;
        return -1;
    }
    
    int t = arr[front];
    front++;
    return t;
    
}
