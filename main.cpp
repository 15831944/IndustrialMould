#include <iostream>
#include "DrawingProcess/DrawingProcess.h"
using namespace std;
int main() {
    double partLength,partWidth,partHeight;//零件长宽高初始数据
    DrawingProcess drawingProcess;
    cout << "请输入零件长度,零件宽度,零件高度" << endl;
    cin >> partLength >> partWidth >> partHeight;
    drawingProcess.setPartLength(partLength);
    drawingProcess.setPartWidth(partWidth);
    drawingProcess.setPartHeight(partHeight);
    drawingProcess.calculate();
    cout << "模具长度：" << drawingProcess.getMouldLength() << endl;
    cout << "模具宽度：" << drawingProcess.mouldWidth << endl;
    cout << "模具高度：" << drawingProcess.mouldHeight << endl;
}
