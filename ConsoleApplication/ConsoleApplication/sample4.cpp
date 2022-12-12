
#include "pch.h"
#include "sample4.h"
#include<memory>
#include<iostream>

/*
std::unique_ptr
 C++ Utilities library Dynamic memory management std::unique_ptr
Defined in header <memory>
template<
    class T,
    class Deleter = std::default_delete<T>
> class unique_ptr;
(1)	(since C++11)
template <
    class T,
    class Deleter
> class unique_ptr<T[], Deleter>;
(2)	(since C++11)
std::unique_ptr is a smart pointer that owns and manages another object through a pointer and disposes of that object when the unique_ptr goes out of scope.

The object is disposed of, using the associated deleter when either of the following happens:

the managing unique_ptr object is destroyed
the managing unique_ptr object is assigned another pointer via operator= or reset().
The object is disposed of, using a potentially user-supplied deleter by calling get_deleter()(ptr). The default deleter uses the delete operator, which destroys the object and deallocates the memory.

A unique_ptr may alternatively own no object, in which case it is called empty.

There are two versions of std::unique_ptr:

Manages a single object (e.g. allocated with new)
Manages a dynamically-allocated array of objects (e.g. allocated with new[])
The class satisfies the requirements of MoveConstructible and MoveAssignable, but of neither CopyConstructible nor CopyAssignable.

Type requirements
-Deleter must be FunctionObject or lvalue reference to a FunctionObject or lvalue reference to function, callable with an argument of type unique_ptr<T, Deleter>::pointer
*/
void funcTestSample4_0()
{
    //唯一对象拥有所有权，一旦失去所有权，将释放指针
    std::unique_ptr<int > _p1(new int);
    std::cout << "_p1 " << _p1 << std::endl;
    *_p1 = 12;

    std::unique_ptr <int >_p2(new int);
    std::cout << "_p2 " << _p2 << std::endl;
    *_p2 = 13;

    _p2 = std::move(_p1);//转移，转移之后_p2构造时新分配的地址就会被释放，_p1也被释放

    std::cout << _p1 <<"," << _p2 << std::endl;
}