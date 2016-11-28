#include "SSP_Editor.h"

SSP_Editor::SSP_Editor(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->model = new QFileSystemModel(this);
	this->model->setRootPath("C:/");
	ui.treeView->setModel(this->model);
}


SSP_Editor::~SSP_Editor()
{
	delete this->model;
}
