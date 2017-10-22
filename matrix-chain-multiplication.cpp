





// matrix chain multiplication

int matrix_chain_multiplication(int p[], int n) {
  int m[n][n];
  int i, j, k, L, q;

  for(int i=1; i<n; i++)
     m[i][i] = 0;    // number of multiplications when only 1 matrix

  for(int L=2; L<n; L++) {
    for(int i=1; i<n-L+1; i++) {
      j = i + L - 1;
      m[i][j] = INT_MAX;  // assigning to max value

      for(k=i; k<=j-1; k++) {
        q = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];
        if(q < m[i][j]) {
          m[i][j] = q;
        }
      }
    }
  }
  return m[1][n-1];
}
