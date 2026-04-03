#include <iostream>
#include <cstdlib>
class Base
{
public:
    virtual ~Base(){};
    // Base *generate(void);
};

class A : public Base
{
};
class B : public Base
{
};
class C : public Base
{
};
Base * generate(void){
    int r = std::rand() % 3;
    if(r == 0) 
    {
        return new A;
    }
    if(r == 1)
    {
        return  new B;
    }
    return new C;
}
void identify(Base *prant)
{
    if(dynamic_cast<A*>(prant))
    {
        std::cout << "A" << std::endl;
    }else if(dynamic_cast<B*>(prant))
    {
        std::cout << "B" << std::endl;
    }else if(dynamic_cast<C*>(prant))
    {
        std::cout << "C" << std::endl;
    }
}
void identify(Base& p)
{
try
{
    (void)dynamic_cast<A&>(p);
     std::cout << "A" << std::endl;
    return;
}
catch(...){}
try
{
    (void)dynamic_cast<B&>(p); 
    std::cout << "B" << std::endl;
    return;
}
catch(...){}
try
{
    (void)dynamic_cast<C&>(p);
     std::cout << "C" << std::endl;
    return;
}
catch(...){}
}
int main()
{
    Base* opj = generate();
    std::cout << "identify Pointer " ;
     identify(opj);
     std::cout  << "identify Reference " ;
     identify(*opj);
     delete opj;
}