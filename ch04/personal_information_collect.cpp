#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Person
{
    string first_name;
    string last_name;
    char grade;
    int age;
};

int main(int argc, char const *argv[])
{
    Person p{};
    cout << "你的姓是什么？\n";
    getline(cin, p.last_name);
    cout << "你的名字是什么？\n";
    getline(cin, p.first_name);
    cout << "你的成绩怎么样？\n";
    cin >> p.grade;
    cout << "你的年龄是？\n";
    cin >> p.age;
    cout << "你的信息是：\n姓名："
         << p.first_name << " " << p.last_name << endl
         << "成绩: " << char(p.grade + 1) << endl
         << "年龄: " << p.age;
    return 0;
}
