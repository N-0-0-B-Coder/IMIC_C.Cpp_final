// C++ library
#include <iostream>

using namespace std;

// #define BAI_1 // Implementing the singled linked list class where each node's value as integer
// #define BAI_2 // Create a linked list based on BAI_1 implement with 10 nodes with random value in each node
// #define BAI_3 // Imaging linked list has loop, write a function to detect the loop
// #define BAI_4 // Define and Implement a singleton class with 3 attributes: id, name, age
#define BAI_5 // Implement a connection factory class that creates connection based on the connection type

#ifdef BAI_1
#include "BAI_1.hpp"
#endif

#ifdef BAI_2
#include "BAI_1.hpp"
#include "BAI_2.hpp"
#endif

#ifdef BAI_3
#include "BAI_1.hpp"
#include "BAI_3.hpp"
#endif

#ifdef BAI_4
#include "BAI_4.hpp"
#endif

#ifdef BAI_5
#include "BAI_5.hpp"
#endif

void checkRunning(int result) {
    if (result == 1) {
        cout << "Run successful" << endl;
    }
    else {
        cout << "Has error" << endl;
    }
}

int main(void) {

#ifdef BAI_2
    LinkedList list;
    int result2 = bai2(&list);
    checkRunning(result2);
#endif

#ifdef BAI_3
    LinkedList list2;
    LinkedList list3;
    int result3 = bai3(&list2, &list3);
    checkRunning(result3);
#endif

#ifdef BAI_4
    /*
    Singleton pattern la phuong phap tao class chi cho phep tao ra 1 object duy nhat.
    Method/operator tao object khac se bi xoa bo khi khoi tao class.
    Tat ca cac object khac duoc tao ra deu se la object dau tien.
    Class Singleton van co the khai bao nhu mot bien toan cuc nhung phai su dung method de co the truy cap vao gia tri.
    */
    Author *a = Author::getObject();
    Author *b = Author::getObject();
    int result4 = bai4(*a, *b);
    checkRunning(result4);
#endif

#ifdef BAI_5
    /*
    Factory pattern cung cap mot phuong thuc de tao ra cac doi tuong trong lop cha,
    nhung khong can chi tiet cua cac lop con.
    Factory pattern cung cap mot cach de thay doi cac lop con ma khong can thay doi lop cha.
    Factory pattern duoc su dung khi viec khai bao kieu object duoc xac dinh trong qua trinh chuong trinh chay.
    Co the them hoac xoa cac class con ma khong lam anh huong toi lop cha hoac cac class con khac.
    Factory pattern dong goi phuong thuc tao object trong qua trinh chay.
    Nguoi su dung khong can biet chi tiet ve cach tao tung object trong qua trinh khai bao. Chi can goi phuong thuc tao object.
    */
    int result5 = bai5();
    checkRunning(result5);
#endif

    return 1;
}