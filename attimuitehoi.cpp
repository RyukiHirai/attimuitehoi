
// attimuitehoi.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include"defalut.h"
#include"hoi.h"
#include"player.h"
#include"person.h"
#include"enemy.h"
using namespace std;
const char* JANKENHAND[] = { "nonn","パー", "チョキ","グー" };

int janken(person& p1,person& p2 )
{
  

    cout << "じゃんけん" << endl;
    cout << p1.getname() << ">" << JANKENHAND[p1.playjanken()] << endl;
    cout << p2.getname() << ">" << JANKENHAND[p2.playjanken()] << endl;


     if (p1.gethand() == p2.gethand())
     {
         return janken(p1, p2);
     }
    else if (p1.gethand() == 1 && p2.gethand() == 3)
    {
        p1.setjankenwin();
    }
    else if (p1.gethand() == 2 && p2.gethand() == 1)
    {
        p1.setjankenwin();
    }
    else if (p1.gethand() == 3 && p2.gethand()==2)
    {
        p1.setjankenwin();
    }
    else 
    {
        p2.setjankenwin();
    }

}

int hoi(person& p1, person& p2)
{
    return 0;
}

void result(person& p1, person& p2)
{
    if (p1.getjankenwin())
    {
        cout << p1.getname() << "勝ち" << endl;
    }
    else if (p2.getjankenwin())
    {
        cout << p2.getname() << "勝ち" << endl;
    }
    else
    {
        cout << "エラー" << endl;
    }
}

int main()
{
    srand((unsigned int)time(NULL));
    player player("ore");
    enemy enemy;
    janken(player, enemy);
    result(player,enemy);
}


// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
