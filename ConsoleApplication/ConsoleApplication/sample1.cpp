/*
作者：perfectplug
时间：2019-4-19 10-45
功能：测试C++11 类型重定义相关
*/

#include "pch.h"
#include "sample1.h"
#include <iostream>
#include <algorithm>
#include <map>
#include <string>

//C++98 类型重定义
typedef std::map<std::string, int> map_int_t;

//////////////////////////////////////////////////////////////////////////
//C++11 类型重定义(模板)
template <typename T>
using str_map_t = std::map<std::string, T>;

void TestSample1_1()
{
	str_map_t<int> str_map_int_t1;
	str_map_int_t1["test"] = 1;

}

//////////////////////////////////////////////////////////////////////////
//C++11 类型重定义（结构体）
using STRUCT_TEST=struct _struct_test 
{
	int iVersion;
	int iTest;
};

void TestSample1_2()
{
	STRUCT_TEST struct_test;
	struct_test.iTest = 1;
	struct_test.iVersion = 201;
}

//////////////////////////////////////////////////////////////////////////
//C++11 定义函数指针
using func_t = void(*)(int, int);

//C++11 定义函数指针模板
template<typename T>
using func_t_1 = void(*)(T, T);

void TestSample1_3()
{
	func_t_1<int> func_t_1_1;
	//func_t_1_1(1, 2);
}


