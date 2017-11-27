#include <iostream>
#include <limits>

using namespace std;

int main() {
  // เขียนโปรแกรมเพิ่ม เพื่อหาขนาดตัวแปรที่กำหนด
   cout << "Size of char : " << sizeof(char) << endl;
   cout << "Size of short signed int : " << sizeof(short signed int) << endl;
   cout << "Size of short unsigned int : " << sizeof(short unsigned int) << endl;
   cout << "Size of long int : " << sizeof(long int) << endl;
   cout << "Size of float : " << sizeof(float) << endl;

   cout << "Size of char : " << sizeof(char) << endl;
   cout << "Size of signed char : " << sizeof(signed char) << endl;
   cout << "Size of unsigned char : " << sizeof(unsigned char) << endl;
   cout << "Size of int : " << sizeof(int) << endl;
   cout << "Size of signed int : " << sizeof(signed int) << endl;
   cout << "Size of unsigned int : " << sizeof(unsigned int) << endl;
   cout << "Size of short int : " << sizeof(short int) << endl;
   cout << "Size of signed short int : " << sizeof(signed short int) << endl;
   cout << "Size of unsigned short int : " << sizeof(unsigned short int) << endl;
   cout << "Size of long int : " << sizeof(long int) << endl;
   cout << "Size of signed long int : " << sizeof(signed long int) << endl;
   cout << "Size of unsigned long int : " << sizeof(unsigned long int) << endl;
   cout << "Size of float : " << sizeof(float) << endl;
   cout << "Size of double : " << sizeof(double) << endl;
   cout << "Size of long double : " << sizeof(long double) << endl;
   cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
   cout << "Size of bool : " << sizeof(bool) << endl;



   // เขียนโปรแกรมเพิ่มเพื่อหาช่วงของค่าที่เก็บได้
   cout << "Min of char : " << numeric_limits<char>::min() << endl;
   cout << "Max of char : " << numeric_limits<char>::max() << endl;

   cout << "Min of short int : " << numeric_limits<short int>::min() << endl;
   cout << "Max of short int : " << numeric_limits<short int>::max() << endl;


  return 0;
}
