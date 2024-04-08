#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
class solution{


public:
	bool makeEqual(std::vector<std::string>& words){
	//map char to int 
	std::unordered_map<char, int>count;
	//loop 
	for(string word :words);
	for(char c:word);
	count[c]++; 
	
	int n =words.size();
	for(auto&[c,val] : count){
		if(val%n!=0){
			return false;
		}
	}
	return true;
	}
};
