#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_SSP_Editor.h"

class SSP_Editor : public QMainWindow
{
    Q_OBJECT

public:
    SSP_Editor(QWidget *parent = Q_NULLPTR);

private:
    Ui::SSP_EditorClass ui;
};
