#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int len = m-- + n-- - 1;
        while (m >= 0 && n >= 0) {
            nums1[len--] = nums1[m] > nums2[n] ? nums1[m--] : nums2[n--];
        }

        while (n >= 0) {
            nums1[len--] = nums2[n--];
        }
    }
};

int main()
{
    Solution sol;
    vector<int> nums1{1,2,5,0,0,0};
    vector<int> nums2{3,5,7};
    sol.merge(nums1, 3, nums2, 3);
    for(auto& num : nums1)
    {
        cout << num << " ";
    }
    cout << endl;
}