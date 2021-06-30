//
// Created by Su Heng on 2021/6/28.
//

#ifndef INDUSTRIALMOULD_FLANGINGSIZING_H
#define INDUSTRIALMOULD_FLANGINGSIZING_H

#include "DrawingProcess.h"
class FlangingSizing : public DrawingProcess{
public:
    FlangingSizing(double partLength, double partWidth, double partHeight);



    void normalCAMMethod();

    void interactionCAMMethod();

    void calculate() override;

    double getMouldLength() const;

    double getMouldWidth() const;

    double getMouldHeight() const;

private:
    void normalMethod() override;

    void otherMethod() override;
    bool isAuto;
    double partLength,partWidth,partHeight;//零件长宽高初始数据
    double mouldLength = 0,mouldWidth = 0,mouldHeight = 0;
};


#endif //INDUSTRIALMOULD_FLANGINGSIZING_H
