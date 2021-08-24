// CPP program to illustrate
// working of Virtual Functions and Static Function 
/* In the case of virtual function fun_2() is overided and the output will be derived-2*/
#include <iostream>
using namespace std;
// static function prefixed by static keyword....
static void func_0()
{
 cout << "static-0\n"; }
class base {
public:
    void fun_1() { cout << "base-1\n"; }
    virtual void fun_2() { cout << "base-2\n"; }
    virtual void fun_3() { cout << "base-3\n"; }
    virtual void fun_4() { cout << "base-4\n"; }
};
 
class derived : public base {
public:
    void fun_1() { cout << "derived-1\n"; }
    void fun_2() { cout << "derived-2\n"; }
    void fun_4(int x) { cout << "derived-4\n"; }
};
 
int main()
{
    base* p;
    derived obj1;
    p = &obj1;
 
    // Early binding because fun1() is non-virtual
    // in base
    //static function call
    func_0();
    p->fun_1();
 
    // Late binding (RTP)
    p->fun_2();
 
    // Late binding (RTP)
    p->fun_3();
 
    // Late binding (RTP)
    p->fun_4();
 
}
// Initially, we create a pointer of type base class and initialize it with the address of the derived class object.
// When we create an object of the derived class, the compiler creates a pointer as a data member of the class containing the address of VTABLE of the derived class.
