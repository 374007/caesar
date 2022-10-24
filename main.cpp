#include <iostream>

std::string encrypt_caesar(std::string word, int inc)
{
  char alph;
    for  (int i = 0; i < word.length(); i++) {
       if ( word[i] >= 'a' && word[i] <= 'z') alph = 'a' ;
       else if ( word[i] >= 'A' && word[i] <='Z') alph = 'A';
       else continue;
       word[i] = (word[i] - alph + inc) % 26 + alph;
    }
  return word;
}

std::string decrypt_caesar (std::string word, int inc)
{
   char alph;
     for  (int i = 0; i < word.length(); i++) {
        if ( word[i] >= 'a' && word[i] <= 'z') alph = 'z' ;
        else if ( word[i] >= 'A' && word[i] <= 'Z') alph = 'Z';
        else continue;
        word[i] = (word[i] - alph - inc) % 26 + alph;
     }
   return word;
}

std::string phrase,crypt;
int inc;

int main() {
    std::cout << "Caesar!" << std::endl;
    std::cout << "Input phrase:";
    std::getline(std::cin, phrase);
    std::cout << "Input shift:";
    std::cin >> inc;
   // std::cout << "Crypt or Decrypt (y/n)?";
   // std::cin >> crypt;
    std::cout <<"Crypt: " << encrypt_caesar(phrase,inc) << "\n";
    std::cout <<"Decrypt: " << decrypt_caesar(encrypt_caesar(phrase, inc), inc);
    return 0;
}
