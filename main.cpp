#include "cbuildindlg.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CBuildinDlg w;
    CBuildinDlg w2;
    w2.show();
    w.show();

    return a.exec();
}
