class Solution {
	public:
	int findUnique(vector<int> &arr) {
		int temp = arr[0];
		for (int i = 1; i < arr.size(); i++) {
			temp ^= arr[i];
			
			
		}
return temp;	}
};