#pragma once
#include <ostream>
#include <string>

class MyString
{
    char* m_pStr;	//строка-член класса
public:
    MyString(const char* pStr = "\0");
    MyString(const MyString& tmp);
    MyString(const MyString&& tmp);
    
    ~MyString();
    
    const MyString& operator=(const MyString& rObj);
    const MyString& operator+=(const MyString& rObj);
    
    friend std::ostream& operator<<(std::ostream& os, const MyString& rObj);
    friend MyString operator+(const MyString& rLftObj, const MyString& rRghtObj);
    
    void SetNewString(const char* newStr);
};
