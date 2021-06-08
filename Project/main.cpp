#include "mainwindow.h"

#include <QApplication>
class pook {

};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QList<book>booklist ;

    MainWindow w(booklist);
    w.show();
    return a.exec();
}
