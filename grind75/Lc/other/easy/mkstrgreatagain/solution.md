# Making the string Great again

## problem statement 

When given a string `s = "UabBCcAs"` with both upper and lower case characters. 
We need to make it "Great". It is "Great" when it **doesnt contain** two adjacent and SAME characters `s[i]` & `s[i+1]`, such that `s[i]` is a lower case letter and `s[i+1]` is in uppercase and vice-versa.


`Caa`, `CAA` are great.<br>
`caA`, `CaA` are not great<br>
`abCcdD` not great.

Remove the bad characters and repeat until the string is good.
*Notice* an empty string is also good.

## Example

Using `s = "UabBCcAs` as an example. When we iterate the string, the first instance of adjacent characters we get are `bB`. Since they are not great, we remove them. Next, it is `Cc`. Similarly we also remove them. Now we are left with `UaAs`. Since we now have `aA`, we will have to remove them, leaving us with `Us` and hence making the string great.

## What Data structure is used

For this question, we are using a `Stack`. Why? We are iterating over the string and pushing our values as long as our string `s` is valid. When we encounter a value that is not valid, we pop it. Repeat until the string is great. 

[first step](images/uab.jpg)
