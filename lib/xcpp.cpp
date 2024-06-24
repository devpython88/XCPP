#include "../include/xcpp.hpp"
#include <sstream>
#include <string>
#include <vector>

/* XString */

XString::XString(std::string text){
    this->text = text;
}

void XString::change(int index, char to){
    this->text[index] = to;
}

int XString::size(){
    return this->text.length();
}

std::vector<std::string> XString::split(char delimiter){
    std::stringstream ss(this->text);
    std::vector<std::string> toks;
    std::string tok;
    
    while (std::getline(ss, tok, delimiter)){
        toks.push_back(tok);
    }

    return toks;
}

std::vector<XString> XString::split_as_xstr(char delimiter){
    std::stringstream ss(this->text);
    std::vector<XString> toks;
    std::string tok;
    
    while (std::getline(ss, tok, delimiter)){
        toks.push_back(XString(tok));
    }

    return toks;
}

char XString::at(int index){
    return this->text[index];
}

const char* XString::c_str(){
    return this->text.c_str();
}

std::string XString::getPlainString(){
    return this->text;
}

bool XString::startsWith(std::string prefix){
    return this->text.substr(0, prefix.length()) == prefix;
}

bool XString::endsWith(std::string suffix){
    return this->text.substr(suffix.length(), -1) == suffix;
}

bool XString::startsWith(XString prefix){
    return this->startsWith(prefix.getPlainString());
}

bool XString::endsWith(XString suffix){
    return this->endsWith(suffix.getPlainString());
}

/******************************/

