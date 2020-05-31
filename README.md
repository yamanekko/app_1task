# EV3RT用mruby yamanekko版用サンプルコード

## これはEV3RTβ7-2用です。Rubyのコード以外のC言語のプログラムはEV3RT1.0では動かないので気をつけてください（for EV3RTver1.x https://github.com/yamanekko/app_1task4ev3rt-v1）

EV3上で動作するmrubyのサンプルコードです。
EV3RTのタスクはメインタスクのみです。Rubyのファイル名はmain_task.rbとしてください。
bin/app_1task を使用すればmain_task.rb以外のファイルは必要ありませんが、ご自身でビルドしたい方のためにコードも提供しています。

同梱しているmain_task.rbは、
超音波センサーが30cm以内に障害物を検知している間、LEDが緑色に光り、検出しなくなると消灯します。
executeメソッドの中身を自由に書き換えて使用してください。

## 使い方
https://qiita.com/yamanekko/items/f5f633df005ca7144cca
