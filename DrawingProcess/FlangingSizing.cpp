//
// Created by Su Heng on 2021/6/28.
//
/**
 * 翻边整形工艺
 */
#include <iostream>
#include "FlangingSizing.h"
using namespace std;

FlangingSizing::FlangingSizing(double partLength, double partWidth, double partHeight) : partLength(partLength),
                                                                                         partWidth(partWidth),
                                                                                         partHeight(partHeight) {}

void FlangingSizing::calculate() {

    cout << "请输入模具结构："<< endl;
    cout << "1.一般结构\n" << "2.压料板结构\n" << "3.一般CAM\n" << "4.互动CAM\n";
    int judgement;
    cin >> judgement;
    if (judgement == 1){
        normalMethod();
    } else if (judgement == 2){
        otherMethod();
    }
}

/**
 * 一般结构
 * @return
 */
void FlangingSizing::normalMethod() {
    if (DrawingProcess::isAuto){//自动化
        mouldLength = partLength + 900;
        mouldWidth = partWidth + 600;
    }else{//手工
        mouldLength = partLength + 800;
        mouldWidth = partWidth + 600;
    }
}

/**
 * 压料板穿刀
 * @return
 */
void FlangingSizing::otherMethod() {
    if (DrawingProcess::isAuto) {//自动化
        mouldLength = partLength + 900;
        mouldWidth = partWidth + 900;
    } else {//手工
        mouldLength = partLength + 900;
        mouldWidth = partWidth + 900;
    }
}
    /**
     * 一般CAM
     */
    void normalCAMMethod(){
        cout << "nomalCAM";
    }

    /**
     * 互动CAM
     */
    void interactionCAMMethod(){
        cout << "interactionCAM";
    }

double FlangingSizing::getMouldLength() const {
    return mouldLength;
}

double FlangingSizing::getMouldWidth() const {
    return mouldWidth;
}

double FlangingSizing::getMouldHeight() const {
    return mouldHeight;
}
