#include <string>
#include <vector>
#include <algorithm>
#include <fstream>

#include "text_parcer.h"

int main() {

    std::vector<std::vector<std::string_view>> original;


    std::ifstream file("/Users/maximgarbart/Yandex.Disk.localized/frank-method-cpp/english.txt");
    std::string str;
    while (std::getline(file, str)) {
        original.push_back(SplitIntoWords(str));
    }
    
    for (auto vector: original) {
        for (auto item: vector) {
            std::cout << item << std::endl;
        }
    }


    return 0;
}