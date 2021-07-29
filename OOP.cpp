// INDEX
//  PG 111 : Classes and Objects
//  PG 294 : Constructor 
//  PG 414 : Copy Constructor
//  PG 560 : Destructor
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 
//  PG : 


//Classes and Objects____________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________
//
// C++ is an object-oriented programming language.
//
// Everything in C++ is associated with classes and objects, along with its attributes and methods.
//  For example: in real life, a car is an object. 
//  The car has attributes, such as weight and color, and methods, such as drive and brake.
//
// Attributes and methods are basically variables and functions that belongs to the class.
//  These are often referred to as "class members".
//
// A class is a user-defined data type that we can use in our program, and it works as an object constructor, 
// or a "blueprint" for creating objects.
//
// To create a class, use the class keyword:
//
// Example
// Create a class called "MyClass":
//
// class MyClass {       // The class
//   public:             // Access specifier
//     int myNum;        // Attribute (int variable)
//     string myString;  // Attribute (string variable)
// };
//
//
//
// Example explained
// The class keyword is used to create a class called MyClass.
// The public keyword is an access specifier, 
// which specifies that members (attributes and methods) of the class are accessible from outside the class. 
// Inside the class, there is an integer variable myNum and a string variable myString. 
// When variables are declared within a class, they are called attributes.
// At last, end the class definition with a semicolon ;.
//
// Create an Object
// In C++, an object is created from a class. 
// We have already created the class named MyClass, so now we can use this to create objects.
//
// To create an object of MyClass, specify the class name, followed by the object name.
//
// To access the class attributes (myNum and myString), use the dot syntax (.) on the object:
//
//
// #include<bits/stdc++.h>
// using namespace std;
// class myClass{
//     public:
//         int myNum;        // Attribute (int variable)
//         string myString;  // Attribute (string variable)
// };
//
// int main(){
//     myClass obj1;
//     obj1.myNum = 194029;
//     obj1.myString = "Asif";
//     cout << obj1.myNum << endl;
//     cout << obj1.myString << endl;
//     return 0;
// }
//
//
//
//
//
// Class Methods
// Methods are functions that belongs to the class.
//
// There are two ways to define functions that belongs to a class:
//
// Inside class definition
// Outside class definition
// In the following example, we define a function inside the class, and we name it "myMethod".
//
// Note: You access methods just like you access attributes;
//  by creating an object of the class and using the dot syntax (.):
//
// #include<bits/stdc++.h>
// using namespace std;
// class myClass{
//     public:
//         void myMethod(){
//             cout << "Assalamualaykum....." << endl;
//         }
// };
//
// int main(){
//     myClass obj1;
//     obj1.myMethod();
//     return 0;
// }
//
//
// Outside Example
//
// To define a function outside the class definition, 
// you have to declare it inside the class and then define it outside of the class. 
// This is done by specifiying the name of the class, 
// followed the scope resolution :: operator, followed by the name of the function:
//
// #include<bits/stdc++.h>
// using namespace std;
// class myClass{
//     public:
//         void myMethod();
// };
// void myClass :: myMethod(){
//             cout << "Assalamualaykum....." << endl;
//     }
// int main(){
//     myClass obj1;
//     obj1.myMethod();
//     return 0;
// }
//
//
// Parameters
// You can also add parameters:
//
//
//
// #include<bits/stdc++.h>
// using namespace std;
// class Car{
//     public:
//         int speed (int max_speed);
// };
// int Car::speed(int max_speed){
//     return max_speed;
// }
// int main(){
//     Car obj1;
//     int spd; cin >> spd;
//     cout << obj1.speed(spd * 2);
//     return 0;
// }
//
//
//C++ Class Example: Initialize and Display data through method
//
// #include<bits/stdc++.h>
// using namespace std;
// class Student{
//     public:
//         int id;
//         string name;
//         void insert(int x, string y){
//             id = x;
//             name = y;
//         }
//         void display(){
//             cout << id << "\t" << name << endl;
//         }
// };
//
// int main(){
//     Student obj1 , obj2, obj3, obj4;
//     obj1.insert(101, "Helal");
//     obj1.display();
//
//     obj2.insert(102, "Delwar");
//     obj2.display();
//
//     obj3.insert(103, "Somrat");
//     obj3.display();
//
//     obj4.insert(104, "Faruk");
//     obj4.display();
//
//     return 0;
// }
//
//
//


//CONSTRUCTOR____________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________
//
//
//
// Constructors
// A constructor in C++ is a special method that is automatically called when an object of a class is created.
// To create a constructor, use the same name as the class, followed by parentheses ():
//
// Note: The constructor has the same name as the class, it is always public, and it does not have any return value.
//
//
// #include<bits/stdc++.h>
// using namespace std;
// class Car{                      //THE CLASS
//     public:                     // ACCESS SPECIFIER
//         Car(){                  //CONSTRUCTOR
//             cout << "SPEED = 200" << endl;
//         }
// };
//
// int main(){
//     Car obj1;                   // Create an object of MyClass (this will call the constructor)
//     return 0;
//
// }
//
//
//
//
// Constructor Parameters
//
// Constructors can also take parameters (just like regular functions), which can be useful for setting initial values for attributes.
//
// The following class have brand, model and year attributes, and a constructor with different parameters.
// Inside the constructor we set the attributes equal to the constructor parameters (brand=x, etc). 
// When we call the constructor (by creating an object of the class), we pass parameters to the constructor, 
// which will set the value of the corresponding attributes to the same:
//
//
//
//
// #include<bits/stdc++.h>
// using namespace std;
// class Car{                      //THE CLASS
//     public:                     // ACCESS SPECIFIER
//         string brand;           // ATTRIBUTES
//         string model;           // ATTRIBUTES
//         int year;               // ATTRIBUTES
//         Car(string x, string y, int z){                  //CONSTRUCTOR WITH PARAMETRS
//             brand = x;
//             model = y;
//             year = z;
//         }
// };
//
// int main(){
//      // Create Car objects and call the constructor with different values
//     Car obj1("BMW", "X5", 1999);                   // Create an object of MyClass (this will call the constructor)
//     Car obj2("FORD", "Mustang", 1969);             // Create an object of MyClass (this will call the constructor)
// 
//     // print values
//
//     cout << obj1.brand << "  " << obj1.model << "  " << obj1.year << endl;
//     cout << obj2.brand << "  " << obj2.model << "  " << obj2.year << endl;
//     return 0;
// }
//
//
//
//
//
// Just like functions, constructors can also be defined outside the class. First, declare the constructor inside the class, 
// and then define it outside of the class by specifying the name of the class, followed by the scope resolution :: operator,
// followed by the name of the constructor (which is the same as the class):
//
//
//
//
//
// #include<bits/stdc++.h>
// using namespace std;
// class Car{                      //THE CLASS
//     public:                     // ACCESS SPECIFIER
//         string brand;           // ATTRIBUTES
//         string model;           // ATTRIBUTES
//         int year;               // ATTRIBUTES
//         Car(string x, string y, int z);     // Constructor declaration
// };
// // Constructor definition outside the class
//
// Car :: Car(string x, string y, int z){                  //CONSTRUCTOR WITH PARAMETRS
//             brand = x;
//             model = y;
//             year = z;
//         }
// int main(){
//      // Create Car objects and call the constructor with different values
//     Car obj1("BMW", "X5", 1999);                   // Create an object of MyClass (this will call the constructor)
//     Car obj2("FORD", "Mustang", 1969);             // Create an object of MyClass (this will call the constructor)
//
//     // print values
//
//     cout << obj1.brand << "  " << obj1.model << "  " << obj1.year << endl;
//     cout << obj2.brand << "  " << obj2.model << "  " << obj2.year << endl;
//     return 0;
//
// }
//
//
//

//Copy Constructor____________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________
//
//
//
// A Copy constructor is an overloaded constructor used to declare and initialize an object from another object.
//
// Copy Constructor is of two types:
// #1 Default Copy constructor: The compiler defines the default copy constructor. 
// If the user defines no copy constructor, compiler supplies its constructor.
// #2 User Defined constructor: The programmer defines the user-defined constructor.
//
//
// Syntax Of User-defined Copy Constructor:
// Class_name(const class_name &old_object);  
//
//
// #include<bits/stdc++.h>
// using namespace std;
// class A{
//     public:
//         int x;
//         A(int a){       // parameterized constructor.  
//             x = a;
//         }
//         A(A &i){        // copy constructor. 
//             x = i.x;
//         }
// };

// int main(){
//     A o1(20);       // calling parameterized constructor. 
//     A o2(o1);       // calling copy parameterized constructor. 

//     cout << o1.x << " " << o2.x << endl;
// }

//
//
// Two types of copies are produced by the constructor:
// #1 Shallow copy
// #2 Deep copy
//
// Shallow Copy
//
// The default copy constructor can only produce the shallow copy.
// A Shallow copy is defined as the process of creating the copy of an object by copying data of all the member variables as it is.
// Let's understand this through a simple example:
//
// #include<bits/stdc++.h>
// using namespace std;
// class A{
//     public:
//         int x;
//         int y;
//         int *z;
//         A(){       // parameterized constructor.    
//             z = new int;
//         }
//         void get_data(int a, int b, int c){
//             x = a;
//             y = b;
//             *z = c;
//         }
//         void show_data(){
//             cout << " Value of x = " << x << endl;
//             cout << " Value of y = " << y << endl;
//             cout << " Value of *z = " << *z << endl;
//             cout << "\n\n\n";
//         }
  
// };

// int main(){
//     A o1;
//     o1.get_data(4, 5, 7);       // calling parameterized constructor. 
//     o1.show_data();

//     A o2 = o1;       // calling copy parameterized constructor. // Shallow Copy.
//     o2.show_data(); 
// }
//
// In the above case, a programmer has not defined any constructor, therefore, the statement Demo o2 = 1; 
// calls the default constructor defined by the compiler. The default constructor creates the exact copy or shallow copy of the existing object. 
// Thus, the pointer p of both the objects point to the same memory location. 
// Therefore, when the memory of a field is freed, the memory of another field is also automatically freed as both the fields point to the same memory location.
// This problem is solved by the user-defined constructor that creates the Deep copy.
//
//
// Deep copy
//
//
// Deep copy dynamically allocates the memory for the copy and then copies the actual value, both the source and copy have distinct memory locations.
// In this way, both the source and copy are distinct and will not share the same memory location.
// Deep copy requires us to write the user-defined constructor.
//
// Let's understand this through a simple example.
//
//
// #include<bits/stdc++.h>
// using namespace std;
// class A{
//     public:
//         int x;
//         int y;
//         int *z;
//         A(){       // parameterized constructor.  
//             z = new int;
//         }
//         A(A &i){        //Deep copy;
//             x = i.x;
//             y = i.y;
//             z = new int;
//             *z = *(i.z);
//         }
//         void get_data(int a, int b, int c){
//             x = a;
//             y = b;
//             *z = c;
//         }
//         void show_data(){
//             cout << "\n";
//             cout << " Value of x = " << x << endl;
//             cout << " Value of y = " << y << endl;
//             cout << " Value of *z = " << *z << endl;
//             cout << "\n\n\n";
//         }
//    
// };
//
// int main(){
//     A o1;
//     o1.get_data(4, 5, 7);       // calling parameterized constructor. 
//     A o2 = o1;       // calling copy parameterized constructor.
//     o1.show_data();
//     o2.show_data(); 
// }
//
//
//


//Destructor_____________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________
//
//
//
//
// A destructor works opposite to constructor; it destructs the objects of classes. 
//It can be defined only once in a class. 
// Like constructors, it is invoked automatically.
//
// A destructor is defined like constructor. It must have same name as class. But it is prefixed with a tilde sign (~).
//
// Note: C++ destructor cannot have parameters. Moreover, modifiers can't be applied on destructors.
//
//
//
// C++ Constructor and Destructor Example
// Let's see an example of constructor and destructor in C++ which is called automatically.
//
#include<bits/stdc++.h>
using namespace std;
class A{
    public:
        int x;
        int y;
        int *z;
        A(){       // parameterized constructor.  
            cout << "Constructor invocked\n";
        }
        ~A(){       // parameterized constructor.  
            cout << "Destructor invocked\n";
        }
  
    
};

int main(){
    A o1;       //creating an object of slass A 
    
}

























//Access Specifiers______________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________
//_______________________________________________________________________________________________________________________________________________





// The public keyword is an access specifier. Access specifiers define how the members (attributes and methods) of a class can be accessed. 
// In the example above, the members are public - which means that they can be accessed and modified from outside the code.

// However, what if we want members to be private and hidden from the outside world?

// In C++, there are three access specifiers:

// public - members are accessible from outside the class
// private - members cannot be accessed (or viewed) from outside the class
// protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. 
// You will learn more about Inheritance later.
// In the following example, we demonstrate the differences between public and private members:





// #include<bits/stdc++.h>
// using namespace std;
// class Car{
//     public:
//         int x;
//     private:
//         int y;
// };

// int main(){
//     Car obj1;
//     obj1.x = 10;    // Allowed(public)
//     obj1.y = 20;   // Not allowed(private)
//     return 0;

// }


//If you try to access a private member, an error occurs:


// Note: It is possible to access private members of a class using a public method inside the same class.
// See the next chapter (Encapsulation) on how to do this.
// Note: By default, all members of a class are private if you don't specify an access specifier:
//see the example bellow




// #include<bits/stdc++.h>
// using namespace std;
// class Car{
//     int x;
//     int y;
// };

// int main(){
//     Car obj1;
//     obj1.x = 10;    // Not Allowed(private by deafult)
//     obj1.y = 20;   // Not allowed(private by deafult)
//     return 0;
// }





