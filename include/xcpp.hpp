#ifndef XCPP_HPP
#define XCPP_HPP
#include <iostream>
#include <string>
#include <vector>

class XString {
    private:
        std::string text;

    public:
        XString(std::string text);
        std::vector<std::string> split(char delimiter);
        std::vector<XString> split_as_xstr(char delimiter);
        char at(int index);
        const char* c_str();
        int size();
        void change(int index, char to);
        std::string getPlainString();
        bool startsWith(std::string prefix);
        bool endsWith(std::string suffix);
        bool startsWith(XString prefix);
        bool endsWith(XString suffix);
};


#endif
