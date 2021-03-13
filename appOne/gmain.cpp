#include"libOne.h"
void gmain(){
    window(1000, 1000);
    while (notQuit){
        //１次元ベクトル
        float vx = mathMouseX;
        //ベクトルの大きさ
        float mag = vx < 0 ? -vx : vx;
        //ベクトルの正規化
        float nvx = vx / mag;
        //クリアして座標を描画
        clear(200);
        mathAxis(5.1f);
        //ベクトルを描画
        strokeWeight(10);
        stroke(0);
        mathArrow(0, 0, vx, 0);
        //正規化ベクトルを描画
        stroke(255, 0, 0);
        mathArrow(0, 0, nvx, 0);
        //テキスト情報描画
        textSize(50);
        text((let)"vec(" + vx + ")", 0, 50);
        text((let)"mag:" + mag, 0, 100);
        text((let)"nvec(" + nvx + ")", 0, 150);
    }
}
