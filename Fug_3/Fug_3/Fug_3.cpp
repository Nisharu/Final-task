//#include <iostream>
//#include <string>
//#include "windows.h"
//#include <cmath>
//using namespace std;
//
//int main()
//{
//	double max_el = 0, min_el = INFINITY;
//	double arr[20];
//
//	cout << "array: ";
//
//	for (int i = 0; i < 20; i++)
//	{
//		arr[i] = rand() % 100;
//		cout << arr[i] << " ";
//	}
//
//	//for (int i = 0; i < 20; i++)
//	//{
//	//	max_el = max(max_el, arr[i]);
//	//	min_el = min(min_el, arr[i]);
//	//}
//	for (int element : arr)
//	{
//		max_el = max(max_el, element);
//		min_el = min(min_el, element);
//	}
//
//	cout << "\nMaximum element is: " << max_el << "\nMinimum element is: " << min_el << endl;
//}

//----------------------------------------------

#include <iostream>
#include <string>
#include "windows.h"
#include <cmath>
using namespace std;
int main()
{
	double sum = 0, counter = 0;
	double arr[20];
	cout << "array: ";
	for (int i = 0; i < 20; i++)
	{
		arr[i] = -50 + rand() % 100;
		cout << arr[i] << " ";
	}
	for (int element : arr)
	{
		if (element > 0)
		{
			sum += element;
			counter++;
		}
	}
	cout << "\nArithmetic mean: " << sum / counter << endl;
	
}

//----------------------------------------------

//#include <iostream>
//#include <string>
//#include "windows.h"
//#include <cmath>
//#include <array>
//using namespace std;
//int main()
//{
//	double sum = 0, temp_i = 0;
//	array<double, 20> arr;
//	cout << "array: ";
//	for (int i = 0; i < 20; i++)
//	{
//		arr[i] = rand() % 100;
//		cout << arr[i] << " ";
//	}
//	array<double, 20> temp = arr;
//	
//	for (int i = 19; i >= 0; i--)
//	{		
//		arr[i] = temp[temp_i];
//		temp_i++;
//	}
//
//	cout << "\nflipped array: ";
//	for (int i = 0; i < 20; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}

//----------------------------------------------

//#include <iostream>
//#include <string>
//#include "windows.h"
//#include <cmath>
//#include <array>
//using namespace std;
//int main()
//{
//	double sum = 0, temp_i = 0;
//	array<int, 20> arr;
//	cout << "array: ";
//	for (int i = 0; i < 20; i++)
//	{
//		arr[i] = rand() % 100;
//		cout << arr[i] << " ";
//	}
//
//	cout << "\nchanged array: ";
//	for (int i = 0; i < 20; i++)
//	{
//		if (arr[i] % 2 == 0) arr[i] = 0;
//		else arr[i] = 1;
//		cout << arr[i] << " ";
//	}
//
//}

//----------------------------------------------

//#include <iostream>
//#include <string>
//#include "windows.h"
//#include <cmath>
//#include <array>
//using namespace std;
//int main()
//{
//	int mode = 0, max_n = 0;
//	array<int, 20> arr;
//	array<int, 20> modal_index;
//
//	cout << "array: ";
//	for (int i = 0; i < 20; i++)
//	{
//		arr[i] = rand() % 10;
//		cout << arr[i] << " ";
//		modal_index[i] = 0;
//	}
//
//	for (int i = 0; i < 20; i++)
//	{
//		for (int j = 0; j < 20; j++)
//		{
//			if (arr[i] == arr[j]) modal_index[i]++;
//		}
//		if (max_n < modal_index[i])
//		{
//			max_n = modal_index[i];
//			mode = arr[i];
//		}
//	}
//	cout << "\nMode: " << mode << endl;
//}