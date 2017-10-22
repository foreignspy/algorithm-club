



// MCM pseudo-code

 matrix_chain_order(array p[], int n) {
   for i=1 to n  // initialize
       do m[i,i]=0;

   for L = 2 to n-L+1 do {     // L = length of subchain
       j = i + L -1;
       m[i,j] = infinity;

   for k = i to j - 1 do {   // check all splits
       q = m[i,k] + m[k+1][j] + p[i-1]p[k]p[j];

   if(q < m[i,j]) {
       m[i,j] = q;
       s[i,j] = k;
      }
     }
   }
   return m[1,n] // final cost and s
 }
