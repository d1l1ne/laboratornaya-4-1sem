#include <iostream>
#include <string>

using namespace std;

int main() {

	string N, row ("");
	int length;

	while (true) {

		cout << "Enter legs lenght:" << endl;
		cin >> N;
		cout << endl;

		try {

			length = stoi(N);

		}
		catch (invalid_argument) {

			cout << "Length must be a number" << endl << endl;
			continue;

		}
		catch (out_of_range) {

			cout << "Number is too big" << endl << endl;
			continue;

		}
		catch (exception) {

			cout << "Unknown exception" << endl << endl;
			continue;

		}
		if (length < 2) {

			cout << "Number should be greater than or equal to 2" << endl << endl;
			continue;

		}
		if ((N.find(',') != N.npos)){

			cout << "Length must be an integer" << endl << endl;
			continue;

		}
		if ((N.find('.') != N.npos)) {

			cout << "Length must be an integer" << endl << endl;
			continue;

		}
		break;
	}
	

	for (int i = 0; i < length; i++) {

		if (i == 0) {

			cout << "*" << endl;

		}
		else if (i == 1) {

			cout << "* *" << endl;

		}
		else if (i == length - 1) {

			for (int k = 0; k < length; k++) {

				cout << "* ";

			}
			cout << endl;

		}
		else {

			cout << "*";

			for (int j = 0; j < i; j++) {

				if (j==i-2) {

					cout << " ";

				}
				else {

					cout << "  ";

				}
				

			}

			cout << "*" << endl;

		}

	}

	system("pause");
	return 0;

}