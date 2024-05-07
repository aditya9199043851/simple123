//
//  main.cpp
//  starting
//
//  Created by Apple on 07/05/24.
//
#include<iostream>
using namespace std;
class complex
{
    private:
    int a,b;
    public:
    complex() {a=0; b=0;}
    complex(int x,int y) {a=x; b=0;}
    complex(int x) {a=x; b=0;}
    void setData(int x,int y)
    
    {
        a=x;
        b=y;
    }
  
    void showData()
    {
        cout<<"a="<<a<<"b="<<b<<endl;
    }
    
complex add(complex C)
{
    complex temp;
    temp.a=a+C.a;
    temp.b=a+C.b;
    return temp;
}

};
int main()
{
    complex c1(3,4),c2(0,0),c3(1,-2),c4;
    c1.showData();
    c2.showData();
    c3.showData();
    cout<<endl;
    return 0;

}
