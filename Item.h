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

	// Methods to modify the item
	void Modify(float);
	void Modify(string);
};

