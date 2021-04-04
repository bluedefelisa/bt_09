#include<iostream>

using namespace std;

int main()
{
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p;// dong gay loi
    //do con tro tro vao vung nho da bi thu hoi
    *p2 = 100;
    cout << *p2;
    delete p2;

}

