#include <list>
#include <iostream>
#include <iterator>
#include <cstdlib>
using namespace std;

//Сделать список из 10 рандомных элементов (от 1 до 10)
//отсортировать
//вывести

int main(){
    list<int> listA;
    list<int>::iterator it;
    for (auto i=0; i < 10; i++)
    {
       listA.push_back(rand() %10);
    }
    listA.sort();
    for (list<int>::iterator it = listA.begin(); it != listA.end(); it++)
    {
        cout << *it << " ";
    }
    
}