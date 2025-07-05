#include <iostream>
// system header file & user defined heder files = # include "this.h"-->should be in double quotes and should be in the same directory

using namespace std;
int M = 35; 

int main(){
    cout<<"hello cpp"<<endl;
    // << = icertion operator , >> is extraction operator
    int an = 57;
    cout<< "my fevorate number is "<<an<<endl;

    int a=4, b=5;
    cout<<"Operators in C++:"<<endl;
    cout<<"Following are the types of operators in C++"<<endl;
    // Arithmetic operators
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;

    // Assignment Operators --> used to assign values to variables
    // int a =3, b=9;
    // char d='d';

    // Comparison operators
    cout<<"Following are the comparison operators in C++"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl; 

    // Logical operators
    cout<<"\nFollowing are the logical operators in C++"<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl; 
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl; 
    cout<<"The value of this logical not operator (!(a==b)) is:"<<(!(a==b))<<endl; 


    // Bitwise operators
    cout<<"\nFollowing are the bitwise operators in C++"<<endl;
    cout<<"The value of a & b is "<<(a&b)<<endl;
    cout<<"The value of a | b is "<<(a|b)<<endl;
    cout<<"The value of a ^ b is "<<(a^b)<<endl;
    cout<<"The value of ~a is "<<(~a)<<endl;    
    cout<<"The value of a << 2 is "<<(a<<2)<<endl; // left shift operator indirectly multiplies by 2^n
    cout<<"The value of a >> 2 is "<<(a>>2)<<endl; // right shift operator indirectly divides by 2^n
    cout<<"The value of a << 1 is "<<(a<<1)<<endl; // left shift operator
    cout<<"The value of a >> 1 is "<<(a>>1)<<endl; // right shift operator


    int A, R, M;
    cout<<"\nEnter a number for A: "<<endl;
    cin>>A;
    cout<<"Enter a number for R: "<<endl;
    cin>>R;
    cout<<"the sum is "<<A+R<<endl;
    cout<<"The globel M is "<<::M; // using (::)scope resolution operator to access global variable M(:: this is way to access global variable)


    // ************************Float, Double & Long Double literals in C++ *********************
    // Float is 4 bytes & double is 8 bytes & long double is 16 bytes
    // while we using double & float at same time then it will prefer double over float to handel this we need to provide float value as ex. 1.2f or 1.2F & also we can done long float as ex. 1.2l or 1.2L or long double as ex. 1.2L or 1.2l
    // we can also use typecast to convert double to float ex. (float)1.2    
    float d = 34.4F;
    long double e = 34.4L;
    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    cout<<"The size of d is "<<sizeof(d)<<endl;
    cout<<"The size of e is "<<sizeof(e)<<endl;
    cout<<"The value of d is "<<d<<endl;
    cout<<"The value of e is "<<e<<endl;  


    // ************************Constants in C++ *********************
    const int ab = 3;
    cout<<"\n\nThe value of ab is "<<ab<<endl;
    // ab = 4; // this will give error because ab is constant

    // ************************Typecasting in C++ *********************
    int bc = 446;
    float cd = 4.5;
    cout<<"\n\nThe value of bc is "<<bc<<endl;
    cout<<"The value of cd is "<<cd<<endl;
    cout<<"The value of cd is "<<int(cd)<<endl;
    cout<<"The value of cd is "<<(int)cd<<endl;
    cout<<"The value of bc is "<<float(bc)<<endl;   
    cout<<"The value of bc is "<<(float)bc<<endl;   

    // ************************Refrence Veriable in C++ *****************
    // Rohandas --> rohu --> dengerous coder --> nithala 
    float x = 4.5;
    float &y = x;
    cout<<"\n\nThe value of x is "<<x<<endl;
    cout<<"The value of y is "<<y<<endl;


    return 0;
}
