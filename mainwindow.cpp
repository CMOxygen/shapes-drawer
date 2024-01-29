#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete item;
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    painter.setRenderHints(QPainter::Antialiasing);

    painter.save();

    //  Код для отрисовки окружности
    painter.setBrush(QColor(0, 0, 0, 255));
    painter.drawEllipse(QPoint(300, 300), 200, 200);

    painter.setBrush(QColor(255, 255, 255, 255));
    painter.setPen(QColor(0, 0, 0, 0));
    painter.drawEllipse(QPoint(300, 300), 150, 150);

    // Код для отрисовки кривой линии
    QPainterPath path;

    path.moveTo(10, 20);
    path.lineTo(10, 40);
    path.arcTo(QRectF(10, 20, 40, 40), 180, 180);
    path.moveTo(50, 40);
    path.lineTo(50, 20);
    painter.setPen(QColor(79, 106, 25));

    painter.drawPath(path);

    painter.end();
}

void MainWindow::on_pushButton_clicked()
{
    // QPainterPath path;
    // path.moveTo(10, 20);
    // path.lineTo(10, 40);
    // path.arcTo(QRectF(10, 20, 40, 40), 180, 180);
    // path.moveTo(50, 40);
    // path.lineTo(50, 20);
    // QPen redPen(Qt::red);
    // redPen.setWidth(2);

    // QPainter painter(this);
    // painter.setPen(QColor(79, 106, 25));

    // painter.drawPath(path);

    // ui->graphicsView->scene()->addPath(path, redPen);

    // item = new QGraphicsPathItem(path);
    // item->setPen(redPen);
}

