//
// Created by Su Heng on 2021/6/28.
//
/**
 * ���ӹ��ռ���ģ�߳���
 */
#include <iostream>
#include "Drawing.h"
using namespace std;

Drawing::Drawing(double partLength, double partWidth, double partHeight) : partLength(partLength), partWidth(partWidth),
                                                                           partHeight(partHeight) {}

void Drawing::calculate() {

        cout << "������ģ�߽ṹ��"<< endl;
        cout << "1.һ��ṹ\n" << "2.����ṹ\n";
        int judgement;
        cin >> judgement;
    if (judgement == 1){
        normalMethod();
    } else if (judgement == 2){
        otherMethod();
    }
    }

    void Drawing::normalMethod() {
        if (DrawingProcess::isAuto){
            mouldLength =  partLength + 900;
            mouldWidth = partWidth + 700;
        }else{
            mouldLength = partLength + 800;
            mouldWidth = partWidth + 600;
        }
    }


/**
 * ��ʽ�ṹ
 * @return
 */
    void Drawing::otherMethod()  {
        if (DrawingProcess::isAuto){
            mouldLength =  partLength + 1100;
            mouldWidth = partWidth + 850;
        }else{
            mouldLength = partLength + 1000;
            mouldWidth = partWidth + 800;
        }
    }

double Drawing::getMouldLength() const {
    return mouldLength;
}

double Drawing::getMouldWidth() const {
    return mouldWidth;
}

double Drawing::getMouldHeight() const {
    return mouldHeight;
}


