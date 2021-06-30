//
// Created by Su Heng on 2021/6/28.
//

#ifndef INDUSTRIALMOULD_DRAWINGPROCESS_H
#define INDUSTRIALMOULD_DRAWINGPROCESS_H
class DrawingProcess{
public:
    DrawingProcess();
    virtual void calculate();
    double mouldHeightCalculation(double partHeight,double mouldLength);
    double partHeightJudgement(double partHeight,int baseHeight);
    virtual void normalMethod();
    virtual void otherMethod();

    double getPartLength() const;

    void setPartLength(double partLength);

    double getPartWidth() const;

    void setPartWidth(double partWidth);

    double getPartHeight() const;

    void setPartHeight(double partHeight);

    double getMouldLength() const;

    void setMouldLength(double mouldLength);

    double getMouldWidth() const;

    void setMouldWidth(double mouldWidth);

    double getMouldHeight() const;

    void setMouldHeight(double mouldHeight);

    bool isAuto,isInsert;
    double partLength,partWidth,partHeight;//零件长宽高初始数据
    double mouldLength,mouldWidth,mouldHeight;
private:

};
#endif //INDUSTRIALMOULD_DRAWINGPROCESS_H
