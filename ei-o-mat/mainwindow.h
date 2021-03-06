#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QString>
#include <QMainWindow>
#include <QTime>
#include <QTimer>
#include <Eiertimer.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QTime *displayTime = new QTime;
    QTimer *timer = new QTimer;
    bool buttonStart = true;

protected slots:
    void updateTime();

public slots:



private slots:
    void on_ButtonSizeS_clicked();

    void on_ButtonSizeM_clicked();

    void on_ButtonSizeL_clicked();

    void on_ButtonSizeXL_clicked();

    void on_spinBox_textChanged(const QString &arg1);

    void on_ButtonSizeOstrich_clicked();

    void on_startButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H


