#include"libOne.h"
void gmain(){
    window(1000, 1000);
    while (notQuit){
        //�P�����x�N�g��
        float vx = mathMouseX;
        //�x�N�g���̑傫��
        float mag = vx < 0 ? -vx : vx;
        //�x�N�g���̐��K��
        float nvx = vx / mag;
        //�N���A���č��W��`��
        clear(200);
        mathAxis(5.1f);
        //�x�N�g����`��
        strokeWeight(10);
        stroke(0);
        mathArrow(0, 0, vx, 0);
        //���K���x�N�g����`��
        stroke(255, 0, 0);
        mathArrow(0, 0, nvx, 0);
        //�e�L�X�g���`��
        textSize(50);
        text((let)"vec(" + vx + ")", 0, 50);
        text((let)"mag:" + mag, 0, 100);
        text((let)"nvec(" + nvx + ")", 0, 150);
    }
}
