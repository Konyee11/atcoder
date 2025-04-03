# AtCoder Practice with C++

This repository contains my solutions to problems from AtCoder, written in C++.  
It is organized in a monorepo style, with each problem placed in its own directory.

---

# AtCoder練習用C++リポジトリ

このリポジトリは、AtCoderの問題をC++で解いた解答をまとめたものです。  
各問題ごとにディレクトリを分けたモノレポ形式で管理しています。

## 📂 Directory Structure / ディレクトリ構成

```
AtCoder/
├── APG4b/                # APG4b チュートリアル問題の回答
├── problems/              # 問題をまとめたディレクトリ
│   ├── abc123_a/
│   │   └── main.cpp       # 解答コード
│   ├── abc124_b/
│   │   └── main.cpp
├── templates/
│   └── cpp/               # 問題ディレクトリ作成用テンプレート
│       ├── main.cpp
│       ├── Makefile
│       └── stdin.txt
├── scripts/
│   └── newp               # 問題ディレクトリ作成スクリプト
├── include/
│   └── bits/stdc++.h      # 自作のプリコンパイル済みヘッダ
├── Makefile               # 共通のビルド設定
├── .clangd                # clangd用設定ファイル
└── ...
```

## 📌 Features / 特徴

- 📘 **APG4b対応**：AtCoder公式のC++入門チュートリアル「APG4b」の演習問題を `APG4b/` ディレクトリに整理。

- ⚙️ **Makefileの柔軟な実行方法**：`make run`, `make norun`, `make clean` など複数のターゲットを用意し、実行やクリーンアップも簡単。

- 🧰 **テンプレートと自動生成スクリプト**：`templates/cpp/` にテンプレート（`main.cpp`, `Makefile`, `stdin.txt`）を配置し、`scripts/newp` により問題ディレクトリを自動生成可能。

- 📁 **モノレポ形式**：各問題を `abc321_b/` のようにディレクトリ単位で管理。
- 🧠 **自作`bits/stdc++.h`**：`~/AtCoder/include` に配置してヘッダ管理を簡素化。
- 🛠️ **clangd対応**：補完や静的解析が効くよう `.clangd` を設置。
- 📦 **Makefileによるビルド**：各ディレクトリにMakefileを置き、簡単にビルド可能。
- 🚀 **C++17以降を使用**：最新のC++機能を活用しています。

## 🛠️ How to Compile / コンパイル方法

問題ディレクトリに移動して、以下のようにビルド＆実行が可能です：

```sh
cd problems/abc321_b
make        # ビルドのみ
make run    # stdin.txt を入力として実行
make norun  # 入力なしで実行
make clean  # バイナリ削除
```sh
cd abc321_b
make
./main
```

## 🎯 Purpose / 目的

このリポジトリは以下を目的としています：

- 競技プログラミングの成長記録
- C++の実践的なスキル向上
- 問題解決アプローチの試行錯誤の場

## 🗕️ Daily Practice Log / 日々の取り組み

毎日1問ずつAtCoderの問題に取り組んでいます。  
主にABC（AtCoder Beginner Contest）を中心に解いています。

## ⚙️ Project Setup / プロジェクト作成方法

新しい問題を追加する際は、以下のコマンドでテンプレートから自動生成できます：

```sh
scripts/newp abc321_b
```

このコマンドにより、`templates/cpp` 以下のファイルを `problems/abc321_b/` にコピーし、エディタで `main.cpp` を開きます。

---

## 🧠 Environment / 開発環境

- **Compiler**: g++ (C++17以降)
- **Editor**: Neovim + `lazy.nvim` + `clangd`
- **Platform**: macOS

## 📬 Contact / お問い合わせ

C++や競技プログラミングについての意見交換など、お気軽にご連絡ください！

