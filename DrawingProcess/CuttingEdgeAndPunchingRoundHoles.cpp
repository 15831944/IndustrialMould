//
// Created by Su Heng on 2021/6/28.
//
#include <iostream>
#include "CuttingEdgeAndPunchingRoundHoles.h"
using namespace std;

CuttingEdgeAndPunchingRoundHoles::CuttingEdgeAndPunchingRoundHoles(double partLength, double partWidth,
                                                                   double partHeight) : partLength(partLength),
                                                                                        partWidth(partWidth),
                                                                                        partHeight(partHeight) {}

void CuttingEdgeAndPunchingRoundHoles::calculate() {
    cout << "请输入模具结构："<< endl;
    cout << "1.一般结构\n" << "2.压料板穿刀\n" << "3.CAM\n";
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
    void CuttingEdgeAndPunchingRoundHoles::normalMethod(){
        if (DrawingProcess::isAuto){
            mouldLength = partLength + 1100;
            mouldWidth = partWidth + 600;
        }else{
            mouldLength = partLength + 1000;
            mouldWidth = partWidth + 600;
        }
    }

    /**
     * 压料板穿刀
     * @return
     */
    void CuttingEdgeAndPunchingRoundHoles::otherMethod(){
        if (DrawingProcess::isAuto){
            mouldLength = partLength + 1100;
            mouldWidth = partWidth + 900;
        }else{
            mouldLength = partLength + 1000;
            mouldWidth = partWidth + 900;
        }
    }

    /**
     * CAM方法
     */
    void camMethod(){
        cout << "CAM";
    }

double CuttingEdgeAndPunchingRoundHoles::getMouldLength() const {
    return mouldLength;
}

double CuttingEdgeAndPunchingRoundHoles::getMouldWidth() const {
    return mouldWidth;
}

double CuttingEdgeAndPunchingRoundHoles::getMouldHeight() const {
    return mouldHeight;
}

