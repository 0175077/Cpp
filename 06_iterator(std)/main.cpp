#include <iostream>
#include <list>

using namespace std;

void printData(list<int>::iterator iterBegin, list<int>::iterator iterEnd);

int main()
{
    list<int> listData{};

    list<int>::iterator iter{};

    listData.push_back(3);
    listData.push_back(5);
    listData.push_back(7);
    listData.push_back(8);
    listData.push_back(2);

    printData(listData.begin(), listData.end());
    iter = listData.begin();
    while (iter != listData.end())
    {
        list<int>::iterator iterNext = iter;
        iterNext++;

        if (*iter >= 5)
            listData.erase(iter);

        iter = iterNext;


        // 이렇게 해도 되지만 위에 처럼 하자(후증감)
        //if (*iter >= 5)
        //    listData.erase(iter++);
        //else
        //    iter++;
    }

    printData(listData.begin(), listData.end());
}

void printData(list<int>::iterator iterBegin, list<int>::iterator iterEnd)
{
    list<int>::iterator iter = iterBegin;
    while (iter != iterEnd)
    {
        printf("%d ", *iter);
        iter++;
    }
    printf("\n");
}
