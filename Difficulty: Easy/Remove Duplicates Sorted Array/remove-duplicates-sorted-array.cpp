class Solution {
	public:
	vector<int> removeDuplicates(vector<int> &arr) {
		// code here
		int size = arr.size();
		vector<int> ans;
		for (int i = 0 ; i < size - 1; i++) {
			if (arr[i] != arr[i + 1]) {
				ans.push_back(arr[i]); }
				
			}
			if (size > 0)
				ans.push_back(arr[size - 1]);
			return ans;
		}
	};
