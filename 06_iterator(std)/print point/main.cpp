#include <iostream>
#include <list>

using namespace std;

void print(list<int>* pList);

int main()
{
    list<int> list{};
    list.push_back(5);
    list.push_back(3);
    list.push_back(3);
    list.push_back(3);
    list.push_back(7);

    print(&list);
}

void print(list<int>* pList)
{
    list<int>::iterator iter = pList->begin();

    while (iter != pList->end())
    {
        printf("%d ", *iter);
        iter++;
    }
    printf("\n");
}
