#include<iostream>
using namespace std;
int main()
{
int size;
cout<<"enter the size of array : ";
cin >> size;
int arr[size];
for(int i = 0 ; i < size ; i++){
cout<<"enter the"<<i<<"element";
cin>>arr[i];
}
for(int i = 0 ; i < size ; i++){
cout<<arr[i];
}
}
#include<iostream>
using namespace std;
int main()
{
string str;
cin>>str;
int n = str.length();
for (int i = 0; i < n / 2; ++i) {
swap(str[i], str[n - i - 1]);
}
cout << "Reversed string: " << str << endl;
return 0;
}
