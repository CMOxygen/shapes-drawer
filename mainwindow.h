#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <QImage>
#include <QPainterPath>

#include <QGraphicsPathItem>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void paintEvent(QPaintEvent *event);    //  Содержит код для отрисовки окружности

private slots:
    void on_pushButton_clicked();   //  Содержит код для отрисовки кривой линии

private:
    Ui::MainWindow *ui;

    QGraphicsPathItem *item;
};
#endif // MAINWINDOW_H
