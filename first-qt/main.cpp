#include "mainwindow.h"
#include <QApplication>
#include <QtWidgets>

class Notepad : public QMainWindow
{
    Q_OBJECT

public:
    Notepad();

private slots:
    void load();
    void save();
    void other();
    void exit();

private:
    QTextEdit *textEdit;

    QAction *loadAction;
    QAction *saveAction;
    QAction *otherAction;
    QAction *exitAction;

    QMenu *fileMenu;
};

Notepad::Notepad()
{
    loadAction = new QAction(tr("&Load"), this);
    saveAction = new QAction(tr("&Save"), this);
    otherAction = new QAction(tr("&Other"), this);
    exitAction = new QAction(tr("&Exit"), this);

    connect(loadAction, SIGNAL(triggered()), this, SLOT(load()));
    connect(saveAction, SIGNAL(triggered()), this, SLOT(save()));
    connect(otherAction, SIGNAL(triggered()), this, SLOT(other()));
    connect(exitAction, SIGNAL(triggered()), this, SLOT(exit()));

    fileMenu = menuBar()->addMenu(tr("&File"));
    fileMenu->addAction(loadAction);
    fileMenu->addAction(saveAction);
    fileMenu->addSeparator();
    fileMenu->addAction(otherAction);
    fileMenu->addAction(exitAction);

    textEdit = new QTextEdit;

    setCentralWidget(textEdit);

    setWindowTitle(tr("Notepad"));
}

void Notepad::load()
{

}

void Notepad::save()
{

}

void Notepad::other()
{

}

void Notepad::exit()
{
//    QMessageBox messageBox;
//    messageBox.setWindowTitle(tr("Notepad"));
//    messageBox.setText(tr("Do you really want to quit?"));
//    messageBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
//    messageBox.setDefaultButton(QMessageBox::No);
//    if (messageBox.exec() == QMessageBox::Yes)
//    {
//        qApp->quit();
//    }
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Notepad notepad;
    notepad.show();

    return app.exec();
}

#include "main.moc"
