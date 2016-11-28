#include "SSP_Editor.h"

SSP_Editor::SSP_Editor(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	/*making a fileSystemModel to enable a file viewer in the treeView widget*/
	this->model = new QFileSystemModel(this);
	this->model->setRootPath("C:/Users/Cool_David_92/Desktop/hehee");
	this->model->setFilter(QDir::NoDotAndDotDot | QDir::Files);
	
	/*a list of filters for the treeView*/
	QStringList filters;
	filters << "*.bbf";

	/*setting the filters and disabling the user from seeing any other files*/
	this->model->setNameFilters(filters);
	this->model->setNameFilterDisables(false);

	/*setting the fileSystemModel to the treeView and connecting the signal slot*/
	ui.treeView->setModel(this->model);
	connect(ui.treeView, SIGNAL(doubleClicked(QModelIndex)), this, SLOT(treeView_doubleClicked()));
}


SSP_Editor::~SSP_Editor()
{
	delete this->model;
}

void SSP_Editor::treeView_doubleClicked()
{
	QModelIndex index = ui.treeView->currentIndex();
	
	/*checking to see if the selected object is valid*/
	if (!index.isValid()) return;
	
	QFileInfo fileInfo = this->model->fileInfo(index);
	QString filePath = fileInfo.filePath();

	/*send the filepath to the importer*/

}
