#include<stdio.h>
#include<iostream>
#include<unistd.h>
#include<string>
#include<cstring>
using namespace std;


int main()
{
int manager = 0;
int total_space = 0;
int actual_space = total_space;
string files[total_space];
bool loop = false;
string file_name = "nil";
cout << "insert space of your computer:";
cin >> total_space;
loop = true;
while(loop == true)
{
cout << "\n\ninsert file name or command:";
cin >> file_name;
actual_space -= 1;
if(file_name == "stop")
{
loop = false;
cout << "\nin system setup variable loop";
cout << "\nold value = true";
cout << "\nactual value = false";
}
if(file_name == "set_space")
{
actual_space += 1;
cout << "insert space to set:";
cin >> total_space;
actual_space = total_space;
}
if(file_name == "debug")
{
cout << "manager = ";
cout << manager;
cout << "loop = ";
cout << loop;
cout << "actual_space = ";
cout << actual_space;
cout << "total_space = ";
cout << total_space;
}
}
}
