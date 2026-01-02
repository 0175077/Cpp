#include <iostream>
#include <map>

int main()
{
    std::map<int, char> mapData{};

    mapData.insert(std::pair<int, char>(5, 'a'));
    mapData.insert(std::make_pair(2, 'c'));
    mapData.insert(std::map<int, char>::value_type(10, 'd'));
    mapData.insert({ 99,'z' });
    mapData[999] = 'f';


    // insert 방법 5가지
    // 
    // mapData.insert({ 99,'z' });
    // 이게 14이후 유니폼 초기화 들어오면서 쓰기 시작했는데
    // 왜 이렇게 쓸 수 있게 됐는지 과정임
    // make_pair는 함수템플릿이라 쓸데없이 공간에 함수하나 더 만들어서 쓰는거니 별로임
    // 게다가 자료형도 명확히 해줘야 하는데 make_pair<int,char>처럼 근데 이렇게 쓰면
    // pair랑 뭐가 다름? 이렇게 됨
    // 
    // mapData[999] = 'f'; 이건 성공 실패 유무가 없어서 절대 쓰지 말아야함
}
