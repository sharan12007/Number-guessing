#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main() {
    STARTPOINT:
      srand(time(0));
		int random = rand() % 10;


	while (true) {

            char x;

		int inp,d;
		cin >> inp;
      d=random-inp;
            if(d <0){
                d=-(d);
            }

		if (inp == random) {
			cout << "YOU WON ..." << endl;
			cout << "Wanna Continue..... if YES Enter Y else N" << endl;

			cin >> x;
			if (x == 'Y') {
                    goto STARTPOINT;

			}
			if (x == 'N') {
				exit(0);
			}
		}s
			else if(d>=5) {
				cout << "You Have Entered To High" << endl;

			}
			else {
				cout << "You Have Entered  Low";
			}

		}

    cout<<"Thank You";
	return 0;

}





