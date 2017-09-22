// ListProcessor.cpp

// most recently modified by Samuel Scott during the 4th week of September, 2017

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.cpp"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl << endl;
	cout << "Size: " << cows.getSize() << endl;
	cout << "Sum: " << cows.getSum() << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cows.insertAsLast(1);
	cout << "cows list  :  " << cows << endl << endl;
	cout << "Size: " << cows.getSize() << endl;
	cout << "Sum: " << cows.getSum() << endl;

	cows.removeFirst();
	cout << "cows list  :  " << cows << endl << endl;
	cout << "Size: " << cows.getSize() << endl;
	cout << "Sum: " << cows.getSum() << endl;

	List horses(cows);
	horses.insertAsLast(2.5);
	cout << "cows list  :  " << cows << endl;
	cout << "Size: " << cows.getSize() << endl;
	cout << "Sum: " << cows.getSum() << endl;
	cout << "horses list:  " << horses << endl << endl;
	cout << "Size: " << horses.getSize() << endl;
	cout << "Sum: " << horses.getSum() << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << endl;
	cout << "Size: " << cows.getSize() << endl;
	cout << "Sum: " << cows.getSum() << endl;
	cout << "horses list:  " << horses << endl << endl;
	cout << "Size: " << horses.getSize() << endl;
	cout << "Sum: " << horses.getSum() << endl;

	List pigs;
	cout << "cows list  :  " << cows << endl;
	cout << "Size: " << cows.getSize() << endl;
	cout << "Sum: " << cows.getSum() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "Size: " << horses.getSize() << endl;
	cout << "Sum: " << horses.getSum() << endl;

	cout << endl;
	pigs.insertAsLast(5);
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "Size: " << pigs.getSize() << endl;
	cout << "Sum: " << pigs.getSum() << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	pigs = horses;
	pigs.insertAsLast(10);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	cout << "End of code" << endl;

	return 0;
}
