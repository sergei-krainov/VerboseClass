#include <iostream>

template<typename T>
void print(const T & in) {
    std::cout << in << std::endl;
}

struct A {
    A() {
        print("Default ctor");
    }

    A(const A &) {
        print("Copy ctor");
    }

    A operator=(const A &) {
        print("Copy assignment");
        return *this;
    }

    A(A &&) {
        print("Move ctor");
    }

    A operator=(A &&) {
        print("Move assignment");
        return *this;
    }

    ~A() {
        print("Destructor");
    }
};
