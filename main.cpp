#include <QTextCodec>
#include <QApplication>
#include <QStyle>
#include <QStyleFactory>
#include "systemMonitor.h"


int main(int argc,char** argv)
{
    //QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
    //QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    //QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    QApplication app(argc,argv);
    QStyle * style = QStyleFactory::create("Cleanlooks");
    app.setStyle(style);
    SystemMonitor sys;
    return app.exec();
}
