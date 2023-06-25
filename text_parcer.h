#pragma once
#include <string>
#include <string_view> 
#include <iostream>


#ifndef FRANK_METHOD_CPP_TEXT_PARCER_H
#define FRANK_METHOD_CPP_TEXT_PARCER_H

#endif //FRANK_METHOD_CPP_TEXT_PARCER_H

std::string ReadLine() {
    std::string s;
    getline(std::cin, s);
    return s;
}

std::vector<std::string_view> SplitIntoWords(const std::string_view text) {
    std::vector<std::string_view> words;
    auto begin = text.begin();
    auto it = text.begin();
    size_t count = 0;
    while (text.end() != it) {
        if (*it == ' ') {
            if (count > 0) {
                std::string_view word = text.substr(std::distance(text.begin(), begin), count);
                words.push_back(word);
            }
            count = 0;
            begin = it + 1;

        } else {
            ++count;
            if (it + 1 == text.end()) {
                words.push_back(text.substr(std::distance(text.begin(), begin), count));
            }
        }
        ++it;
    }
    return words;
}

