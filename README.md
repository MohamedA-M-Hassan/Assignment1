# Assignment1
Assignment 1
Q1 : What is a class?
   A class is a C++ vehicle for translating an abstraction to a user-defined type. It combines
data representation and methods for manipulating that data into one neat package. Let’s look at a class that represents stock.

الكلاس عبارة عن دولاب بيتحط فيه ادراج .. كل درج بيمثل الاوبجيكت .. طريقة تنظيمية مش اكتر من وجهة نظرى  xD

Q2. How does a class accomplish abstraction, encapsulation, and data hiding?
   A class represents the operations you can perform on a class object with a public
interface of class methods; this is abstraction.The class can use private visibility (the
default) for data members, meaning that the data can be accessed only through the
member functions; this is data hiding. Details of the implementation, such as data
representation and method code, are hidden; this is encapsulation.

Q3: What is the relationship between an object and a class?
A class defines a type, including how it can be used.An object is a variable or
another data object, such as that produced by new, which is created and used
according to the class definition.The relationship between a class and an object is
the same as that between a standard type and a variable of that type.

Q4: In what way, aside from being functions, are class function members different from class data members?
If you create several objects of a given class, each object comes with storage for its
own set of data. But all the objects use the one set of member functions. (Typically,
methods are public and data members are private, but that’s a matter of policy, not
of class requirements.

Q6: When are class constructors called? When are class destructors called?
A class constructor is called when you create an object of that class or when you
explicitly call the constructor. A class destructor is called when the object expires.

Q8: What is a default constructor? What is the advantage of having one?
A default constructor either has no arguments or has defaults for all the arguments.
Having a default constructor enables you to declare objects without initializing
them, even if you’ve already defined an initializing constructor. It also allows you to
declare arrays.

Q10: What are this and *this?

The this pointer is available to class methods. It points to the object used to
invoke the method.Thus, this is the address of the object, and *this represents the
object itself.

