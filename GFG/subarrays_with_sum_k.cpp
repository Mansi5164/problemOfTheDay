class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) {
        // code here
        unordered_map<int, int> prefixSums;
  
    int res = 0;
    int currSum = 0;

    for (int i = 0; i < arr.size(); i++) {
        
        
        currSum += arr[i];
        if (currSum == k)
            res++;

        // Check if the difference exists in the prefixSums map.
        if (prefixSums.find(currSum - k) != prefixSums.end())
            res += prefixSums[currSum - k];
        prefixSums[currSum]++;
    }

    return res;
    }
};