# C/C++面试宝典

## **1. 常识概念题**
### 1.1 面向对象的三大特点

* **封装**
> 把数据和成员函数封装到一起形成一个类，隐藏类内部的实现细节，把不想告诉别人的东西隐藏起来，可以告诉别人的东西公开，增加安全性。

* **继承**
> 从已有的类中派生出新的类称为子类，子类继承父类的成员，并能根据自己的需求扩展出新的行为，提高了代码的复用性。

* **多态**
> 同一种事物所表现出的多种形态，简单地说是”一个接口，多种实现“ 
有两种类型的多态性： 
编译时的多态性，编译时的多态性是通过重载来实现的； 
运行时的多态性，运行时的多态性是通过虚函数实现的，比如使用父类的指针调用子类的方法。

### 1.2 结构体和类的区别
> struct默认访问控制符是public，而class是private。

### 1.3 空类占多少个字节
> 1个字节，没有数据成员的类叫空类。

### 1.4 引用占用内存空间吗
> 不占。

### 1.5 公有继承和私有继承的区别
|继承方式|父类的public成员|父类的protected成员|父类的private成员|
|:-:|:-:|:-:|:-:|
|public继承|还是public成员|变为protected成员|不可见|
|protected继承|变成protected成员|还是protected成员|不可见|
|private继承|变为private成员|变成private成员|不可见|

### 1.6 虚析构函数的作用
> 父类的指针指向子类的对象，销毁时普通析构函数仅调用父类的析构函数，可能造成内存泄漏。

### 1.7 C++强制类型转换有哪些
* static_cast：类似类型转换，比如double转int。
* dynamic_cast：父类强制转成子类。
* const_cast：const转成非const，反之亦可。
* reinterpret_cast：非常危险的转换，整型直接转指针。

### 1.8 重写(覆盖)和隐藏的区别
> 重写是子类重写父类的虚函数，隐藏是子类和父类的普通函数名相同。

### 1.9 深拷贝和浅拷贝
> 浅拷贝是将对象中的数据直接拷贝到另一个对象中，深拷贝会将对象中指针所指向的内存也一起拷贝。如果对象中有指针，浅拷贝会导致新旧对象中的指针指向同一块内存，可能造成delete两次出错。

### 1.10 标准模板库的vector是否能当作栈
> 可以。

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
