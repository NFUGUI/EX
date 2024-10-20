#include "cbuildindlg.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CBuildinDlg w;
    CBuildinDlg w2;
    CBuildinDlg w3;
    w3.show();
    w2.show();
    w.show();

    return a.exec();
}
