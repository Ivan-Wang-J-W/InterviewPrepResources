
First we declare two variables.  

```
int max_profit = 0;
int min_price = INT_MAX;

```

Now we iterate through the vector. 

### for each loop

```
for(auto curr : prices)

```

## OR

### normal for loop

```
for(int curr; curr<prices.size(); curr++)

```

## Checking for min price

Now in this loop, we use a `if` statement to check for the min price.

```
if(min_price > curr)
{
min_price = curr;
}

```
We set min_price is as INT_MAX; to account for a wide range of values,this is also applicable to other questions. We usually assign a high value to MIN to compute the minimum value in an array. But if an array has large elements, we must assign the highest possible value to the array. Hence curr can be updated to be the smallest value.


## Check for max profit

Now we add a `else if` statement to check for `max_profit`

```
else if(max_profit < curr - min_price){
max_profit = curr - min_price

}
```
and finally we return `max_profit`.


## Time and Space complexity

As we are simply iterating over the vector of N elements, we have a Time complexitiy of O(n) and space complexity of O(n).
