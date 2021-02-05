#include "thread2.h"
#include <QDebug>
#include <QTime>

Thread2::Thread2()
{

}

void Thread2::run()
{
    forever{
        qDebug() << "Thread 2, tengo la hora:" << QTime::currentTime();
    }

}
