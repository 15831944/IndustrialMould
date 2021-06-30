//
// Created by Su Heng on 2021/6/28.
//

#ifndef INDUSTRIALMOULD_DRAWING_H
#define INDUSTRIALMOULD_DRAWING_H

#include "DrawingProcess.h"

class Drawing: public DrawingProcess {
public:
public:
    Drawing():DrawingProcess(){}

    Drawing(double partLength, double partWidth, double partHeight);

    void calculate() override;

    double getMouldLength() const;

    double getMouldWidth() const;

    double getMouldHeight() const;

private:
    void otherMethod() override;

    void normalMethod() override;
    bool isAuto;
    double partLength,partWidth,partHeight;//零件长宽高初始数据
    double mouldLength = 0,mouldWidth = 0,mouldHeight = 0;
};
#endif //INDUSTRIALMOULD_DRAWING_H
