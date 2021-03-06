#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include <QWidget>

namespace Ui {
class TaskManager;
}

class TaskSystemModel;
class TaskHighlighter;

class TaskManager : public QWidget
{
    Q_OBJECT
    
public:
    explicit TaskManager(QWidget *parent = nullptr);
    ~TaskManager();
    
    void setTaskSystemModel(TaskSystemModel *model);
    
private:
    Ui::TaskManager *ui;
    
    TaskHighlighter *highlighter;
    
    void setupTask(const QModelIndex &index);
};

#endif // TASKMANAGER_H
