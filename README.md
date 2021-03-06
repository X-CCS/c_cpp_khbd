# C/C++面试宝典
目录
=================

   * [C/C  面试宝典](#cc面试宝典)
      * [1 常识概念题](#1-常识概念题)
         * [1.1 C/C  基础](#11-cc基础)
            * [1.1.1 面向对象的三大特点](#111-面向对象的三大特点)
            * [1.1.2 结构体和类的区别](#112-结构体和类的区别)
            * [1.1.3 空类占多少个字节](#113-空类占多少个字节)
            * [1.1.4 引用占用内存空间吗](#114-引用占用内存空间吗)
            * [1.1.5 公有继承和私有继承的区别](#115-公有继承和私有继承的区别)
            * [1.1.6 虚析构函数的作用](#116-虚析构函数的作用)
            * [1.1.7 C  强制类型转换有哪些](#117-c强制类型转换有哪些)
            * [1.1.8 重写(覆盖)和隐藏的区别](#118-重写覆盖和隐藏的区别)
            * [1.1.9 深拷贝和浅拷贝](#119-深拷贝和浅拷贝)
            * [1.1.10 标准模板库的vector是否能当作栈](#1110-标准模板库的vector是否能当作栈)
            * [1.1.11 指针和引用的区别](#1111-指针和引用的区别)
            * [1.1.12 C  空类默认成员函数](#1112-c空类默认成员函数)
            * [1.1.13 内联函数和宏定义的区别](#1113-内联函数和宏定义的区别)
            * [1.1.14 构造函数可以是虚函数吗](#1114-构造函数可以是虚函数吗)
         * [1.2 数据库](#12-数据库)
            * [1.2.1 关系数据库和文件数据库的区别](#121-关系数据库和文件数据库的区别)
            * [1.2.2 内连接和外连接区别](#122-内连接和外连接区别)
            * [1.2.3 什么是事务](#123-什么是事务)
            * [1.2.4 什么是主键？什么是外键？](#124-什么是主键什么是外键)
            * [1.2.5 什么是视图](#125-什么是视图)
         * [1.3 网络知识](#13-网络知识)
            * [1.3.1 TCP三次握手和四次挥手](#131-tcp三次握手和四次挥手)
            * [1.3.2 socket编程流程](#132-socket编程流程)
         * [1.4 操作系统](#14-操作系统)
            * [1.4.1 进程和线程的区别](#141-进程和线程的区别)
            * [1.4.2 死锁形成的原因](#142-死锁形成的原因)
      * [2 编程题](#2-编程题)
         * [2.1 数组相关操作](#21-数组相关操作)
            * [2.1.1 用递归算法实现数组求和](#211-用递归算法实现数组求和)
            * [2.1.2 用递归算法判断数组是否是递增](#212-用递归算法判断数组是否是递增)
            * [2.1.3 用递归算法实现二分查找](#213-用递归算法实现二分查找)
            * [2.1.4 找出数组中重复次数最多的数字](#214-找出数组中重复次数最多的数字)
            * [2.1.5 删除数组中重复的元素](#215-删除数组中重复的元素)
            * [2.1.6 找出数组中第二大的数](#216-找出数组中第二大的数)
            * [2.1.7 数组左移和右移](#217-数组左移和右移)
            * [2.1.8 数组中有一个元素只出现一次，其它元素出现两次](#218-数组中有一个元素只出现一次其它元素出现两次)
            * [2.1.9  一次遍历寻找链表的倒数某个节点](#219--一次遍历寻找链表的倒数某个节点)
         * [2.2 链表相关操作](#22-链表相关操作)
            * [2.2.1 单链表反转](#221-单链表反转)
            * [2.2.2 逆序输出](#222-逆序输出)
         * [2.3 字符串相关操作](#23-字符串相关操作)
            * [2.3.1 统计一行字符串有多少个单词](#231-统计一行字符串有多少个单词)
            * [2.3.2 字符串逆序](#232-字符串逆序)
            * [2.3.3 实现strlen](#233-实现strlen)
            * [2.3.4 找出字符串中第一个只出现一次的字符](#234-找出字符串中第一个只出现一次的字符)
            * [2.3.5 输出字符串中每个字符出现的次数](#235-输出字符串中每个字符出现的次数)
            * [2.3.6 输出字符串所有字符的组合](#236-输出字符串所有字符的组合)
            * [2.3.7 实现C   string类](#237-实现c-string类)
         * [2.4 排序算法](#24-排序算法)
            * [2.4.1 选择排序](#241-选择排序)
            * [2.4.2 插入排序](#242-插入排序)
            * [2.4.3 冒泡排序](#243-冒泡排序)
            * [2.4.4 归并排序](#244-归并排序)
            * [2.4.5 快速排序](#245-快速排序)
            * [2.4.6 希尔排序](#246-希尔排序)
            * [2.4.7 堆排序](#247-堆排序)
         * [2.5 其它类型编程题](#25-其它类型编程题)
            * [2.5.1 如何判断机器是大端还是小端](#251-如何判断机器是大端还是小端)
## 1 常识概念题
### 1.1 C/C++基础
#### 1.1.1 面向对象的三大特点
* **封装**
把数据和成员函数封装到一起形成一个类，隐藏类内部的实现细节，把不想告诉别人的东西隐藏起来，可以告诉别人的东西公开，增加安全性。

* **继承**
从已有的类中派生出新的类称为子类，子类继承父类的成员，并能根据自己的需求扩展出新的行为，提高了代码的复用性。

* **多态**
同一种事物所表现出的多种形态，简单地说是“一个接头，多种实现”。
有两种类型的多态： 
编译时的多态，编译时的多态性是通过重载来实现的； 
运行时的多态，运行时的多态性是通过虚函数实现的，比如使用父类的指针调用子类的方法。

#### 1.1.2 结构体和类的区别
struct默认访问控制符是public，而class是private。

#### 1.1.3 空类占多少个字节
1个字节，没有数据成员的类叫空类。

#### 1.1.4 引用占用内存空间吗
不占。

#### 1.1.5 公有继承和私有继承的区别
|继承方式|父类的public成员|父类的protected成员|父类的private成员|
|:-:|:-:|:-:|:-:|
|public继承|还是public成员|变为protected成员|不可见|
|protected继承|变成protected成员|还是protected成员|不可见|
|private继承|变为private成员|变成private成员|不可见|

#### 1.1.6 虚析构函数的作用
父类的指针指向子类的对象，销毁时普通析构函数仅调用父类的析构函数，可能造成内存泄漏。

#### 1.1.7 C++强制类型转换有哪些
* static_cast：类似类型转换，比如double转int。
* dynamic_cast：父类强制转成子类。
* const_cast：const转成非const，反之亦可。
* reinterpret_cast：非常危险的转换，整型直接转指针。

#### 1.1.8 重写(覆盖)和隐藏的区别
重写是子类重写父类的虚函数，隐藏是子类和父类的普通函数名相同。

#### 1.1.9 深拷贝和浅拷贝
浅拷贝是将对象中的数据直接拷贝到另一个对象中，深拷贝会将对象中指针所指向的内存也一起拷贝。如果对象中有指针，浅拷贝会导致新旧对象中的指针指向同一块内存，可能造成delete两次出错。

#### 1.1.10 标准模板库的vector是否能当作栈
可以。

#### 1.1.11 指针和引用的区别

1. 指针是存放变量地址的一个变量，而引用只是某块内存的别名；
2. 引用在定义的时候必须初始化，之后不能改变，而指针可以不初始化，也可以改变；
3. 有空指针，但是没有空引用；
4. 有指针数组，但是没有引用数组；有指针的指针，但是没有引用的引用；
5. sizeof指针等于4(32位)或者8(64位机器)，sizeof引用等于所指变量的大小，但是当引用作为成员时，占用空间和指针一样。

#### 1.1.12 C++空类默认成员函数

```c++
class A
{
public:
    A();						//默认构造函数
    A(const A&);				//拷贝构造函数
    ~A();						//析构函数
    A& operator=(const A&);		//默认赋值运算符
    A& operator&();				//默认取地址运算符
    const A* operator&() const;	//取地址运算符const
};
```

#### 1.1.13 内联函数和宏定义的区别

1. 宏定义在预编译阶段进行代码替换，而内联函数在编译阶段插入代码；
2. 宏定义没有类型检查，而内联函数有类型检查。

#### 1.1.14 构造函数可以是虚函数吗

不可以，首先编译不通过，另外虚函数表指针是在构造函数之后创建的，所以构造函数不可能是虚函数。

### 1.2 数据库

#### 1.2.1 关系数据库和文件数据库的区别

1. 关系数据库特征是数据的结构化，而文件数据库是数据的非结构化；
2. 关系数据库中用户看到的逻辑结构是二维表，而文件数据库基本元素是文件；
3. 文件数据库可以实现多媒体文件管理，支持C/S。



#### 1.2.2 内连接和外连接区别

内连接也称为自然连接，显示两个表相匹配的行，舍弃不匹配的数据；外连接又分为左外连接、右外连接、全连接，只限制其中一个表的行，而不限制另一个表的行。

例如下面有两个表，学生表和课程表：

| 学号 | 姓名 |
| :--: | :--: |
| 0001 | 张三 |
| 0002 | 李四 |
| 0003 | 王五 |

| 学号 |  课程  |
| :--: | :----: |
| 0001 |  语文  |
| 0002 |  数学  |
| 0003 |  英语  |
| 0004 | 计算机 |

两个表内连接结果如下：

| 学号 | 姓名 | 课程 |
| :--: | :--: | :--: |
| 0001 | 张三 | 语文 |
| 0002 | 李四 | 数学 |
| 0003 | 王五 | 英语 |

两个表左外连接结果如下：

| 学号 | 姓名 | 课程 |
| :--: | :--: | :--: |
| 0001 | 张三 | 语文 |
| 0002 | 李四 | 数学 |
| 0003 | 王五 | 英语 |
| 0004 | | 计算机 |

#### 1.2.3 什么是事务

事务是一个单独的执行单元，要么成功，要么失败，执行成功数据便会提交，失败则回滚。

事务具有四个特性，称为ACID：原子性(Atomicity)、一致性(Correspondence)、隔离性(Isolation)、持久性(Durability)。

#### 1.2.4 什么是主键？什么是外键？

主键是一个或多个字段，是表中记录的唯一标识符，主键不能为空，一个表中只能有一个主键。

外键表示的是两个表之间的联系，如果表A和表B都有字段X，X是表A的主键，那么X称为B的外键，外键可以为空，一个表可以有多个外键。

#### 1.2.5 什么是视图

视图是一张虚表，从基本表中选取出来的数据组成的一张表。视图的作用如下：

1. 简化数据查询语句
2. 提高数据的安全性
3. 逻辑独立性



### 1.3 网络知识

#### 1.3.1 TCP三次握手和四次挥手

```sequence
title: 三次握手
participant 客户端 as c
participant 服务器 as s
Note right of s: 大写单词表示标志位，小写单词表示序号
c->s: SYN=1 seq=X	
s->c: SYN=1 ACK=1 ack=X+1 seq=Y
c->s: ACK=1 ack=Y+1 seq=X+1
```

```sequence
title: 四次挥手
participant 客户端 as c
participant 服务器 as s
c->s: FIN=1 seq=X	
s->c: ACK=1 seq=Y ack=X+1
s->c: FIN=1 ACK=1 seq=Z ack=X+1
c->s: ACK=1 seq=X+1 ack=Z+1
```

#### 1.3.2 socket编程流程

```mermaid
graph TB
服务器-->调用socket函数创建套接字
调用socket函数创建套接字-->调用bind函数绑定ip地址和端口号
调用bind函数绑定ip地址和端口号-->调用listen函数开始侦听
调用listen函数开始侦听-->调用accept函数接收连接
调用accept函数接收连接-->调用recv/send开始读写数据
调用recv/send开始读写数据-->调用close函数关闭连接
客户端-->同样调用socket函数创建套接字
同样调用socket函数创建套接字-->调用connect函数连接服务器
调用connect函数连接服务器-->调用recv/send或者read/write开始读写数据
调用recv/send或者read/write开始读写数据-->调用close函数关闭套接字
```



### 1.4 操作系统

#### 1.4.1 进程和线程的区别

1. 进程是资源分配的基本单位，线程是CPU调度的基本单位；
2. 一个进程可以包含多个线程，但是一个线程只能属于一个进程；
3. 每个进程有自己独立的内存空间，创建和进程间切换开销大，而同属一个进程的所有线程共享进程的内存空间，所以创建和线程间切换开销小；
4. 多进程比多线程更健壮，多线程程序只要有一个线程挂了，那么整个进程就挂了；
5. 进程间通信麻烦（消息队列、管道、共享内存、信号量），线程间通信方便，使用全局变量就行了。

#### 1.4.2 死锁形成的原因

1. 互斥锁使用不当，一个线程得到锁而不释放就会造成死锁；
2. 系统资源不足，多个进程共享同一块资源，这些资源同一时刻只能被一个进程使用，此时就会出现多个进程抢夺资源造成死锁；
3. 进程运行顺序不当，比如两个进程P1和P2，它俩必须同时拥有资源R1和R2时才能正常运行，如果P1占着R1，P2占着R2，此时就会死锁。

## 2 编程题

### 2.1 数组相关操作

#### 2.1.1 用递归算法实现数组求和
```c
int sum(int* a, int n)
{
	return n == 0 ? 0 : sum(a, n - 1) + a[n - 1];
}
```

#### 2.1.2 用递归算法判断数组是否是递增

```c
bool isIncrease(int* a, int n)
{
	if (n == 1)
		return true;
	return (a[n - 1] >= a[n - 2]) && isIncrease(a, n - 1);
}
```

#### 2.1.3 用递归算法实现二分查找

```c
int halfSearch(int* a, int key, int start, int end)
{
	printf("%d, %d\n", start, end);
	if (a == NULL || start > end)
		return -1;

	int mid = start + (end - start) / 2;
	if (a[mid] == key)
		return mid;
	else if(a[mid] > key)
		return halfSearch(a, key, start, mid - 1);
	else
		return halfSearch(a, key, mid + 1, end);
}
```

#### 2.1.4 找出数组中重复次数最多的数字

方法一：

```c
int mostNum(int* a, int size)
{
	int count[100] = { 0 };
	int tmp = 0;

	for (int i = 0; i < size; i++)
	{
		count[a[i]]++;
	}

	tmp = count[0];
	for (int i = 1; i < 100; i++)
	{
		if (tmp < count[i])
		{
			tmp = count[i];
		}
	}

	return tmp;
}
```

方法二(C++)：

```c++
int mostNum(int* a, int size)
{
	int tmp = 0;
	map<int, int> m;

	for (int i = 0; i < size; i++)
	{
		if (++m[a[i]] >= m[tmp])
		{
			tmp = a[i];
		}
	}

	return tmp;
}
```

#### 2.1.5 删除数组中重复的元素

```c++
int deleteRepeat(int* a, int size)
{
	if (a == NULL || size <= 0)
		return false;

	int j = 0;

	for (int i = 1; i < size; i++)
	{
		if (a[j] != a[i])
		{
			a[j + 1] = a[i];
			j++;
		}
	}

	return j+1;
}
```

#### 2.1.6 找出数组中第二大的数

```c
int secondMax(int* a, int size)
{
	int max = 0;
	int sec = 0;

	for (int i = 0; i < size; i++)
	{
		if (max < a[i])
		{
			sec = max;
			max = a[i];
		}
		else if(max == a[i])
		{
			continue;
		}
		else
		{
			if (sec < a[i])
				sec = a[i];
		}
	}

	return sec;
}
```

#### 2.1.7 数组左移和右移

```c
//左移
void lmove(int* a, int len, int offset)
{
	int b[10] = { 0 };

	//backup
	memmove(b, a, sizeof(a[0]) * len);

	for (int i = 0; i < len; i++)
	{
		if (i < len-offset)
			a[i] = b[i+offset];
		else
			a[i] = b[i+offset-len];
	}
}

//右移
void rmove(int* a, int len, int offset)
{
	int b[10] = { 0 };

	//backup
	memmove(b, a, sizeof(a[0]) * len);

	for (int i = 0; i < len; i++)
	{
		if (i < offset)
			a[i] = b[len + i - offset];
		else
			a[i] = b[i - offset];
	}
}
```

#### 2.1.8 数组中有一个元素只出现一次，其它元素出现两次

```c
int findOnlyOne(int* a, int len)
{
	int ret = a[0];
	for (int i = 1; i < len; i++)
	{
		ret ^= a[i];
	}

	return ret;
}
```

#### 2.1.9  一次遍历寻找链表的倒数某个节点

```c
/* 一次遍历寻找链表的倒数某个节点 */
List *backward(List *phead, int pos)
{
    List *p1, *p2;
    p1 = p2 = phead;

    for(int i = 0; i < pos; i++)
    {   
        p1 = p1->next;
    }   

    while(p1 != NULL)
    {   
        p1 = p1->next;
        p2 = p2->next;
    }   

    return p2; 
}
```
### 2.2 链表相关操作
#### 2.2.1 单链表反转

```c
List* reverse_list(List *list)
{
    if(list == NULL || list->next == NULL)
    {   
        return list;
    }   

    List* pPrev = list;
    List* pCur = list->next;
    List* pNext = NULL;
    list->next = NULL;

    while(pCur)
    {   
        pNext = pCur->next;
        pCur->next = pPrev;
        pPrev = pCur;
        pCur = pNext;
    }   
    list = pPrev;

    return list;
}
```

#### 2.2.2 逆序输出

```c
/* 逆序输出 */
void reverse_print(List *list)
{
    if(list != NULL)
    {   
        reverse_print(list->next);
        printf("name = %s, age = %d\n", list->data.name, list->data.age);
    }   
}
```

### 2.3 字符串相关操作
详见string目录下面的代码。

#### 2.3.1 统计一行字符串有多少个单词
详见string/word_in_string.c
```c
int word_in_string(const char *str)
{
    int count = 0;
    int isWord = 0;
    int i = 0;
    char c = 0;

    for(i = 0; (c = str[i]) != '\0'; i++)
    {   
        if(c == ' ')
        {   
            isWord = 0;
        }   
        else if(isWord == 0)
        {   
            isWord = 1;
            count++;
        }   
    }   
    
    return count;
}
```

#### 2.3.2 字符串逆序
详见string/reverse_string.c，要求不允许创建新的字符数组, 直接原地逆转。
方法一
```c
char *reverse_string1(char *str)
{
    char *p = str;
    char *q = str;

    while(*q)
    {   
        q++;    
    }   
    q--;

    while(q > p)
    {   
        char tmp = *p; 
        *p++ = *q; 
        *q-- = tmp;
    }   

    return str;
}
```

方法二
```c
char *reverse_string2(char *str, int left, int right)
{
    while(left < right)
    {   
        char tmp = str[left];
        str[left++] = str[right];
        str[right--] = tmp;
    }   

    return str;
}
```
#### 2.3.3 实现strlen
详见string/mystrlen.c，要求不能定义局部变量。
```c
int my_strlen(const char *str)
{
    return *str ? my_strlen(str + 1) + 1: 0;
}
```
#### 2.3.4 找出字符串中第一个只出现一次的字符
详见string/unique_string.cpp。
```cpp
char getUniqueChar(char *str)
{
    map<char, int> m;
    for(char *p = str; *p != '\0'; p++)
    {   
        m[*p]++;
    }   

    map<char, int>::iterator iter = m.begin();
    for(; iter != m.end(); iter++)
    {   
        if((*iter).second == 1)
        {   
            return (*iter).first;
        }   
    }   

    return 0;
}
```

#### 2.3.5 输出字符串中每个字符出现的次数
详见count_string.c
```c
void printCountString(char *str)
{
	int count[256] = {0};
	for(char *p = str; *p; p++)
	{
		count[*p]++;
	}

	for(int i = 0; i < 256; i++)
	{
		if(count[i] > 0)
		{
			printf("The count of %c is: %d\n", i, count[i]);
		}
	}
}
```
#### 2.3.6 输出字符串所有字符的组合

- [ ] 该题目未完成

有一个集合A = {a,b,c,d,e,f,g}，要求从这个集合中仍取n个元素(n>=1 n<=7);

打印所有可能出现的组合！
      n=1  a, b, c, d, e, f, g
      n=2  ab, bc, ac, ae, fg,......
      n=3  abc,abd,abe,........  

#### 2.3.7 实现C++ string类

代码如下，详见string/mystring.cpp。

```c++
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
```



### 2.4 排序算法

| 排序算法 | 最好时间复杂度 | 最坏时间复杂度 | 平均时间复杂度 | 空间复杂度 | 稳定性 |       备注       |
| :------: | :------------: | :------------: | :------------: | :--------: | :----: | :--------------: |
| 选择排序 |   O($$n^2$$)   |   O($$n^2$$)   |   O($$n^2$$)   |    O(1)    | 不稳定 |    n小时较好     |
| 插入排序 |      O(n)      |   O($$n^2$$)   |   O($$n^2$$)   |    O(1)    |  稳定  | 大部分有序时较好 |
| 冒泡排序 |      O(n)      |   O($$n^2$$)   |   O($$n^2$$)   |    O(1)    |  稳定  |    n小时较好     |
| 归并排序 |    O($$nlog_2n$$)    |   O($$nlog_2n$$)   |    O($$nlog_2n$$)   |    O(n)    |  稳定  |    n大时较好     |
| 快速排序 |    O($$nlog_2n$$)  |  O($$n^2$$) | O($$nlog_2n$$) | O($$log_2n$$) | 不稳定 | n大时较好 |
| 希尔排序 | O(n) |  O($$n^s$$) 1<s<2 |  O($$nlog_2n$$)   | O(1) | 不稳定 | s是所选分组 |
| 堆排序 |     O($$nlog_2n$$)           |      O($$nlog_2n$$)          |        O($$nlog_2n$$)        | O(1) | 不稳定 | n大时较好 |



#### 2.4.1 选择排序
第一轮排序将最小的数放在a[0]，第二轮排序将剩余数中最小的数放在a[1]...

以数组{38, 65, 97, 76, 13, 27, 49}为例：

第一轮排序：13 [65 97 76 38 27 49] 

第二轮排序：13 27 [97 76 38 65 49] 

第三轮排序：13 27 38 [76 97 65 49]

第四轮排序：13 27 38 49 [97 65 76] 

第五轮排序：13 27 38 49 65 [97 76] 

第六轮排序：13 27 38 49 65 76 [97]

代码如下，详见sort/select_sort.c。

```c
void selectSort(int *a, int len)
{
    int i = 0;
    int j = 0;
    int min = 0;    //每一轮排序最小数的下标
    int tmp = 0;

    for(i = 0; i < len - 1; i++)
    {   
        min = i;
        for(j = i + 1; j < len; j++)
        {   
            if(a[min] > a[j])   
            {   
                min = j;
            }   
        }   
        if(min != i)
        {   
            tmp = a[min];
            a[min] = a[i];
            a[i] = tmp;
        }  
    }   
}
```

#### 2.4.2 插入排序

第一步取第一个数放在首位，第二步取第二个数和第一个数比较，小则插入第一个数前面，此时第一个数和第二个数变成了一个有序序列，第三步取第三个数插入有序序列的合适位置，并组成一个新的有序序列，以此类推。

以数组{38, 65, 97, 76, 13, 27, 49}为例：

第一趟排序：[38 65] 97 76 13 27 49 

第二趟排序：[38 65 97] 76 13 27 49 

第三趟排序：[38 65 76 97] 13 27 49 

第四趟排序：[13 38 65 76 97] 27 49 

第五趟排序：[13 27 38 65 76 97] 49 

第六趟排序：[13 27 38 49 65 76 97]

代码如下，详见sort/insert_sort.c。

```c
void insertSort(int *a, int len)
{
    int i = 0;
    int j = 0;
    int tmp = 0;

    for(i = 1; i < len; i++)
    {   
        tmp = a[i];
        for(j = i - 1; j >= 0; j--)
        {   
            if(tmp < a[j])
            {   
                a[j+1] = a[j];
            }   
            else
            {   
                break;
            }   
        }   
        a[j+1] = tmp;
    }   
}
```

#### 2.4.3 冒泡排序

第一趟排序将最大的数放在最后的位置，第二趟排序将第二大的数放在倒数第二的位置，以此类推...

以数组{65, 38, 97, 76, 13, 27, 49}为例：

第一趟排序：38 65 76 13 27 49 [97]

第二趟排序：38 65 13 27 49 [76 97] 

第三趟排序：38 13 27 49 [65 76 97] 

第四趟排序：13 27 38 [49 65 76 97] 

第五趟排序：13 27 [38 49 65 76 97] 

第六趟排序：13 [27 38 49 65 76 97]

代码如下，详见sort/bubble_sort.c。

```c
void bubbleSort(int *a, int len)
{
    int i = 0;
    int j = 0;
    int tmp = 0;
    int flag = 0;   //冒泡排序优化标志位

    for(i = 0; i < len - 1; i++)
    {   
        flag = 0;
        for(j = 0; j < len - i - 1; j++)
        {   
            if(a[j] > a[j + 1]) 
            {   
                tmp = a[j];
                a[j] = a[j + 1]; 
                a[j + 1] = tmp;

                flag = 1;
            }   
        }   

        if(flag == 0)
            break;
}
```

#### 2.4.4 归并排序

第一步不停地划分子表（划分至每个子表两个元素），第二步不停地合并子表至完整地表。

以数组{49, 38, 65, 97, 76, 13, 27}为例：

第一次划归并后：[38 49] [65 97] [13 76] [27]

第二次划归并后：[38 49 65 97] [13 27 76]

第三次划归并后：[13 27 38 49 65 76 97]

代码如下，详见sort/merge_sort.c。

```c
void merge(int *a, int begin1, int end1, int begin2, int end2, int *tmp)
{
	int index = begin1;
	int i = begin1, j = begin2;

	//注意:当划分的区间足够小时,begin1==end1,begin2==end2
	while (i <= end1&&j <= end2){
		if (a[i]<=a[j])
			tmp[index++] = a[i++];
		else
			tmp[index++] = a[j++];
	}
	//将左边元素填充到tmp中
	while (i <= end1)
		tmp[index++] = a[i++];
	//将右边元素填充的tmp中
	while (j <= end2)
		tmp[index++] = a[j++];
	//将tmp中的数据拷贝到原数组对应的序列区间
	//注意:end2-begin1+1
	memcpy(a + begin1, tmp + begin1, sizeof(int)*(end2 - begin1 + 1));
}

void mergeSort(int *a, int left, int right, int *tmp)
{
	if (left >= right)
		return;
	//mid将数组二分
	int mid = left + ((right - left) >> 1);
	//左边归并排序,使得左子序列有序
	mergeSort(a, left, mid, tmp);
	//右边归并排序,使得右子序列有序
	mergeSort(a, mid + 1, right, tmp);
	//将两个有序子数组合并
	merge(a, left, mid, mid + 1, right, tmp);
}
```



#### 2.4.5 快速排序

选择数组第一个元素作为关键字，比它小的放它左边，比它大的放它右边，再对左右两边的元素进行同样的操作。

以数组{65, 38, 97, 76, 13, 27, 49}为例：

第一次交换后：[49 38 27 13] 65 [76 97]

第二次交换后：[13 38 27] 49 65 [76] 97

第三次交换后：13 [38 27] 49 65 76 97

第四次交换后：13 [27] 38 49 65 76 97

代码如下，详见sort/quick_sort.c。

```c
void swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void quickSort(int *a, int low, int high)
{
	int i = low;
	int j = high;
	int key = a[low];

	if(low >= high)
		return;

	while(low < high)
	{
		while(low < high && key <= a[high])
		{
			high--;
		}
		if(key > a[high])
		{
			swap(&a[low], &a[high]);
			low++;
		}

		while(low < high && key >= a[low])
		{
			low++;
		}
		if(key < a[low])
		{
			swap(&a[low], &a[high]);
			high--;
		}
	}

	quickSort(a, i, low - 1);
	quickSort(a, low + 1, j);
}
```



#### 2.4.6 希尔排序

希尔排序是建立在插入排序的基础上的，如果数组有10个元素，先分成10/2=5个子序列，步进为5，那么1和6，2和7，3和8，4和9， 5和10各自成对，对这5个子序列进行插入排序；排完之后，再分成5/2=2个子序列，步进为2，并分别进行插入排序；最后分成2/2=1个子序列，步进为1，进行一次插入排序即可。

以数组{65, 38, 97, 76, 13, 27, 49, 18}为例：

步进8/2=4，第一次插入排序后：13 27 49 18 65 38 97 76

步进4/2=2，第二次插入排序后：13 18 49 27 65 38 97 76

步进2/2=1，第三次插入排序后：13 18 27 38 49 65 76 97

代码如下，详见sort/shell_sort.c。

```c
void shellSort(int *a, int len)
{
    int i = 0;
    int j = 0;
    int step = len/2;
    int tmp = 0;

    while(step >= 1)
    {   
        //插入排序
        for(i = step; i < len; i++)
        {   
            tmp = a[i]; //设置哨兵
            for(j = i - step; j >= 0; j -= step)
            {   
                if(tmp < a[j])
                {   
                    a[j+step] = a[j];
                }   
                else
                {   
                    break;
                }   
            }   
            a[j+step] = tmp;
        }   

        step /= 2;  //调整步进
    }   
}
```

#### 2.4.7 堆排序

堆排序也称为二叉树排序，需要用到完全二叉树（数组实现）的知识。将待排序序列构造成一个大顶堆，此时，整个序列的最大值就是堆顶的根节点，将其与末尾元素进行交换，此时末尾就为最大值；然后将剩余n-1个元素重新构造成一个大顶堆，这样会得到n个元素的次小值；如此反复执行，便能得到一个有序序列了。

**每个结点的值都大于或等于其左右孩子结点的值，称为大顶堆；而每个结点的值都小于或等于其左右孩子结点的值，称为小顶堆**

此种排序较难理解，请看[图解二叉树](https://www.cnblogs.com/chengxiao/p/6129630.html)。

代码如下，详见sort/heap_sort.c。

```c
void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

//调整大顶堆
void adjustMaxHeap(int *a, int pos, int len)
{
    int child = 0;
    int tmp = 0;

    for(tmp = a[pos]; 2 * pos + 1 <= len; pos = child)
    {   
        child = 2 * pos + 1;    //从pos结点的左孩子开始，即 pos * 2 + 1
        if(child  < len && a[child] < a[child + 1]) 
            child++;    //如果左孩子小于右孩子，child指向右孩子

        if(a[child] > tmp)
            a[pos] = a[child];  //如果子结点大于父结点，那么子结点赋值给父结点
        else
            break;
    }   
    a[pos] = tmp;   //将tmp放到最终的位置
}

//大顶堆排序
void maxHeapSort(int *a, int len)
{
    int i = 0;

    //1. 构建大顶堆
    for(i = len/2 - 1; i >= 0; i--)
    {   
        adjustMaxHeap(a, i, len - 1);   //从第一个非叶子结点从下至上，从右至左调整
    }   

    //2. 交换堆顶和末尾元素，并调整大顶堆
    for(i = len - 1; i > 0; i--)
    {   
        swap(&a[0], &a[i]); //交换堆顶和末尾元素
        adjustMaxHeap(a, 0, i - 1); //调整大顶堆
    }   
}
```

### 2.5 其它类型编程题

#### 2.5.1 如何判断机器是大端还是小端

大端：高字节存在低地址，低字节存在高地址；

小端：高字节存在高地址，低字节存在低地址。

代码如下，详见other/big_little_endian.c。

```c
#include <stdio.h>

union un
{
	char ch;
	int data;
};

int main()
{
	union un u;
	u.data = 0x12345678;

	if(u.ch == 0x12)
	{
		printf("Big Endian!\n");
	}
	else if(u.ch == 0x78)
	{
		printf("Little Endian!\n");
	}
	else
	{
		printf("Unknown!\n");
	}

	return 0;
}
```

