//      *** Inheritance ***
/*
1.      Reusability is a very important feature of OOPs
2.      In C++ we can reuse a class and add additional features to it
3.      Reusing classes saves time and money
4.      Reusing already tested and debugged class will save a lot of effort of developing and debugging the same thing again
*/

//      *** What is Inheritance in C++? ***
/*
1.      The concept of Reusability in C++ is supported using Inheritance
2.      We can reuse the properties of an existing class by inheriting from it
3.      The existing class is called as the BASE CLASS
4.      The new class which is inherited is called the DERIVED CLASS
5.      Reusing classes saves time and money
6.      There are different types of inheritance in C++
*/

//      *** Forms of Inheritance in C++ ***
/*
1.      Single Inheritance- A Derived Class with only one Base Class
                (one parent - one child)
                                (Employee -> Programmer)
                                        (some books might show (<-) means- is derived from)
2.      Multiple Inheritance- A Derived Class with more than one Base Class
                (two parent - one child)
                                (Employee & Assistant -> Programmer )
3.      Hierarchical Inheritance- Several Derived Classes from a single Base Class
                (one parent - two child)
                                (Employee-> Programmer & Assistant)
4.      Multilevel Inheritance- Deriving a Class from already Derived Class
                (one parent- child of parent- child of the child)
                                (Mammal = Animal + More...)
                                (Cow = Mammal + More...)
5.      Hybrid Inheritance- Hybrind Inheritance is a combination of Multiple Inheritance and Multilevel Inheritance
                            A Class is Derived from Two Classes as in Multiple Inheritance
                            However, one of the Parent is not a Base Class
                                (Animal-> Mammal & Bird -> Bat)
*/