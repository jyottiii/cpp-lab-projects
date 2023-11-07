
#include<iostream>
using namespace std;

class cmplx{
    float r, i;
    public:

    cmplx(float j, float k){
        r = j;
        i = k;
    }

    cmplx(float j){
        r = j;
        i = 0;
    }

    cmplx(){}

    friend cmplx operator + (cmplx c, cmplx d){
        cmplx foo;
        foo.r=c.r+d.r;
        foo.i=c.i+d.i;
        return foo;
    }

    void disp(){
        cout<<r<<" + i("<<i<<")"<<endl;
    }
};

int main(){
    cmplx a(1,2), b(3,4), c;

    c = a+b;
    c.disp();
    c = c + 2;
    c.disp();
    c = 3 + a;
    c.disp();
}
