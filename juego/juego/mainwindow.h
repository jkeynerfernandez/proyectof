#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QString>>
#include <QGraphicsScene>//para la escena
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QString h;
    QGraphicsScene *escena; // recuerda eliminar en destructor
};
#endif // MAINWINDOW_H
