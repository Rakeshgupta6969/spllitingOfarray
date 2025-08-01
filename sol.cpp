class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {


    // using the optimal soluttion with the help of concept of the prefixsum;

    int n = nums.size();
    long long totalsum = 0;

    for(auto & num: nums){
        totalsum += num;
    }
   

     long long currsum = 0; // this is nothing but the prefixsum.
      int count = 0;
     for(int i = 0; i<n-1; i++){
        currsum += nums[i];

        long long remaisum = totalsum - currsum;

        if(currsum >= remaisum) count++;
     }


     return count;

    }
};