// class Solution {
// public:
//     vector<int> dailyTemperatures(vector<int>& t) {
//         stack<int>st;
//         int n=t.size();
//         vector<int>ans(n);
  
//         for(int i=n-1;i>=0;i--){
//             while(!st.empty()&&t[st.top()]<=t[i]){
//                 st.pop();
//             }
            
//             if(st.empty()){
           
//                 ans[i]=0;
//             }
//             else if(!st.empty()){
               
//                 ans[i]=st.top()-i;
//             }
//             st.push(i);
//         }
//         return ans;
//     }
// };