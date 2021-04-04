#include<iostream>
using namespace std;

int main()
{
     int* p = new int;
 int* p2 = p;
 *p = 10;
 delete p;
 // loi o day  vi do da xoa mat dia chi cua p lam cho p2 khong co noi de tro toi
*p2 = 100;
 cout << *p2;
 delete p2;

}
