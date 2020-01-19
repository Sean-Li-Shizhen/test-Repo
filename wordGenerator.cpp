#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;

const char *start_letter = new char[25] {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','y','z'};
const char *vowel = new char[5] {'a','e','i','o','u'};
const char *consonant = new char[21] {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};

int main(){
    unsigned int wordSize{};
    cout<<"How long is the word you are trying to generate?"<<endl;
    cin>>wordSize;
    string output{};
}

void readable_word(string &word, int length){
    if(word.length()==length){
        return;
    }
    else if(word.length()==0){
        word += start_letter[rand()%25];
    }
    else{
        for(int i=0; i<5; i++){
            if(vowel[i]==word.c_str()[word.length()-1]){
                word += consonant[rand()%21];
            }
        }
        for(int j=0; j<21; j++){
            if(consonant[j]==word.c_str()[word.length()-1]){
                word += vowel[rand()%5];
            }
        }
    }
    readable_word(word, length);
}