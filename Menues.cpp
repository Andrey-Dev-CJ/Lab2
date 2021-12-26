#include "Menues.h"

void menuFirst()
{
	bool flag = true;
	int n;
	Container c;
	while (flag) {
		try {
			std::cout << "-------------Trains menu----------------\n";
			std::cout << "1. Add trains\n";
			std::cout << "2. Delete trains\n";
			std::cout << "3. Change trains\n";
			std::cout << "4. Show all trains\n";
			std::cout << "5. Find trains\n";
			std::cout << "6. Exit\n";
			std::cout << "It's time to choose, Mr.Freeman: ";
			cin >> n;


			switch (n)
			{
			case 1:
				c.addTr();
				break;
			case 2:
				c.delTr();
				break;
			case 3:
				c.change();
				break;
			case 4:
				c.show();
				break;
			case 5:
				c.find();
				break;

			default:
				c.save();
				flag = false;
				break;
			}


		}
		catch (const char* exception) {
			std::cout << exception;

		}
		catch (const int exceptions) {
			if (exceptions == 1)
				std::cout << "bad index\n";
		}

	}
	
}

void menuSecond()
{
}
