
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

MyString::MyString(const MyString&& tmp)
{
	this->m_pStr = new char[strlen(tmp.m_pStr) + 1];
	strcpy(this->m_pStr, tmp.m_pStr);
	delete[] tmp.m_pStr;
}

MyString::~MyString()
{
	delete[] this->m_pStr;
}

const MyString& MyString::operator=(const MyString& rObj2)
{
	if (this != &rObj2)
	{
		delete[] this->m_pStr;
		m_pStr = new char[strlen(rObj2.m_pStr) + 1];
		strcpy(this->m_pStr, rObj2.m_pStr);
		return *this;

	}
	return *this;
}


const MyString& MyString::operator+=(const MyString& rObj)
{
	*this = *this + rObj;
	return *this;
}

void MyString::SetNewString(const char* newStr)
{
	delete[] this->m_pStr;
	m_pStr = new char[strlen(newStr) + 1];
	strcpy(m_pStr, newStr);
}

MyString operator+(const MyString& rLftObj, const MyString& rRghtObj)
{

		size_t concatLen =  strlen(rLftObj.m_pStr) + strlen(rRghtObj.m_pStr) + 1;
		size_t lenStr1 = strlen(rRghtObj.m_pStr) + 1;
		size_t lenStr2 = strlen(rLftObj.m_pStr) + 1;

		char* tmp = new char[concatLen];

		for (size_t i = 0; i < concatLen; i++)
		{
			if (i < lenStr2 - 1)
			{
				tmp[i] = rLftObj.m_pStr[i];
			}
			else
			{
				tmp[i] = rRghtObj.m_pStr[i - lenStr2 + 1];
			}
		}

		return MyString(tmp);
}

std::ostream& operator<<(std::ostream& os, const MyString& rObj)
{
	os << rObj.m_pStr;
	return os;
}
