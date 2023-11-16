#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
using namespace std;

int main()
{

/*
---------------------------------------------------------------------------------
Uncomment any one task to run it.
---------------------------------------------------------------------------------
*/
/*
---------------------------------------------------------------------------------
TASK 1
---------------------------------------------------------------------------------
*/
/*
    int num;
    cout << "Enter the number: ";
    cin>>num;

    cout<<"Factors of "<<num<<endl;

    for (int i = 1; i <= num; i++) {
        if (num%i==0) {
            cout<<i<<endl;
        }
    }
*/

/*
---------------------------------------------------------------------------------
TASK 2
---------------------------------------------------------------------------------
*/

//Output: x is 5 and y is 10


/*
---------------------------------------------------------------------------------
TASK 3
---------------------------------------------------------------------------------
*/
/*
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    if (num > 10 && num <=20) {
        cout<<"1";
    }
    else {
        cout<<"0";
    }
*/

/*
---------------------------------------------------------------------------------
TASK 4
---------------------------------------------------------------------------------
*/
/*
    int N, factors, i, j;
    cout<<"Enter value of N: ";
    cin>>N;

    i = N;
    while (i >= 2) {
        factors = 0;

        j = 1;
        while (j <= i) {
            if (i%j==0) {
                factors++;
            }
            j++;
        }

        if (factors==2) {
            cout<<"The highest prime number lower than N is: "<<i;
            break;
        }

        i--;
    }
*/

/*
---------------------------------------------------------------------------------
TASK 5
---------------------------------------------------------------------------------
*/
/*
    string str1, str2, reversed;
    reversed = "";
    cout<<"Enter 1st String: ";
    cin>>str1;
    cout<<"Enter 2nd String: ";
    cin>>str2;

    if (str1 == str2) {
        for (int i = 0; i < str1.length(); i++) {
            reversed = str1[i] + reversed;
        }
        cout<<"Strings are equal. Reversed string is: ";
        cout<<reversed;
    }
    else {
        cout<<"Strings are unequal";
    }
*/

/*
---------------------------------------------------------------------------------
TASK 6
---------------------------------------------------------------------------------
*/
/*
    int dividend, divisor, remainder, quotient;
    cout<<"NOTE: Dividend must be greater than divisor"<<endl;
    cout<<"Enter dividend: ";
    cin>>dividend;
    cout<<"Enter divisor: ";
    cin>>divisor;

    if (dividend < divisor) {
        cout<<"Please Enter a dividend greater than divisor.";
        return 1;
    }
    remainder = dividend;

    for (int i = 1; i <= dividend; i++) {
        remainder -= divisor;

        if (remainder < divisor) {
            quotient = i;
            break;
        }
    }

    cout<<dividend<<" / "<<divisor<<" = "<<quotient;
*/

/*
---------------------------------------------------------------------------------
TASK 7
---------------------------------------------------------------------------------
*/
/*
    string str, result;
    bool found;

    cout<<"Enter String: ";
    cin>>str;
    result = "";

    for (int i = 0; i < str.length(); i++) {
        found = false;
        for (int j = 0; j < result.length(); j++) {
            if ( tolower(str[i]) == tolower(result[j]) ) {
                found = true;
            }
        }

        if (found == false) {
            result += str[i];
        }
    }

    cout<<"Resultant String: "<<result;
/*

/*
---------------------------------------------------------------------------------
TASK 8
---------------------------------------------------------------------------------
*/
/*
    int a[5] = {1,2,3,4,5};
    cout<<"Adding 6,7,8 to the array..."<<endl;
    int newA[8];

    for (int i = 0; i<5; i++) {
        newA[i] = a[i];
    }

    newA[5] = 6;
    newA[6] = 7;
    newA[7] = 8;

    cout<<"Printing elements of array"<<endl;
    for (int i = 0; i<8; i++) {
        cout<<newA[i]<<" ";
    }

*/

/*
---------------------------------------------------------------------------------
TASK 9
---------------------------------------------------------------------------------
*/
/*
    int a, b, c, X, sum, arr[10] = {1,2,3,4,5,6,7,8,9,10};
    bool found = false;
    cout<<"Enter integer X: ";
    cin>>X;

    for (int i = 0; i<10; i++) {
        for (int j = 0; j<10; j++) {
            if (i == j)
                continue;

            for (int z = 0; z<10; z++) {
                if (z == i || z == j)
                    continue;

                sum = arr[i] + arr[j] + arr[z];
                if (sum == X) {
                    found = true;
                    a = arr[i];
                    b = arr[j];
                    c = arr[z];
                    break;
                }
            }
            if (found)
                break;
        }
        if (found)
            break;
    }
    if (found)
        cout<<"Triplet is "<<a<< " + "<<b<<" + "<<c;
    else
        cout<<"No Triplet found";
*/

/*
---------------------------------------------------------------------------------
TASK 10
---------------------------------------------------------------------------------
*/
/*
    int temp, len = 6, arr[len] = {76, 56, 45, 90, 72, 100};

    for (int j = 0; j<(len-1); j++) {
        for (int i = 0; i<(len-1); i++) {
        if (arr[i]>arr[i+1]) {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            }
        }
    }


    cout<<"Final Array: {";
    for (int i = 0; i<len; i++) {
        cout<<arr[i];
        if (i == len-1)
            continue;
        cout<<",";
    }
    cout<<"}";
*/

    return 0;
}

