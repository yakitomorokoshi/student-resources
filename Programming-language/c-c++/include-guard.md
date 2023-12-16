# include guard

Một chương trình khi khai báo nhiều biến có tên trùng lặp hoặc nhiều hàm có tên trùng lặp
:
```c
int main(){

    int x; // this is a definition for variable x
    int x; // compile error: duplicate definition
 
    return 0;
}
```
or
```c
#include <iostream>
 
int foo(){ // this is a definition for function foo
    return 5;
}

int foo(){ // compile error: duplicate definition
    return 5;
}
 
int main(){
    std::cout << foo();
    return 0;
}
```
Mặc dù các chương trình này dễ sửa (loại bỏ định nghĩa trùng lặp), nhưng với các file header, khá dễ dẫn đến tình huống một định nghĩa trong file header được đưa vào nhiều lần. Điều này có thể xảy ra khi file header #include file header khác (điều này thường xảy ra). Vì vậy cơ chế ***include guard*** được đưa vào nhằm giải quyết vấn đề xung đột định nghĩa giữa các file header khi chương trình khởi chạy với chúng.

```c
#ifndef TOKEN
#define TOKEN

// definition

#endif
```