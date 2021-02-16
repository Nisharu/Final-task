#include <iostream>
#include <string>
#include "windows.h";
using namespace std;
int main()
{ 
    string s;
    cout << "Enter your name: ";
    cin >> s;
    cout << "Hello, " << s << endl;
}

//----------------------------------------

#include <iostream>
#include <string>
#include "windows.h";
using namespace std;
int main()
{
    int age;
    do {
        cout << "How old are you?: ";
        cin >> age;
        if (age <= 0) cout << "xD" << endl;
    } while (age <= 0);
    cout << "You've been alive for " << age * 365 << " days" << endl;
}

//----------------------------------------

#include <iostream>
#include <string>
#include "windows.h";
using namespace std;
int main()
{

    int m, a;
    do {
        cout << "Enter body mass: ";
        cin >> m;
        cout << "Enter acceleration: ";
        cin >> a;
        if (a <= 0 || m <= 0) cout << "Try inputing values above 0." << endl;
    } while (a <= 0 || m <= 0);
    
    cout << "Applied force is " << m * a << " N" << endl;
}

//----------------------------------------

#include <iostream>
#include <string>
#include "windows.h";
#include <cmath>
using namespace std;
int main()
{

    int a, b, c, p;
    double S = 0;
    do {
        cout << "Enter first side of a triangle: ";
        cin >> a;
        cout << "Second side: ";
        cin >> b;
        cout << "Third side: ";
        cin >> c;
        if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || c + b <= a) cout << "A trianlge with such sides cannot exist" << endl;
    } while (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || c + b <= a);
    p = (a + b + c) / 2;
    if (p <= a || p <= b || p <= c)
    {
        cout << "Cannot build a triangle (a,b or c >= p)" << endl;
    }
    else
    {
        S = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << "Area of a triangle is " << S << " m2" << endl;
    }
}

//---------------------------------------

#include <iostream>
#include <string>
#include "windows.h";
#include <cmath>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter fist number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;

    cout << "Min: " << min(a, min(b, c)) << endl;
    cout << "Max: " << max(a, max(b, c)) << endl;
}