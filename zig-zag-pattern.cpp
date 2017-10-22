






// ZIG-ZAG PATTERN

string convert(string s, int numRows) {
  string result = "";

  //create if statement string size is less than or equal to numrows or numrows equal to one then return string
  if(s.size() <= numRows || numRows == 1)
     return s;

     int column_index = 0;

     //for loop int i equal to 0, i less than numrows i++
     //for each row the 1st char is in the ith position of string
     for(int i = 0; i<numRows; i++) {
         result += s[i];
         column_index = i+2*numRows - 2;

     while(column_index - 2 * i < s.size()) {
         if(i != 0 && i != numRows - 1) {
           result += s[column_index - 2 * i];
         }
         if(column_index < s.size()) {
           result += s[column_index];
         }
         column_index += 2*numRows - 2;
       }
     }
     return result;
  }
};
