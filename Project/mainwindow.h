#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QTextStream>
#include <QStringList>
#include<menu.h>
#include <QList>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QList <book> booklist ;
    MainWindow(QList <book> list , QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_close_clicked();

    void on_reload_clicked();

    void on_sign_up_clicked();

    void on_Login_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
