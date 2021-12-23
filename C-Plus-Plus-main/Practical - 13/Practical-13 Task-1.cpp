#include"iostream"
using namespace std;

class base {
    public:
    int add(int a,int b) { return (a + b); }
    float add(float a,float b,float c) { return (a + b + c); }
    int add(int a,float b) { return (a + b); }
};

class child:public base {
    public:
    int add(int a,int b) { return (a + b + 1); }
};

int main() {
child c;
cout<<c.add(1.1,1.2)<<endl;
cout<<c.add(1,2)<<endl;
cout<<c.add(1,1.6);
}
