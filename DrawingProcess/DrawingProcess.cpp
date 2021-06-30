//
// Created by Su Heng on 2021/6/28.
//
/**
 * 拉延成型模处理工序
 */
#include<iostream>
#include "DrawingProcess.h"
#include "Drawing.h"
#include "CuttingEdgeAndPunchingRoundHoles.h"
#include "FlangingSizing.h"
using namespace std;

DrawingProcess::DrawingProcess() {

}
 void DrawingProcess::calculate(){

            int judgeCraft;
            cout << "请输入使用工艺方法" << endl;
            cout << "1.拉延\n" << "2.切边冲孔\n" << "3.翻边整形\n";
            cin >> judgeCraft;
            cout << "请输入选择手工(0)或是自动化(1)操作\n";
            cin >> isAuto;
            cout << "请输入有(1)无(0)镶块\n";
            cin >> isInsert;
         if (judgeCraft == 1){
             Drawing drawing =  Drawing(partLength,partWidth,partHeight);
             drawing.calculate();
             mouldLength = drawing.getMouldLength();
             mouldWidth = drawing.getMouldWidth();
         } else if (judgeCraft == 2){
             CuttingEdgeAndPunchingRoundHoles cuttingEdgeAndPunchingRoundHoles = CuttingEdgeAndPunchingRoundHoles(partLength, partWidth,partHeight);
             cuttingEdgeAndPunchingRoundHoles.calculate();
             mouldLength = cuttingEdgeAndPunchingRoundHoles.getMouldLength();
             mouldWidth = cuttingEdgeAndPunchingRoundHoles.getMouldWidth();
         } else if (judgeCraft == 3){
             FlangingSizing flangingSizing = FlangingSizing(partLength,partWidth,partHeight);
             flangingSizing.calculate();
             mouldLength = flangingSizing.getMouldLength();
             mouldWidth = flangingSizing.getMouldWidth();
         }
         mouldHeight = mouldHeightCalculation(partHeight,mouldLength);


        }
        /**
         * 拉延模高度计算
         * @param partHeight 零件高度
         * @param mouldLength 模具长度
         * @return 模具高度
         */
        double DrawingProcess::mouldHeightCalculation(double partHeight,double mouldLength){
            const int BASE_HANDMADE_LESS_THAN_2000_NO_INSERT = 700;
            const int BASE_HANDMADE_LESS_THAN_2000_INSERT = 750;
            const int BASE_HANDMADE_MORE_THAN_2000_NO_INSERT = 750;
            const int BASE_HANDMADE_MORE_THAN_2000_INSERT = 800;
            if(!isAuto){
                if (isInsert){
                    if (mouldLength < 2000) {//手工，有镶块，模具长度小于2000
                        return partHeightJudgement(partHeight,BASE_HANDMADE_LESS_THAN_2000_INSERT);
                    }else{//手工，有镶块，模具长度大于2000
                        return partHeightJudgement(partHeight,BASE_HANDMADE_MORE_THAN_2000_INSERT);
                    }
                }else {
                    if (mouldLength < 2000){//手工，无镶块，模具长度小于2000
                        return partHeightJudgement(partHeight,BASE_HANDMADE_LESS_THAN_2000_NO_INSERT);
                    }else{//手工，无镶块，模具长度大于2000
                        return partHeightJudgement(partHeight,BASE_HANDMADE_MORE_THAN_2000_NO_INSERT);
                    }
                }
            }else {//自动化
                if (partHeight < 50){
                    return 1000;
                }else if (partHeight >= 51 && partHeight <= 100){
                    return 1100;
                }else if (partHeight >= 101 && partHeight <= 150) {
                    return 1100;
                }else if (partHeight >= 151 && partHeight <= 200) {
                    return 1100;
                }else if (partHeight >= 201 && partHeight <= 250) {
                    return 1200;
                }else if (partHeight >= 251 && partHeight <= 300) {
                    return 1200;
                }else if (partHeight >= 301 && partHeight <= 350) {
                    return 1300;
                }else if (partHeight > 350) {
                    return 1300;
                }
            }
            return BASE_HANDMADE_MORE_THAN_2000_NO_INSERT;
        }

        /**
         * 判断零件高度
         * @param partHeight 零件高度
         * @param baseHeight 基准高度
         * @return 模具高度
         */
        double DrawingProcess::partHeightJudgement(double partHeight,int baseHeight){
            if (partHeight < 50){
                return baseHeight;
            }else if (partHeight >= 51 && partHeight <= 100){
                return baseHeight + 50;
            }else if (partHeight >= 101 && partHeight <= 150) {
                return baseHeight + 100;
            }else if (partHeight >= 151 && partHeight <= 200) {
                return baseHeight + 150;
            }else if (partHeight >= 201 && partHeight <= 250) {
                return baseHeight + 200;
            }else if (partHeight >= 251 && partHeight <= 300) {
                return baseHeight + 250;
            }else if (partHeight >= 301 && partHeight <= 350) {
                return baseHeight + 300;
            }else if (partHeight > 350) {
                return baseHeight + 350;
            }
            return baseHeight;
        }

        void DrawingProcess::normalMethod(){

        }

        void DrawingProcess::otherMethod(){

        }

double DrawingProcess::getPartLength() const {
    return partLength;
}

void DrawingProcess::setPartLength(double partLength) {
    DrawingProcess::partLength = partLength;
}

double DrawingProcess::getPartWidth() const {
    return partWidth;
}

void DrawingProcess::setPartWidth(double partWidth) {
    DrawingProcess::partWidth = partWidth;
}

double DrawingProcess::getPartHeight() const {
    return partHeight;
}

void DrawingProcess::setPartHeight(double partHeight) {
    DrawingProcess::partHeight = partHeight;
}

double DrawingProcess::getMouldLength() const {
    return mouldLength;
}

void DrawingProcess::setMouldLength(double mouldLength) {
    DrawingProcess::mouldLength = mouldLength;
}

double DrawingProcess::getMouldWidth() const {
    return mouldWidth;
}

void DrawingProcess::setMouldWidth(double mouldWidth) {
    DrawingProcess::mouldWidth = mouldWidth;
}

double DrawingProcess::getMouldHeight() const {
    return mouldHeight;
}

void DrawingProcess::setMouldHeight(double mouldHeight) {
    DrawingProcess::mouldHeight = mouldHeight;
}

