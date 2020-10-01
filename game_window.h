#pragma once

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class GameWindow; }
QT_END_NAMESPACE

class GameWindow : public QMainWindow
{
    Q_OBJECT

public:
    GameWindow(int rowCount, int columnCount, QWidget* parent = nullptr);
    ~GameWindow();

private:
    Ui::GameWindow *ui;
};
