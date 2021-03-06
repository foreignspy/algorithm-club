
// 3 SUM ALGORITHM ; a + b + c = x
// 3 SUM ALGORITHM A + B + C = X

vector<vector<int>> three_sum(vector<int>& numbers) {
  vector<vector<int>> target;

  sort(numbers.begin(), numbers.end());
  int i=0, last=numbers.size() - 1;

  while(i < last) {
    int a = numbers[i], j = i + 1; k = last;
    while(j < k) {
      int b = numbers[j], c = numbers[k], sum = a+b+c;
      if(sum == 0) target.push_back({a,b,c});
      if(sum <= 0) while(numbers[j] == b && j < k) j++;
      if(sum >= 0) while(numbers[k] == b && j < k) k--;
    }
    while(numbers[i] == a && i < last) i++;
  }
  return target;
}
