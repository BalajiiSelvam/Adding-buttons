#include "mywidget.h"
#include <QHBoxLayout>
#include <QPushButton>
#include <QPropertyAnimation>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget w;
    w.resize(400,400);
    QHBoxLayout *layout = new QHBoxLayout(&w);
    QPushButton *button1 = new QPushButton("Home",&w);
    button1 ->setStyleSheet("background-color: red;");
    layout -> addWidget(button1);
    QPushButton *button2 = new QPushButton("Favourite",&w);
    button2 ->setStyleSheet("background-color: yellow;");
    layout -> addWidget(button2);
    QPushButton *button3 = new QPushButton("About",&w);
    button3 ->setStyleSheet("background-color: green;");
    layout -> addWidget(button3);



    w.show();
    return a.exec();
}
