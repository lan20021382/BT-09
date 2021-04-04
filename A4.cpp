#include<iostream>
using namespace std;

int main()
{
    int a=68;
    int *ptr = &a;
    delete ptr;
    cout << ptr;
    return 0;
    //chương trình lỗi do khai báo y không có toán tử new
}
