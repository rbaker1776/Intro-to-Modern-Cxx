#include <iostream>


enum class Apple {};
enum class Orange {};


int main()
{
    Apple apple { 42 };
    Orange orange { 50 };
    Apple a { orange };
}
