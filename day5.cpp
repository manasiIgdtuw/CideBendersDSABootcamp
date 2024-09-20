#include<bits/stdc++.h>
using namespace std;

class Person {
public:
    // Public members: accessible from anywhere
    string name;

    // Constructor
    Person(string personName) {
        name = personName;
    }

    // Public function
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;  // Can access private member within the class
    }

private:
    // Private members: accessible only within the class
    int age;

    // Private function
    void setAge(int personAge) {
        age = personAge;
    }
};

class Rectangle {
private:
    int length, width;

public:
    // 1. Default Constructor (no arguments)
    Rectangle() {
        length = 0;
        width = 0;
        cout << "Default Constructor called!" << endl;
    }

    // 2. Parameterized Constructor (with arguments)
    Rectangle(int l, int w) {
        length = l;
        width = w;
        cout << "Parameterized Constructor called!" << endl;
    }

    // 3. Copy Constructor
    Rectangle(const Rectangle &rect) {
        length = rect.length;
        width = rect.width;
        cout << "Copy Constructor called!" << endl;
    }

    // Member function to calculate area
    int area() {
        return length * width;
    }

    // Destructor
    ~Rectangle() {
        cout << "Destructor called!" << endl;
    }
};


int main(){
    Person person1("John");

    // Accessing public member directly
    person1.name = "John Doe";
    person1.displayInfo();

    // person1.age = 30;       // Error: Cannot access private member directly
    // person1.setAge(30);      // Error: Cannot call private function directly

    // Using Default Constructor
    Rectangle rect1;  
    cout << "Area of rect1: " << rect1.area() << endl;

    // Using Parameterized Constructor
    Rectangle rect2(10, 5);
    cout << "Area of rect2: " << rect2.area() << endl;

    // Using Copy Constructor (rect3 is a copy of rect2)
    Rectangle rect3 = rect2;  
    cout << "Area of rect3: " << rect3.area() << endl;


// //stack<data_type> indentifier
// stack<int> s1;
// s1.push(23); // 23
// s1.push(67); // 23,67
// s1.push(89); // 23,67,89
// //s1.pop(); //23,67
// int x=s1.top(); //23,67
// //cout<<x;

// while(!s1.empty()){
//     cout<<s1.top()<<endl;
//     s1.pop();
// }

// queue<int> q;
// q.push(45);
// q.push(55);
// q.push(65); // 45,55,65
// q.pop();//55,65
// int q1=q.front(); // 55
// int q2=q.back(); // 65
// q.empty();



// deque<int> dq;
// dq.push_back(12);
// dq.push_front(23);
// //23 , 12 
// dq.pop_back();
// dq.pop_front();
// int dq1=dq.front();
// int dq2=dq.back();


    return 0;
}