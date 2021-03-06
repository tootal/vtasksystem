#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardPaths>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    
private slots:
    
    void openTaskFile();
    
    QString getTaskFolder();
    
    void openTaskFolder();
    
    void openTaskManager();
    
private:
    
    void setupText();
    
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
