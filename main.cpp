#include <QCoreApplication>
#include <QDebug>
#include "thread1.h"
#include "thread2.h"
#include <QThread>

int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);


    Thread1 Thread1;
    Thread1.start();

    Thread2 Thread2;
    Thread2.start();


    while(true){
        qDebug() << "main";
    }

    return a.exec();
}








