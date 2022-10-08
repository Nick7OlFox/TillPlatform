#include "pch.h"
#include "Basket.h"
#include "Item.h"

Basket::Basket()
{
	// Constructor for the basket object
	// Initialize the total to £0.00
	this->total = 0.00f;
}

Basket::~Basket()
{
	// Destructor for the basket object
	// Reduce the quantity in stock from the items on the Database
	// TODO
}

void Basket::Add(Item& item)
{
	this->thisBasket.push_back(item);

	this->total =+ item.ItemPrice();
}

void Basket::Remove(Item& item)
{
	for (int i = 0; i > this->thisBasket.size(); i++)
	{
		// Check if item is on the basket
		if (this->thisBasket[i].IsBarcodeSame(item))
		{
			// Delete the item
			this->thisBasket.erase(this->thisBasket.begin() + (--i));

			this->total =- item.ItemPrice();

			break;
		}

		// Throw exception if the item was not found on the basket
		else if (i == (this->thisBasket.size() - 1))
			throw std::invalid_argument("This item is not on the basket");
	}
}