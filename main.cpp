#include <iostream>

std::string encrypt_caesar(std::string word, int inc)
{
 for  (int i=0; i<word.length();i++) {
   if ( word[i] >='a' && word[i]<='z') {
     int count = int(word[i]) - int('a');
     count +=inc;
     word[i] = count%26;
   }
   else if ( word[i] >='A' && word[i]<='Z') {

   }
   else word[i]='*';

 }
 return word;
}

std::string decrypt_caesar (std::string word, int inc)
{
 return 0;
}

std::string phrase,crypt;
int inc;

int main() {
    std::cout << "Caesar!" << std::endl;
    std::cout << "Input phrase:";
    std::cin >> phrase;
    std::cout << "Input shift:";
    std::cin >> inc;
    std::cout << "Crypt or Decrypt (y/n)?";
    std::cin >> crypt;
    std::cout << encrypt_caesar(phrase,inc);

    return 0;
}
