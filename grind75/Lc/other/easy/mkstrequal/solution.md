As question stats that, "you can make **every** *string* in `words` equal using **any** number of operations"
hence we can shift the indices around as we like.

This results in the question simply be about counting the number of occurances of the letter
operation does not matter, can be "ABC"/"BAC".
We need to check if we have enough copies of every character 
to make a list of words with the same length of the array

### Best data structure for that is 
**Hashmap** but we're going with vector approach for now.
Example

**Input**: words = `["abc","aabc","bc"]`
we count the occurances
eg
```
a --> 3
b --> 3
c --> 3
```
In input, we're given 3 words. Hence every word we can give a single A,B,C. Orientation does not matter.
what if we have 

```
a --> 3
b --> 3
c --> 6
```
Since we have 3 words, we can simply redistribute accordingly. We check the value after running the modulo operatiion on each value. Since 6%3 =0. we can divide evenly amongst the 3 input. If the remainder is > 0. we return false.

## TLDR
`count every instance of each character and ensure its remainder == 0 after %`
* Time complexity = O(n) where n is the number of characters in string
* Space complexity = O(1) where number of unique characters is 26
### Vector approach
1. Initialization
 	create a count vector of size 26
	```
	vector<int> counts(26,0)
	```
	>this means vector of size 26 with value of 0
3. Counting
   * loop through each word in input vector.
   * For each Character in every word, increment respective count in the counts array
   ```
   for(string word :words)
   	for(char c : word)
		counts[c -'a']++
   ```
   > O(mn) time complexity despite it being a nested forloop. In terms of time complexity, you would represent them as different variables. eg n=#words, m=#char/word
   > the reason for using different variables is they scale differently. eg if u have <10 words but each word has <10^100 characters, O(n^2 log m) in practice is much better than O(nm)
   >why c-'a'? because Strings have a hexadecimal value. it goes from 0x61 until 0x7a. what we are doing is subtracting 61 from each entry to obtain 0 to 25 to populate the vector.
   > If using a hashmap, we simply write `counts[c]++;`
1. check distribution. 
  > initialise n  
   ```
   int n = words.size();
   ```
1. Loop through and check
	```for (int val : counts){
	if (val % n != 0){
	return false
	}
	}
	return true
	```

### Hashmap approach

Similar to the vector approach, we simply swap the vector out.
we are counting the instance of var1 with var2 in this case.
```
unordered_map<variable1, variable2>some_hashmap_name;
unordered_map<char, int>count;

```
1. Still have to loop it.
```
   for(string word :words)
   	for(char c : word)
		counts[c]++
   ```
2. check distribution.
 > initiliase n
 
 ```
 int n = words.size();
 ```
 
 1. This time things are slightly different.
 Since we are using hashmap to calculate. 
 we have a few different ways to loop it.
 
 ~~~
 for (auto&[c,val] : count){
 if(count[c]%n != 0){
 return false;
 }
 }
 ~~~
 ## OR
 
 ~~~
 for (auto&[c,val] : count){
 if(val%n != 0){
 return false;
 }
 ~~~

`for(auto &[key, value]:unordered_map)`
 
 When iterating through an unordered map, you have a pair of values.
 Key (identifier) and Value (whatever we're relating to identifier)
 
 so if wrong data type used example int, there will be an error `No viable conversion from std::pair<const char, int> to int` for example.
 
 Since we're iterating and getting both character and related count stored in a pair,
 example, given a (char, int) but operating on int. Compiler will not be able to for example ('a',5)%3.
