#include <iostream>
#include <map>
#include <string>

using namespace std;
template  <typename K, typename Y>
void print_map(map<K, Y>& m)
{
    for(auto itr = m.begin(); itr !=m.end(); ++itr)
    {
        cout << itr->first << " : " << itr->second << endl;
    }
}
int main()
{
    map<string, double> pitcher_list;
    pitcher_list.insert(pair<string, double>("Ryu", 1.36));
    pitcher_list.insert(make_pair("Kim", 2.66));
    pitcher_list.insert(make_pair("Bell", 3.38));
    pitcher_list.insert(make_pair("You", 2.77)); // 키값의 의해 대문자 알파벳 순 -> 소문자
    pitcher_list["you"] = 2.77;
    print_map(pitcher_list);


    cout << pitcher_list["Ryu"] << endl; // value값을 도출하기 위한 식


    if(pitcher_list.find("unknown") != pitcher_list.end()){
         cout << pitcher_list["unknown"] << endl;

    print_map(pitcher_list);

    }
    print_map(pitcher_list);
    return 0;
}
