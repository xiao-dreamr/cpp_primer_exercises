#include <iostream>
#include <string>
using namespace std;

struct box
{
    string maker;
    float height;
    float width;
    float length;
    float vol;
};

float compute_vol(box *pb);

void show_box(box b);

int main(int argc, char const *argv[])
{
    box b{};
    cout << "请分别输入盒子的制造商、高宽长：\n";
    cin >> b.maker;
    cin >> b.height;
    cin >> b.width;
    cin >> b.length;
    show_box(b);
    b.vol = compute_vol(&b);
    cout << "这个盒子的体积为：" << b.vol;
    return 0;
}

float compute_vol(box *pb)
{
    return pb->height * pb->length * pb->width;
}

void show_box(box b)
{
    cout << "制造商：" << b.maker << endl;
    cout << "长、宽、高：" << b.length << "，"
         << b.width << "，" << b.height << endl;
}
