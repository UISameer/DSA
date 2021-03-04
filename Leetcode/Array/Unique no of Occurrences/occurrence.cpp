// https://leetcode.com/problems/unique-number-of-occurrences/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        set <int> s;
        map <int, int> m;
        for(auto &x : arr){
            m[x]++;
        }
        for(auto it = m.begin() ; it != m.end() ; it++){
            s.insert(it->second);
        }
        if(m.size() == s.size())
            return true;
        return false;
    }
};

int main() {

	vector<int>arr = {1,2,2,1,1,3};
	bool isTrue = Solution().uniqueOccurrences(arr);
	cout << isTrue;
	return 0;
}