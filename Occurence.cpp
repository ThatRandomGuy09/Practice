class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       // define Upper and Lower  bound

       auto lb  = lower_bound(nums.begin(),nums.end(),target);
       auto up  = upper_bound(nums.begin(),nums.end(),target); 

       // decleare result to store the element with the range of 2 
       vector<int> result(2);


       // check for the condition of {-1,-1}

       if(lb == nums.end()  || *lb != target ){
           return {-1,-1};
       }



       // Else rest Case 

       else{
           result[0] = distance(nums.begin() , lb);
           result[1] = distance(nums.begin(), prev(up));
       } 
        
        return result;
    }
};