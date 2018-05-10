#include "Ship.h"
#include "CruiseShip.h"
#include "CargoShip.h"

int main(){

	Ship *ships[3] = {
			new CargoShip(),
			new CruiseShip(),
			new Ship(),
	};

	ships[0]->setName("Banana");
	ships[1]->setName("Britney Spears");
	ships[2]->setName("Ralph Lauren");

	for(int i = 0; i < 3; i++){
		ships[i]->print();
		cout << endl;
	}

	return 0;
}
