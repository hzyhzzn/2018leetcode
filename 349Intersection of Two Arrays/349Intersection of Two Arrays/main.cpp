#include <iostream>
#include <vector>
#include <set>
using namespace std;


class Solution {
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		set<int> set1;
		vector<int> res;
		for (int i=0;i<nums1.size();i++)
		{
			set1.insert(nums1[i]);
		}

		for (int i = 0; i<nums2.size(); i++)
		{
			if (set1.find(nums2[i]) != set1.end())
			{
				res.push_back(nums2[i]);
				set1.erase(nums2[i]);
			}
		}
		return res;
	}
};

int main()
{
	Solution sol;
	vector<int> nums1 = { 1, 2, 2, 1 };
	vector<int> nums2 = { 2, 2 };
	sol.intersection(nums1, nums2);
	return 0;
}