
#include "myString.h"
using namespace std;

// Определение конструктора.


// Определение деструктора.

MyString::MyString(const char* pStr)
{
	this->m_pStr = new char[strlen(pStr) + 1];
	strcpy(m_pStr, pStr);
}

MyString::MyString(const MyString& tmp)
{
	this->m_pStr = new char[strlen(tmp.m_pStr) + 1];
	strcpy(m_pStr, tmp.m_pStr);
}

MyString::~MyString()
{
	delete this->m_pStr;
}

void MyString::SetNewString(const char* newStr)
{
	delete this->m_pStr;
	m_pStr = new char[strlen(newStr) + 1];
	strcpy(m_pStr, newStr);
}
