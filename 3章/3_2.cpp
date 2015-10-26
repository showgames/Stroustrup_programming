//  ユーザーから受け取ったマイルの入力をキロメートルに変換して出力するプログラム

#include "../std_lib_facilities.h"

int
main()
{
    double mile = 0;
    cout << "Please enter a mile:\n";
    cin >> mile;
    cout << mile << " mile == " << mile * 1.609 << " km\n";
}
