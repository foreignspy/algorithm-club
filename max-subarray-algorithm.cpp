



// MAXIMUM SUB-ARRAY

int max_sub_array(vector<int>& nums) {
  int answer=0, sum=nums[0];

  for(int i=0; i<nums.size(); i++) {
    answer=max(nums[i], answer+nums[i]);
    sum = max(sum, answer);
  }
  return answer;
}
