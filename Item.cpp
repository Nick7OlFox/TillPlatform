#include "pch.h"
#include "Item.h"
#include <iostream>

// Constructor
Item::Item(string barcode)
{
	// This method will take the barcode of an item to then pull its data from a database/file
	// As the database isn't yet implemented it'll only print a message
	cout << "Item with barcode " << barcode << " created." << endl;
}

// Destructor
Item::~Item()
{
	cout << "Item with barcode " << this->barcode << " destroid." << endl;
}

// Modify Price
void Item::Modify(float newPrice)
{
	this->price = newPrice;
}

// Modify Name
void Item::Modify(string newName)
{
	this->name = newName;
}