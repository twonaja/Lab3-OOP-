#pragma once
#include <string>

class MyString
{
    char* m_pStr;	//строка-член класса
public:
    MyString(const char* pStr = "\0");
    MyString(const MyString& tmp);
    ~MyString();

    void SetNewString(const char* newStr);
};
