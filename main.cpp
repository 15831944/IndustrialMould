#include <iostream>
#include "DrawingProcess/DrawingProcess.h"
using namespace std;
int main() {
    double partLength,partWidth,partHeight;//�������߳�ʼ����
    DrawingProcess drawingProcess;
    cout << "�������������,������,����߶�" << endl;
    cin >> partLength >> partWidth >> partHeight;
    drawingProcess.setPartLength(partLength);
    drawingProcess.setPartWidth(partWidth);
    drawingProcess.setPartHeight(partHeight);
    drawingProcess.calculate();
    cout << "ģ�߳��ȣ�" << drawingProcess.getMouldLength() << endl;
    cout << "ģ�߿�ȣ�" << drawingProcess.mouldWidth << endl;
    cout << "ģ�߸߶ȣ�" << drawingProcess.mouldHeight << endl;
}
