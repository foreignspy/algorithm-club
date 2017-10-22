




// MAXIMUM SUB-ARRAY PSEUDO CODE

 max_sub_array(A, n) {
   a = 0; n =0;

   for i=1 to n
     do a = max{0, n+a[i]}
        n = max{max, answer}

   return a;
 }
