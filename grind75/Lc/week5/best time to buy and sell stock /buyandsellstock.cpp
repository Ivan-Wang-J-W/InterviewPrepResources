#include <algorithm>
#include <climits>
#include <vector>
class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
       //declare min price and max profit 
		int min_price = INT_MAX;
		int max_profit =0;
		
		//iterate over vector
		//you can also use a for loop
		//for(int curr =0; curr<prices.size(); curr++)
		//but you will have to use curr[i] instead of just curr. **impt note
		for(auto curr : prices){
			//check for min price
			if(min_price > curr){
				min_price= curr;
			}
			else if (max_profit < curr - min_price) {
				max_profit=curr- min_price;
			
			}
		}
		return max_profit;
    }
};
