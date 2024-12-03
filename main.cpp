#include <iostream>
#include <QApplication>
#include <QTimer>

class Printer : public QObject {
    Q_OBJECT
public slots :
    void printFifinsed(){
        std::cout<<"Finished"<<std::endl;
    }
};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);    
    QTimer myTimer;
    Printer print;
    QObject::connect(&myTimer,&QTimer::timeout,&print,&Printer::printFifinsed);
    myTimer.start(2000);    
    return a.exec();
}
