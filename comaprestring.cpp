//to compare 2 strings



#include<iostream>
#include <string>
using namespace std;
int main()
{
string str1 = "apple";
string str2 = "banan";
int result = str1.compare(str2);
if(result == 0){
cout << "Strings are equal." << endl;
}
else if(result < 0 )
{
cout << str1 << " comes before " << str2<< " lexicographically." << endl;
}
else{
cout << str1 << " comes after " << str2 << " lexicographically." << endl;
}
}
