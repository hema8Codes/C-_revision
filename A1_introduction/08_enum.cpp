/**
 * -> Enumeration in C++
 *  - Enumeration (Enumerated type) is a user-defined data type that can be assigned some limited values.
 *  - These values are defined by the programmer at the time of declaring the enumerated type.
 *  - Enumerator types of values are also known as enumerators. It is also assigned by zero the same as the array.
 *  - By default, the starting code value of the first element of the enum is 0 (as in the case of the array). But it can be changed explicitly.
 */

#include<iostream>
using namespace std;

int main(){
    enum Gender {Male, Female};
    Gender gen = Male;
    switch(gen){
        case Male:
            cout<<"Gender is Male";
            break;
        case Female:
            cout<<"Gender is Female";
            break;
        default:
            cout<<"Value can be Male or Female";
    }
    return 0;
}
