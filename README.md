# 1st
first

## 開発環境

- vscode
- extension [c/c++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)
- extension [Clang-Format](https://marketplace.visualstudio.com/items?itemName=xaver.clang-format)

#### extension セッティング

Editor: Format On Save を有効に。

## ビルド

mkdir build
cd build
cmake -DCMAKE_CXX_COMPILER="clang++" ..