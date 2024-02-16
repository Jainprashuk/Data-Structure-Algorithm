// class Solution {
// public:
//     long long largestPerimeter(vector<int>& nums) {
//         long long sum = 0 ;
//         sort(nums.begin() , nums.end());

//         for(int i = 0 ; i<nums.size() ; i++){
//             sum = sum + nums[i];
//         }

//         for(int i = nums.size()-1 ; i>=2 ; i--){
//             sum = sum - nums[i];
//             if(sum > nums[i]){
//                 return sum + nums[i];
//             }
//         }

//         return -1;
//     }
// };