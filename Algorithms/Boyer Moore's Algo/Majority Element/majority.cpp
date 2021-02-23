#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int max = 0;
        int index = -1;

        for (int i = 0; i < nums.size(); ++i)
        {
            int count = 0;

            for (int j = 0; j < nums.size(); ++j)
            {
                if (nums[i] == nums[j]) {
                    count++;
                }
            }

            if (count > max) {
                index = i;
                max = count;
            }
        }

        if (max > nums.size() / 2) {
            cout << nums[index] << endl;
        } else {
            cout << "No Majority Element" << endl;
        }

        return nums[index];
    }
};

int main() {

    vector<int>v = {3, 2, 3};
    int majority = Solution().majorityElement(v);
    cout << " " << majority;
    return 0;
}
