#pragma once
#include <string>

class MyString
{
    char* m_pStr;	//������-���� ������
public:
    MyString(const char* pStr = "\0");
    MyString(const MyString& tmp);
    ~MyString();

    void SetNewString(const char* newStr);
};
