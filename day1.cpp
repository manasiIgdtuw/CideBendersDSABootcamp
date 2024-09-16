//basic structure 
#include<bits\stdc++.h> //compilation of all files 
// #include<iostream>
// #include<string>
using namespace std; // Use standard namespace to avoid typing 'std::' repeatedly


//An inline function is a function that is expanded in line when it is called, rather than being invoked through the usual function call mechanism. This can help reduce function call overhead 
//and improve performance, especially for small, frequently-called functions.

inline int sum(int x,int y){
    //cout<<x+y<<endl;//12
return x+y;
}

int main(){
    // cout<<"Hello World";
   
    //***variables
    // int x=10;
    // char c='b'-0;
    // cout<<x+c;

    
    //***input-output
    // int x;
    // cin>>x;
    // cout<<x*10;

    //***data types
    // int age;
    // bool isAdult;
    // cout<<"Enter age:";
    // cin>>age;
    // if(age<18){
    //     isAdult=false;
    // }
    // else isAdult=true;
    // cout<<"Is the person an adult?"<<" "<<isAdult;
    // float fl=0.45;
    // long long l=0LL;
    // int num = 10;      // Declare an integer variable
    // int *ptr = &num;   // Declare a pointer and assign it the address of 'num'  
    // // Output the value of 'num' and the pointer information
    // cout << "Value of num: " << num << endl;         // Value of 'num'
    // cout << "Address of num: " << &num << endl;      // Memory address of 'num'
    // cout << "Pointer ptr points to: " << ptr << endl; // 'ptr' stores the address of 'num'
    // cout << "Value pointed by ptr: " << *ptr << endl; // Dereferencing 'ptr' to get the value of 'num'


    

    //***operators
    //int x=5,y=0;
    // x=x+y; -->arithmetic operators : +,-,*,/,% 
    //Logical /comparison --> < , > , <= , >= , == , !=
    //bitwise 
    //unary --> ++,--
    //cout<<--x<<" "<<x+10<<endl;
    //cout<<x+10;
    //cout<<--x;



    //functions--recursive,inline 
    //int x=22,y=90;
    //sum(9,0);// inline function call , line expanded to x+y
    //sum(8,9);// x+y

    //for(initialisation;condition;updation){};
    //while(cond){}; --> updation within while 

    //if(cond){} else if(cond) {} else {};

    /*Switch case syntax
    switch (expression) {
    case constant1:
        // Code to execute if expression == constant1
        break;  // Exit the switch block
    case constant2:
        // Code to execute if expression == constant2
        break;  // Exit the switch block
    ...
    default:
        // Code to execute if none of the cases match
        break;  // Optional, but recommended
}

    
    
    */


   


    return 0;
}