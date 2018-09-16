void stockBuySell(int price[], int n)
{
    if (n == 1)
        return;

    int count = 0; 
    Interval sol[n/2 + 1];
    int i = 0;
    while (i < n-1)
    {
        while ((i < n-1) && (price[i+1] <= price[i]))
            i++;
 
        if (i == n-1)
            break;
 
        sol[count].buy = i++;
 
        while ((i < n) && (price[i] >= price[i-1]))
            i++;
 
        sol[count].sell = i-1;
        count++;
    }
    if (count == 0)
        printf("There is no day when buying the stock will make profitn");
    else
    {
       for (int i = 0; i < count; i++)
          printf("Buy on day: %dt Sell on day: %dn", sol[i].buy, sol[i].sell);
    }
 
    return;
}