#include <iostream>
using namespace std;
int main()
{
    cout << "bai tap con tro";
      //Dấu * thể hiện ptr là con trỏ
    int *ptr; // con trỏ kiểu int
    //Dấu * có thể đặt cạnh tên biến hoặc cạnh kiểu dữ liệu
    long long* ptr2; // con trỏ kiểu long long
    char *ptr3;

        int N = 28;
    long long M = 10000012828;
    cout << "Dia chi cua N trong bo nho : " << &N << endl;
    cout << "Dia chi cua M trong bo nho : " << &M << endl;
    return 0;

        int N = 1000;
    cout << "Dia chi cua N : " << &N << endl;
    int *ptr;
    //Gán địa chỉ của N cho ptr
    ptr = &N;
    cout << "Gia tri cua ptr : " << ptr << endl;
    return 0;

        int N = 1000;
    cout << "Dia chi cua N : " << &N << endl;
    int *ptr = &N; // ptr trỏ tới N
    cout << "Gia tri cua ptr : " << ptr << endl;
    //Toán tử giải tham chiếu
    cout << "Gia tri cua bien ma con tro ptr tro toi : " << *ptr << endl; 
    //Thay đổi N bằng ptr, *ptr và N là một
    *ptr = 280;
    cout << "Gia tri cua N sau thay doi : " << N << " " << *ptr << endl;
    return 0;
}