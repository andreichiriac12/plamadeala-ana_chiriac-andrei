// Product.cpp : This file contains the logic for the Product class;

#include <iostream>

using namespace std;

    class Product // The class
    {
        public:
            string asin;
            string title;
            string type;
            string brand;
            float price;
            int rating;

            void display() // method to display values in the console
            {
                cout
                    << "ASIN: " << asin << "\n"
                    << "Title: " << title << "\n"
                    << "Type: " << type << "\n"
                    << "Brand: " << brand << "\n"
                    << "Price: " << price << "$ \n"
                    << "Rating: " << rating << "* \n"
                    << endl;
            }

        Product() // Default constructor
        {

        }

        Product(string asin, string title, string type, string brand, float price, int rating) // Constructor with all parameters
        {
            this->asin = asin;
            this->title = title;
            this->type = type;
            this->brand = brand;
            this->price = price;
            this->rating = rating;
        }

        Product(string asin, string title, float price, int rating) // Constructor with 4 parameters
        {
            this->asin = asin;
            this->title = title;
            this->price = price;
            this->rating = rating;
        }  
};