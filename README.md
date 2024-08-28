# Exp-7 Arrays-and-String
# AIM 
To create array in c++ and doing basic operations on it.

# Software Used
VS Code and Cpp Online Compiler

# Problem Statement

1.) Write a c++ code to make an array.

2.) Write a c++ code to make an array with elements in reverse order in which user entered.

3.) Write a c++ code to make do sum and average of array elements.

4.) Write a c++ code to find maximum and minimum element of an array.

5.) Write a c++ code to search the position of element, number of time it is occuring in an array.
 
 6.) Write a c++ program to take input from user. 

 7.) Write a c++ program to concatenate the string on c++. 

 8.)  Write a c++ program to reverse string. 

 9.)  Write a c++ program to check a palindrome.


# Theory
In C++, an array is a data structure that is used to store multiple values of similar data types in a contiguous memory location.

 C++ strings are sequences of characters stored in a char array. Strings are used to store words and text. They are also used to store data, such as numbers and other types of information. Strings in C++ can be defined either using the std::string class or the C-style character arrays.

# Program Codes

```javascript
//Array
#include<iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << "Enter number of elements";
    cin >> n;
    int a[n];
    cout << " Enter array elements";
    for ( int i =0; i <n ; i++ )
    { cin >> a[i];
     
    }
       for (int i: a)
     {
        cout << " "<< i ;
     } 
    return 0;
}

//Reverse array
#include<iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << "Enter number of elements";
    cin >> n;
    int a[n];
    cout << " Enter array elements";
    for ( int i =0; i <n ; i++ )
    { cin >> a[i];
     
    }
       for (j = n-1 ; j>=0; j--)
     {
        cout << " "<< a[j];
     } 
    return 0;
}

//Sum & average of array elements
#include<iostream>
using namespace std;
int main()
{
     int n, i, j;
     float avg, s = 0;
cout << "Enter the number of elements: ";
cin >> n;
int a[n];
cout << "Enter array elements: ";
for( i = 0; i<n ; i++)
{
    cin >> a[i];
}

for (j= 0 ; j<n; j++)
{
    s = a[j]+s;
}
avg = s/n;
cout << "The sum of elements of the givne array is: "<<s<<endl;
cout << "The average of the given array is: "<< avg<<endl;

return 0;
}

//Maximum and minimum
#include<iostream>
using namespace std;
int main()
{
     int n, i, j, max, min;
cout << "Enter the number of elements: ";
cin >> n;
int a[n];
cout << "Enter array elements: ";
for( i = 0; i<n ; i++)
{
    cin >> a[i];
}
max = a[0];
min = a[0];
for (j= 1 ; j<n; j++)
{
 if (max<a[j])

 {
    max = a [j];
 }
 if (min > a[j])
 {
    min = a[j];
 }
}
cout <<"The maximum element in the given array is: "<<max<<endl;
cout << " The minimun element in the array is: "<<min<<endl;
return 0;

}

//Search element
#include<iostream>
using namespace std;
int main()
{
     int n, i, j, s, c = 0, flag = 0;
cout << "Enter the number of elements: ";
cin >> n;
int a[n];
cout << "Enter array elements: ";
for( i = 0; i<n ; i++)
{
    cin >> a[i];
}
cout << "Enter an element to be searched in an array: ";
    cin >> s;
for (j= 0 ; j<n; j++)
{
    if ( a[j]==s)
    {
cout<< "The element"<<" "<< s<< " " << "is present at location: "<<j<<endl;
c++;
flag =1;
    }
}

if( flag ==0)
{
    cout<< "The element"<< " "<< s << " "<< "is not present in the given array";
}
else
{
    cout << "The element" << " "<< s << " "<< "occurs"<< " "<< c << " "<< "times.";
}
return 0;
}
//USER INPUT
#include <iostream>
using namespace std;
int main()
{
    char s[]= "Prakhar";
    cout<<s<<endl;
    return 0;
}


//CONCATENATION
#include<iostream>
using namespace std;
int main() 
{
    string name("Prakhar");
    string surname("Gupta");
    name.append(surname);
    cout<<name<<endl;
}


//REVERSE STRING
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
string a= "Prakhar";
reverse(a.begin(), a.end());
cout<<"reverse string is:"<<a<<endl;
return 0;
}

//PALINDROME
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() 
{
    string s1, s2;
    cout << "Enter a word to check";
    cin>>s1;
    s2=s1;
    reverse(s1.begin(), s1.end());
    if (s2==s1) 
    {
        cout<<"Yes! It is a palindrome";
    }
    else cout<<"No! It is not a palindrome";
}

```
# Output
## 1) Array
![Exp 7 Printing array element](https://github.com/user-attachments/assets/6894c78e-ed3b-4661-94dd-c58307fe5a2e)

## 2) Reverse Array
![Exp 7 REverse array](https://github.com/user-attachments/assets/370cf562-4c45-450f-99c6-0ba67f55c1a9)

## 3) Sum and average
![Exp 7 Arraysumavg](https://github.com/user-attachments/assets/fdaa77cc-24bc-4d20-b5f6-f00fd630d496)

## 4) Maximum and Minimum
![Exp 7 Minmax](https://github.com/user-attachments/assets/ee613ddc-bfb4-4d5f-9db0-3a4768f12bb2)

## 5) Search Element 
![Exp 7 element search](https://github.com/user-attachments/assets/a3ff1b2c-e243-40d7-bd7a-a149480085bb)


## 6) User Input
![Exp 7 string User](https://github.com/user-attachments/assets/c4ee8fd3-7410-452d-8f43-c2241e752efb)

## 7) Concatenation
![Exp 7 Concatination](https://github.com/user-attachments/assets/5bbb6bbb-19c6-4fff-bcbf-11aa93b647bb)

## 8) Reverse String
![Exp  7 reverse string](https://github.com/user-attachments/assets/fcad8bd6-7948-4291-a334-a675f9704bec)

## 9) Palindeome
![Exp 7 Palindrome](https://github.com/user-attachments/assets/0901984c-22ab-4941-b72f-f997fd90e314)
# Conclusion

We learnt to create an array and operate it. 

We learnt to search element in the array and getting the sum and average of the elements.

We learnt to do concatenation of strings, making and checking palindromes, reversing the string in c++..
