#include <iostream>
#include <vector>

class solution {
public:
  int numberOfBeams(std::vector<std::string> bank) {
    // delcare ans and prev
    int ans = 0;
    int prev = 0;
    // loop through bank
    for (auto currc : bank) {
      int count = 0;
      // check for 1
      for (auto c : currc) {
        if (c == '1') {
          count++; // increment when we find a '1'
        }
      }
      if (count != 0) {
        ans += prev * count;
        prev = count;
      }
    }
    return ans;
  }
};
