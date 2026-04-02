#include <iostream>

class Base
{
public:
    virtual ~Base();
    Base *generate(void);
};
Base *Base::generate(void)
{
}
class A : public Base
{
};
class B : public Base
{
};
class C : public Base
{
};
int main()
{
}