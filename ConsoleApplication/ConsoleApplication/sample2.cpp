/*
作者：perfectplug
时间：2019-4-19 10-45
功能：测试C++11 列表初始化
*/

#include "pch.h"
#include "sample1.h"
#include <iostream>
#include <algorithm>
#include <map>
#include <string>

class FOO
{
public:
	FOO(int) {};
	~FOO() {};
protected:
private:
};

void TestSample2_1()
{
	//C++11 整形数组初始化
	int iarray1[5]{ 1,2,3,4,5 };
	//C++11 整形初始化
	int i1{ 3 };
	//C++11 类初始化
	FOO foo1{ 123 };
}
