#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Pizza
{
    string brand;
    double d;
    double weight;
};

int main(int argc, char const *argv[])
{
    Pizza *p = new Pizza;
    cout << "披萨公司名？\n";
    getline(cin, p->brand);
    cout << "披萨的直径是？\n";
    cin >> p->d;
    cout << "披萨的重量是？\n";
    cin >> p->weight;
    cout << "披萨的信息是：\n公司："
         << p->brand << endl
         << "尺寸: " << p->d << endl
         << "质量: " << p->weight;
    return 0;
}
