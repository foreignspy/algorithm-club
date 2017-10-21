


bool isPalindrome(string mystring) {
  for(int i=0, j=mystring.size()-1; i<j;) {
    while(isalnum(mystring[i]) == false && i < j) i++;
    while(isalnum(mystring[j]) == false && i < j) j--;

  if(toupper(mystring[i++]) != toupper(mystring[j--]))
    return false;
  }
    return true;
}
