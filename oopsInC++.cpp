#include <bits/stdc++.h>
using namespace std;

/* Encapsulation - Binding data member and member function together like a capsule. 
   We do that to prevent anything to acess from our class and able to interact or modify it */
   
// class Person{
//     string name;
// public:
//     void setName(string n){
//         name = n;
//     }
//     string getName(){
//         return name;
//     }
//     int age;
// };

// int main(){
//     Person p;
//     p.age = 20;
//     cout << p.age << endl;
//     p.setName("Ram");
//     cout << "Name is " << p.getName();
// }

/* Abstraction - It means hiding complex thing behind a procedure that make things look simple. It used to hide unnecessary details 
   and to focus on important functionalities. It should have at least one pure virtual function. */
   
//   class Vehicle {
//     public:
//         virtual void start() = 0;
//         virtual void stop() = 0;
//   };
   
//   class Car : public Vehicle {
//     public:
//         void start(){
//             cout << "Car started." << endl;
//         }
//         void stop(){
//             cout << "Car stopped" << endl;
//         }
//   };
   
//   int main(){
//       Car c;
//       c.start();
//       c.stop();
//   }
   
/* Inheritance - When a child class derive the attribute and behaviour of it's parent class */

// class Person {
//     public:
//     int age;
//     void name(){
//         cout << "My name is Ram";
//     }
// };

// class Man : public Person {};

// int main(){
//     Man m;
//     m.name();
// }

/* Polymerphism - It is the ability to process any data to be processed in more than one form. It makes code more flexible */

// class Calculate{
//     public:
//     int sum(int a, int b){return a+b;}
//     int sum(int a, int b, int c){return a+b+c;}
// };

// int main(){
//     Calculate c;
//     cout << c.sum(10,20) << endl;
//     cout << c.sum(10,20,30) << endl;
// }