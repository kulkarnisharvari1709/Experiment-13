# Experiment-13

Program 1

Aim: To demonstrate the concept of constructors in C++, including the default constructor, parameterized constructor, and copy constructor.

Software Used: Programiz online C++ compiler and IDE.

Theory: Constructors are special member functions in C++ used to initialize objects. There are several types of constructors:

Default Constructor: Initializes an object with default values.
Parameterized Constructor:Initializes an object with user-defined values.
Copy Constructor:Creates a new object as a copy of an existing object.
In the given program, these constructors initialize the integer member num of the class fetch in different ways. The disp() method is used to display the value of num.

Algorithm:

Define a class fetch with a private integer variable num.

Implement three constructors:

Default constructor to assign num a default value.
Parameterized constructor to assign num a passed integer value.
Copy constructor to initialize a new object by copying num from another object.
Implement a method disp() to display the value of num.

In the main() function:

Create an object f1 using the default constructor.
Create an object f2 using the parameterized constructor with the value 5.
Create an object f3 using the copy constructor to copy f2.
Call disp() for all three objects to display their values.

Conclusion: The program successfully demonstrates how different constructors work in C++. The default constructor assigns a default value, the parameterized constructor assigns a user-defined value, and the copy constructor creates a new object with the same value as an existing object. This helps in understanding object initialization and copying in C++.

Program 2

Aim: To demonstrate constructor overloading in C++ by creating multiple constructors with different numbers of parameters and initializing objects accordingly.

Software Used: Programiz online C++ compiler.

Theory: Constructor overloading in C++ allows a class to have more than one constructor with different parameter lists. This enables objects to be initialized in different ways. The compiler determines which constructor to invoke based on the number and types of arguments passed when an object is created.

In this program, the class Fetch has three constructors:

A default constructor (no parameters) that initializes num to 0.
A parameterized constructor that accepts one integer and assigns it to num.
Another parameterized constructor that accepts two integers and assigns their sum to num.
The disp() method displays the value of num for each object.

Algorithm:

Define a class Fetch with a private integer member variable num.

Create three constructors:

A default constructor that sets num to 0.
A constructor that takes one integer and assigns it to num.
A constructor that takes two integers and assigns their sum to num.
Define a method disp() to print the value of num.

In the main() function:

Create an object f1 using the default constructor.
Create an object f2 using the one-parameter constructor.
Create an object f3 using the two-parameter constructor.
Call the disp() method for each object to display their values.

Conclusion: The program successfully demonstrates constructor overloading by using multiple constructors with different parameters to initialize objects in various ways. This feature enhances flexibility in object creation and initialization in C++.

Program 3

Aim: To demonstrate constructor overloading in C++ by defining multiple constructors with different parameters to initialize objects differently.

Software Used: Programiz online C++ compiler.

Theory: Constructor overloading in C++ allows a class to have more than one constructor with different parameter lists. This enables objects to be initialized in various ways depending on the arguments passed during object creation.

In this program, the class Fetch has two constructors:

A constructor with one parameter that initializes num with the given value.
A constructor with two parameters that initializes num as the sum of both parameters.
The disp() method outputs the value of num for each object.

Algorithm:

Create a class Fetch with a private integer variable num.

Implement a constructor that accepts one integer and assigns it to num.

Implement an overloaded constructor that accepts two integers and assigns their sum to num.

Create a disp() function to display the value of num.

In main(), create two objects:

f1 with a single integer argument.
f2 with two integer arguments.
Call the disp() function on both objects to print their values.

Conclusion: The program successfully shows how constructor overloading works in C++. It illustrates how multiple constructors with different parameter lists can be used to initialize objects differently, increasing the flexibility of object creation.
