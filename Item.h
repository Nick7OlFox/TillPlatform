#include <string>

using namespace std;

class Item
{
private:
	string name, barcode;
	float price;
public:
	// Constructor & Distructor
	Item(string);
	~Item();

	// Give the value of the price
	float ItemPrice();

	// Check if the barcode matches
	bool IsBarcodeSame(Item&);

	// Methods to modify the item
	void Modify(float);
	void Modify(string);
};

