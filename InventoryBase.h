#include "Item.h"

using namespace std;
// This class is responsible for establishing a base class for two classes responsible for managing the store inventory and the current basket
class InventoryBase
{
public:
	InventoryBase();
	~InventoryBase();
	virtual void Add();
	virtual void Remove();
};

