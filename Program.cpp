// plamadeala-ana_chiriac-andrei.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Plamadeala Ana
// Chiriac Andrei
// Anul I

#include <iostream>
#include <vector>

#include "Product.cpp"
#include "Cart.cpp"

using namespace std;

int main()
{
    cout << "Proiect OOP (Ana Plamadeala, Andrei Chiriac) \n \n";

    //Object 1
    Product product1; //Object 1 - object created with no values (default constructor)

    //Access attributes and set values
    product1.asin = "B09TZWLFLY";
    product1.title = "Gaming Keyboard";
    product1.type = "Keyboard";
    product1.brand = "Dacoity";
    product1.price = 29.99;
    product1.rating = 4;

    cout << "We are using the default constructor for Product 1: \n";
    product1.display();


    //Object 2
    Product product2("B0BLW25MB7", "Lenovo IdeaPad 1", "Laptop", "Lenovo", 162.50, 5); //Object 2 - object created with all values (Constructor with all parameters)

    cout << "We are using the constructor with all parameters for Product 2: \n";
    product2.display();

    //Object 3
    Product product3("B005EJH6Z4", "Wireless Computer Mouse", 11.98, 2); //Object 3 - object created with with 4 values (Constructor with 4 parameters)

    cout << "We are using the constructor with 4 parameters for Product 3: \n";
    product3.display();

    //Object 4 
    cout << "Cart 1: \n";
    Cart cart1;
    cart1.arrOfAsins.push_back(product1.asin);
    cart1.arrOfAsins.push_back(product2.asin);
    cart1.totalPrice = (product1.price + product2.price);

    cart1.display();
   
    //Object 5 
    cout << "Cart 2: \n";
    Cart cart2;

    cart2.arrOfAsins.push_back(product1.asin);
    cart2.arrOfAsins.push_back(product2.asin);
    cart2.arrOfAsins.push_back(product3.asin);

    cart2.totalPrice = (product1.price + product2.price + product3.price);

    cart2.display();
}