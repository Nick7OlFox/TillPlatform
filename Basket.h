#include "InventoryBase.h"
#include "Item.h"
#include <vector>

using namespace std;

// Class to manage the current sale being processed
class Basket : public InventoryBase
{
private:
	vector <Item&> thisBasket;
	float total;
public:
	Basket();
	~Basket();

	void Add(Item&);
	void Remove(Item&);
};