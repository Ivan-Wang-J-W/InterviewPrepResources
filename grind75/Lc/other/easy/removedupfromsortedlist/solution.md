Generally dummy nodes are used in linked list problems, but for this question we do not need one

Head of linked list is never gonna change as list is sorted, duplicates will be next to each other. We will delete the pointers pointing to the duplicates hence head will never be deleted. 
Hence dummy node would not be necessary here, dummy node is only when we will delete the head node.

## Iterating 
Pointers are used when iterating over linked lists. We can declare a node variable pointer pointing at head
```
listednode * node = head;
```

Since it is a sorted list, subsequent duplicate node has to be removed by simply moving the pointer to point at the next non duplicate node as we check for duplicates
```
node->next = node->next->next
```
Since we have to loop it, we check for `nullptr`. 

```
while(node != nullptr && node->next!=nullptr)
```
## Complexity

Time -> `O(n)`
<br>
Space -> `O(1)`

## Solution

````
ListedNode * node = head;

while(node!=nullptr&& node->next!=nullptr)
{
if(node->val== node->next->val){
ListedNode * tmp = node->next;

node->next = node->next->next;
delete tmp;
}
else{
node = node->next
}
}
return head
``````
Note that you can omit delcaring a new pointer tmp and the solution works. deleting tmp is for memory efficency 
we only shift the node when we dont find a duplicate, hence the else statement.
