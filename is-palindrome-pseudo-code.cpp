
//psuedo code to check if string is palindrome
var palindrome = "bab"

int x = 0;
int y = palindrome.length-1;

while(x <= y)
{
  if(palindrome[x]!=palindrome[y])
     return false;

  x++;
  y--;
}
     return true;
