//#include <iostream>
//using namespace std;
//int main()
//{
//    int num, stars = 0;
//    do
//    {
//        cout << "Enter the hight: ";
//        cin >> num;
//        if (num < 1 && num > 10) cout << "\nEnter the number from 1 to 10: " << endl;
//    } while (num < 1 && num > 100);
//    cout << "\nPyramid: " << endl;
//    for (int i = 1; i <= num; i++)
//    {
//        stars++;
//        for (int j = 1; j <= stars; j++)
//        {
//            cout << "*";
//        }
//        cout << endl;
//    }
//}

//------------------------------------------

//#include <iostream>
//using namespace std;
//int main()
//{
//    int num, sum = 0;
//    do
//    {
//        cout << "Enter the start of the interval: ";
//        cin >> num;
//        if (num < 1 && num > 100) cout << "\nEnter the number from 1 to 100: " << endl;
//    } while (num < 1 && num > 100);
//    cout << "\nArray of numbers: ";
//    for (int i = 1; i <= num; i++)
//    {
//        cout << i << " ";
//        sum += i;
//    }
//    cout << "\nsum of numbers: " << sum;
//}

//------------------------------------------

//#include <iostream>
//using namespace std;
//int main()
//{
//    int start, end;
//    bool isPrime = false;
//    do 
//    {
//        cout << "Enter the start of the interval: ";
//        cin >> start;
//        cout << "\nEnd of the interval: ";
//        cin >> end;
//        if (start > end) cout << "\nStart should be > than end" << endl;
//    } while (start > end);
//    cout << "\nArray of simple numbers: ";
//
//    for (int i = start; i<= end; i++) 
//    {
//        for (int j = 2; j <= i / 2; j++)
//        {
//            if (i % j == 0)
//            {
//                isPrime = false;
//                break;
//            }
//            isPrime = true;
//        }
//        if (isPrime == true) cout << i << " ";
//    }
//}

//------------------------------------------

//#include <iostream>
//using namespace std;
//int main()
//{
//    int num, simp = 2;
//    bool isPrime = false;
//    cout << "Enter a number: ";
//    cin >> num;
//    while (num >= 3 && isPrime == false)
//    {
//        num--;
//        for (int i = 2; i <= num/2; i++)
//        {
//            if (num % i == 0)
//            {
//                isPrime = false;
//                break;
//            }
//            isPrime = true;
//            simp = num;
//        }
//    }
//    cout << "\nprevious simple number is: " << simp << endl;
//}

//------------------------------------------

#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0;
    cout << "Enter a number: " << endl;
    cin >> num;

    while (num > 0)
    {
        sum += num % 10;
        num /= 10;                     
    }
    cout << "sum of digits in the number is: " << sum << endl;
    
}



