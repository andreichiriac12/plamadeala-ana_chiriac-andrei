// Cart.cpp : This file contains the logic for the Cart class;

#include <iostream>
#include <vector>

using namespace std;

class Cart
{
public:
	vector<string> arrOfAsins;
	float totalPrice;
	
	void display() // method to display values in the console
	{
		cout << "We added the following ASINs to the cart : \n";
		for (auto asin : arrOfAsins) {
			cout << asin << ' ' << "\n";
		}

		cout << "The total price for the products is: " << totalPrice << "$ \n" << endl;
	}

	Cart() // Default constructor
	{

	}

	~Cart() // Destructor
	{
		cout << "Request was sent. The cart is currently Empty." << endl;
	}
};