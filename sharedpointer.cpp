#include <iostream>
#include <memory> 

using namespace std;

class A {
    
    int m;
    public:
    A(int i):m(i){}
};


int main()
{
    cout<<"shared pointer";
    
    shared_ptr<A> sp1 (new A{5});
    
    auto sp2 = sp1;
    
    cout << "count" << sp1.use_count() << endl;
    
    auto sp3 = sp1;
    
    cout << "count" << sp1.use_count() << endl;
    
    sp2.reset();
    
    cout << "count" << sp1.use_count() << endl;
    
    return 0;
}
