// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         unordered_map<string , vector<string>> mp;

//         for(int i = 0 ; i<strs.size() ; i++){
//             string temp = strs[i];
//             sort(temp.begin() , temp.end());
//             mp[temp].push_back(strs[i]);
//         }

//         vector<vector<string>> result ;
//         for(auto i = mp.begin() ; i!=mp.end() ; i++){
//             result.push_back(i->second);
//         }

//         return result;
//     }
// };