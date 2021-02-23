#include <bits/stdc++.h>

void ptr_by_value(int *p) {
    // delete p; persists if we delete pointer first and allocate memory.
    //what this means is that if we want to add some memory to the pointer we are out of luck.
    //but we can change the address the pointer is pointing to by first deallocating it and then allocating it again.
    //this is good when we want to change the pointer completely but it is not ideal in the case when we want to add
    //or delete certain chunks of memory that we want.
    //we can either delete the whole thing or not persist any changes at all.
    // that is why we have to pass the pointer by pointer or by reference which modifies the actual pointer and not a copy
    // of the passed pointer.
    //I now remember how many times I have cursed the C++ memory management due to not being able to modify a pointer
    //outside the scope of its declaration and I am so happy that I finally came to know that it is certainly possible and
    //it was all along my fault in not realizing the obvious.
    p = new int{40};
    //does not persist.
}
//I could not write some words while writing this program because the 'h' on the keyboard stopped working all of a sudden
//Fortunately it started working again as soon as I put it through a restart of the whole laptop.

void ptr_by_ptr(int **p) {
    delete *p;
    *p = new int{54};
    //does persist.
}

void ptr_by_ref(int* &p) {
    delete p;
    p = new int{69};
    //does persist and is easier to use.
}

int main() {
    int *ptr = new int {20};
    std::cout << "default value : " << *ptr << '\n';
    ptr_by_value(ptr);
    std::cout << "after passing pointer by value : " << *ptr << '\n';
    ptr_by_ptr(&ptr);
    std::cout << "after passing pointer by pointer : " << *ptr << '\n';
    ptr_by_ref(ptr);
    std::cout << "after passing pointer by reference : " << *ptr << '\n';
    delete ptr;

    return 0;
}