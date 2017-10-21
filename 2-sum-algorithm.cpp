
// 2SUM ALGORITHM


vector<int> two_sum(vector<int>& numbers, int target) {
  unordered_map<int, int> hash;

  int n = (int)numbers.size();
  for(int i=0; i<n; i++) {
    auto p = hash.find(target-numbers[i]);

  if(p != hash.end()) {
    return{p->second, i};
    }
    hash[numbers[i]]=i;
  }
}
