
#include <iostream>
#include <list>


int main() {
  std::list<int> list;

  // 0,1,2......9
  for (int i = 0; i < 10; ++i) {
    list.emplace_back(i);
  }

  // 中身を出力
  for (auto it : list) {
    std::cout << it << std::endl;
  }

  // 5だけ消す
  for (auto it : list) {
    if (it == 5) {
      // エラーでないけどコンパイルエラー関数なのにカッコないぞごら
      list.erase;

      // 引数一致してねぇぞごら
      list.erase();

      // それじゃねぇぞごら
      list.erase(it);
    }
  }

  // イテレータを使って消去(今僕が知ってる処理の一つ)
  // めんどいのでautoを使う
  auto it = list.begin();    // 配列の先頭のイテレータを渡す(先頭のアドレス)
  while (it != list.end()) { // itがlistの最後の要素にたどり着くまで回す
    if (*it == 5) {          // itはポインタなので*をつけて中身を参照する
      it = list.erase(it);   // listのit番目の要素を消す
    } else {
      ++it;                  // erase関数は消した要素の次のアドレスを渡すので
    }                        // erase関数を使用していないwhile内のみアドレスを進める処理を書く
  }

  // 要素が消えているか確認
  for (auto it : list) {
    std::cout << it << std::endl;
  }
}