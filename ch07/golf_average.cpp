#include <iostream>
using namespace std;

int input_score(double scores[], int length);
void display_score(const double scores[], int length);
double average(const double scores[], int length);

const int MAX = 10;

int main(int argc, char const *argv[])
{
    double scores[10] = {};
    int l = 0;
    cout << "请输入您的十次高尔夫成绩（输入q提前退出）\n";
    l = input_score(scores, MAX);
    cout << "您的成绩为：\n";
    display_score(scores, l);
    cout << "您的平均成绩为：" << average(scores, l);
    return 0;
}

int input_score(double scores[], int length)
{
    int i;
    for (i = 0; i < length; i++)
    {
        cout << "您的第" << i + 1 << "次成绩为：";
        if (!(cin >> scores[i]))
        {
            break;
        }
    }
    cout << "您一共输入了" << i << "次成绩\n";
    return i;
}

void display_score(const double scores[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << scores[i] << "\t";
    }
    cout << endl;
}

double average(const double scores[], int length)
{
    double total = 0;
    for (int i = 0; i < length; i++)
    {
        total += scores[i];
    }
    return total / length;
}
// SUCCESS