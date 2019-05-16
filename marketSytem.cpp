#include <iostream>
#include <string>
#include <iomanip>
using namespace std;



int main()
{
	int numbersarray = 0;
	string valueA[100];
	string *end;
	string namevalue;
	end = &namevalue;
	double price;
	double priceA[100];
	
	

	while(*end != "done"){
		
		cout << "enter product or enter \"done\" to finish:" << endl;
		cin >> namevalue;
		if (namevalue != "done") {
		cout << "enter price" << endl;
		cin >> price;
			valueA[numbersarray] = namevalue;
			priceA[numbersarray] = price;
			numbersarray++;
		}

	}
	cout << "--------------------------------------" << "\n \n \n \n \n \n" << endl;
	for (int n = 0; n < numbersarray; n++) {
		cout << valueA[n] << " R$:" << priceA[n]<< endl;

	}
	double finalprice = 0.00;
	for (int n = 0; n < numbersarray; n++) {
		finalprice += priceA[n];
	}

	cout << "--------------------------------------" << endl;
	cout << "Total: R$ " << setprecision (2) <<fixed << finalprice << endl;



	cin.ignore();
	cin.get();


	return 0;
}
