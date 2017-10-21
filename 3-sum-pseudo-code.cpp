

// 3 SUM PSEUDO CODE

3sum(a[], S) {
  sort(a);

  result = empty set of 3 elements
  for i = 0 to n-1;
  target = S-a[i];
  last = i+1;
  head = n-1;

  while last < head {
     2sum = a[left]+a[head];
  if 2sum=target then
     result.add(a[last], a[head], a[i])
     end--;
     start++;
  else if 2sum > target then
     end--;
  else
     start++;
     end;
  }
  return result;
}
