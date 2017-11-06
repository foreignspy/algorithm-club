

//ROT13


void encrypt_str(char []);

void encrypt(char string[]) {
  for(int i=0; str[i] != '\0'; i++) {
    if(str[i] >= 'a' && str[i] <= 'm') {
       str[i] += 13;
    }
    else if(str[i] > 'm' && str[i] <= 'z') {
       str[i] -= 13;
    }
    else if(str[i] >= 'A' && str[i] <= 'M') {
       str[i] += 13;
    }
    else if(str[i] > 'M' && str[i] <= 'Z') {
       str[i] -= 13;
    }
  }
}


int main() {
  char my_string[] = "Algorithm Club";
  cout << "original text: " << my_string << endl;

  encrypt_str(my_string);
  cout << "encrypted string: " << my_string << endl;

  encrypt_str(my_string);
  cout << "decrypted string: " << my_string << endl;

  return 0;
}
