#include <iostream>
#include <vector>
#include <string>

char ChangeToCapital(char);
char ChangeToCapital(char ch){
    return toupper(ch);
}

int main()
{
    std::vector <std::string> tempSentence;
    std::cout << "Please type something:";
    std::string sentence;
    std::getline(std::cin, sentence);

    for (int i = 0; i < sentence.size(); i++) {
       if (i > 1) {
            if (sentence.at(i - 1) == ' ') {
                sentence.at(i) = ChangeToCapital(sentence.at(i));
            }
        }
        else if (i == 0) {
            sentence.at(i) = ChangeToCapital(sentence.at(i));
        }
    }
    std::cout << sentence;
}
