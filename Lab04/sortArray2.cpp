#include <iostream>
using namespace std;

int sizeArr = 0;
int method = 0;
int userArray[0];

void sortArr();

int main()
{
	cout << "Enter the size of the array: ";
	cin >> sizeArr;

	if (sizeArr < 1) {
		cout << "ERROR: You entered an incorrect value for the array size!";
	}

	else {
		userArray[sizeArr];

		cout << "Enter the numbers in the array, separated by a space, and press enter: ";
		for (int i = 0; i < sizeArr; i++){
			cin >> userArray[i];
			}

		cout << "Sort in ascending (0) or descending (1) order? ";
		cin >> method;

		sortArr(); //Call function

		if (method == 0){
			cout << "This is the sorted array in ascending order: ";
			for (int k = 0; k < sizeArr; k++){
				cout << userArray[k] << " ";
				}
			}
		else if (method == 1){
			cout << "This is the sorted array in descending order: ";
			for (int k = 0; k < sizeArr; k++){
				cout << userArray[k] << " ";
				}
			}
		}
	cout << "\n";
	return 1;
}

void sortArr()
{
	int i, j, cond;

	if (method == 1){ //Descending Method
		for (i = 1; i < sizeArr; i++){
			cond = userArray[i]; //take value
			j = i;
			while ((j > 0) && (userArray[j - 1] < cond)) { 
				userArray[j] = userArray[j - 1]; //
				j = j - 1;
				}
			userArray[j] = cond; //insert value in correct spot
			}
		}

	else if (method == 0){  //Ascending method
                for (i = 1; i < sizeArr; i++){
			cond = userArray[i]; //take value
			j = i;
			while ((j > 0) && (userArray[j - 1] > cond)) { 
				userArray[j] = userArray[j - 1]; //
				j = j - 1;
				}
			userArray[j] = cond; //insert value in correct spot
			}
		}
}
