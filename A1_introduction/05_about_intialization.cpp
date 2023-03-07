#include<iostream>
using namespace std;
int main(){
    
    int a;  // no initializer (default initialization)
    int b = 5; // initializer after equals sign (copy initialization)
    int c(6); // initializer in parenthesis (direct initialization)

    // List initialization methods (c+11) -> list initialization (also called uniform initialization or brace initialization).

    int d{ 7 }; // initializer in braces (direct list initialization)  -> direct list initialization of value 7 into variable d (preferred)
    int e = { 8 }; // initalizer in braces after equals sign (copy list intiailization)
    int f {}; // intializer is empty braces (value initialization)
}