#include<iostream>
using namespace std;

int main()
{
     char* a = new char[10];
char* c = a + 3;
for (int i = 0; i < 9; i++) a[i] = 'a';
a[9] = '\0';
cerr <<"a: " << "-" << a << "-" << endl;
cerr <<"c: " << "-" << c << "-" << endl;
delete c;// loi khonng nen dung delete vi no lam that thoat bo  nho
cerr << "a after deleting c:" << "-" << a << "-" << endl;
// lenh cerr khong nhu mong doi vi no chi in ra a va c thoi
return 0;
}
