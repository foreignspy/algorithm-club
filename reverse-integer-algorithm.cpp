





//  REVERSE INTEGER ALGORITHM

int reverse(int x) {
  int long = 0;  // width of 32 bits

  while(x) {
    int temp = x % 10 + answer * 10;
    if(temp / 10 != answer)
      return 0;
      answer = temp;
      x /= 10;
  }
  return answer; // returns inverse of the integer
}
