#include <QApplication>
#include <QLabel>
int main(int argc,char ** argv){
    //创建qt应用程序对象
    Application app(argc,argv);
    //创建标签控件
    QLabel label("hello word");
    //显示标签控件
    label.show();
    //应用程序进入主事件循环并等待
    return app.exec()

}