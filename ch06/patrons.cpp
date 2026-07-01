#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;

struct patron
{
    std::string name;
    double amount;
};

std::string convertToCSV(std::vector<patron> patrons);

int main(int argc, char const *argv[])
{
    std::ofstream fout{};
    int num = 0;
    std::vector<patron> partons{};
    cout << "请输入捐款人数：";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        patron &p = partons.emplace_back();
        cout << "捐款人" << i + 1 << "号\n";
        cout << "姓名：";
        cin >> p.name;
        cout << "捐款金额：";
        cin >> p.amount;
    }
    fout.open("patrons.csv");
    fout << convertToCSV(partons);
    fout.close();
    return 0;
}

std::string convertToCSV(std::vector<patron> patrons)
{
    std::string str = "捐赠者,金额\n";
    for (auto &&patron : patrons)
    {
        str += patron.name + "," + std::to_string(patron.amount) + "\n";
    }
    return str;
}
