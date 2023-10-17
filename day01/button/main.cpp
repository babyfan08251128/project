#include <QApplication>
#include <QPushButton>
int main(int argc,char** argv){
    //创建应用程序对象
    QApplication app(argc,argv);
    //创建按钮控件
    QPushButton btn("ok");
    //页面展示按钮
    btn.show();
    //创建标签控件
    QLabel label("标签");
    //展示标签
    label.show();
    //进入应用程序循环事件
    return app.exec();

}