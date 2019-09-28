#include <iostream>
#include <cstring>

using namespace std;

class String  
{  
	friend ostream& operator<<(ostream &os, const String& str);		//<<运算符重载

	//+运算符重载，必须声明为友元，因为二元运算符成员函数重载只能有一个参数或没有参数，而这里有两个参数
	friend String operator+(const String& s1, const String& s2);

public:  
	String(const char *str = NULL);// 普通构造函数    
	String(const String& other);// 拷贝构造函数    
	~String();// 析构函数    
	String& operator=(const String& other);// 赋值运算符重载
	String& operator+=(const String& other);// +=运算符重载 

private:  
	char *m_data;// 用于保存字符串    
};  

String::String(const char *str)
{
	if(str == NULL)	
	{
		m_data = new char[1];
		m_data[0] = '\0';
	}
	else
	{
		m_data = new char(strlen(str) + 1);
		strcpy(m_data, str);
	}
}

String::String(const String &other)
{
	m_data = new char[strlen(other.m_data) + 1];
	strcpy(m_data, other.m_data);
}

String::~String()
{
	delete [] m_data;
}

String& String::operator=(const String& other)
{
	if(this == &other)
		return *this;

	delete [] m_data;
	m_data = new char[strlen(other.m_data) + 1];
	strcpy(m_data, other.m_data);
	return *this;
}

String& String::operator+=(const String& other) 
{
	int len = strlen(m_data) + strlen(other.m_data) + 1;
	char* tmp = new char[len];
	memset(tmp, 0, len);
	strcpy(tmp, m_data);
	strcat(tmp, other.m_data);

	delete [] m_data;
	m_data = new char(len);
	strcpy(m_data, tmp);
	delete [] tmp;

	return *this;
}

String operator+(const String& s1, const String& s2)
{
	String tmp(s1);
	tmp += s2;

	return tmp;
}

ostream& operator<<(ostream &os, const String& str)
{
	os << str.m_data;
	return os;
}

int main()
{
	String a("abcdefg");
	cout << a << endl;

	String b(a);
	cout << b <<endl;

	String c = a;
	cout << c << endl;

	a += c;
	cout << a << endl;

	String d = a + b;
	cout << d << endl;

	return 0;
}
