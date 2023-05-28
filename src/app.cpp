#include <iostream>

#include <QApplication>

#include "message.h"
#include "MainWin.h"



int main(int argc, char** argv) {
	Message msg;
	std::cout << msg.getMessage() << std::endl;

    QApplication a(argc, argv);
    MainWin w;
    w.show();

    return a.exec();
}
