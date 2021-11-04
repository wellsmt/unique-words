#include <iostream>
#include <thread>
#include <fstream>
#include <string>
#include <set>
#include "ctpl.h"

int main(int argc, char *argv[])
{
    std::ifstream infile(argv[1]);
    std::string input;
    std::set<std::string> unique_words;

    if(infile.is_open()){
        while(infile >> input){
            unique_words.insert(input);
        }
    }
    infile.close();

    std::cout << unique_words.size() << "\n";
    return 0;
}