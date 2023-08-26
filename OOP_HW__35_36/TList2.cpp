#include <iostream>
#include <iomanip>
#include <string>    // для string
#include <time.h>
#include "TList2.h"  // class TList<>
using namespace std;

#define RAND(Min,Max)  (rand()%((Max)-(Min)+1)+(Min))
struct LC { LC() { system("chcp 1251 > nul"); srand(time(0)); }~LC() { cin.get(); cin.get(); } } _;


// В существующий класс двусвязного списка добавить :
// a) перегрузить оператор +
// (оператор должен новый список, содержащего элементы
// обоих списков для которых вызывался оператор);
// b) перегрузить оператор *
// (оператор должен новый список, содержащего только общие
// элементы обоих списков для которых вызывался оператор).

int main()
{
    TList<string> list1("List 1");
    TList<string> list2("List 2");

    list1.AddTail("Val 1");
    list1.AddTail("Val 2");

    list2.AddTail("Val 2");
    list2.AddTail("Val 3");

    TList<string> mergedList = list1 + list2;       // оператор +
    cout << "Merged List:\n" << mergedList << endl; // новый список, содержащего элементы обоих списков

    TList<string> commonList = list1 * list2;       // оператор *
    cout << "Common List:\n" << commonList << endl; // новый список, содержащего только общие элементы обоих списков
}