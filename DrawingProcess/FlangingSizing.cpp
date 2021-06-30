//
// Created by Su Heng on 2021/6/28.
//
/**
 * �������ι���
 */
#include <iostream>
#include "FlangingSizing.h"
using namespace std;

FlangingSizing::FlangingSizing(double partLength, double partWidth, double partHeight) : partLength(partLength),
                                                                                         partWidth(partWidth),
                                                                                         partHeight(partHeight) {}

void FlangingSizing::calculate() {

    cout << "������ģ�߽ṹ��"<< endl;
    cout << "1.һ��ṹ\n" << "2.ѹ�ϰ�ṹ\n" << "3.һ��CAM\n" << "4.����CAM\n";
    int judgement;
    cin >> judgement;
    if (judgement == 1){
        normalMethod();
    } else if (judgement == 2){
        otherMethod();
    }
}

/**
 * һ��ṹ
 * @return
 */
void FlangingSizing::normalMethod() {
    if (DrawingProcess::isAuto){//�Զ���
        mouldLength = partLength + 900;
        mouldWidth = partWidth + 600;
    }else{//�ֹ�
        mouldLength = partLength + 800;
        mouldWidth = partWidth + 600;
    }
}

/**
 * ѹ�ϰ崩��
 * @return
 */
void FlangingSizing::otherMethod() {
    if (DrawingProcess::isAuto) {//�Զ���
        mouldLength = partLength + 900;
        mouldWidth = partWidth + 900;
    } else {//�ֹ�
        mouldLength = partLength + 900;
        mouldWidth = partWidth + 900;
    }
}
    /**
     * һ��CAM
     */
    void normalCAMMethod(){
        cout << "nomalCAM";
    }

    /**
     * ����CAM
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
