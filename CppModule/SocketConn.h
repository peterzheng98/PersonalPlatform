//
// Created by Peter Zheng on 2018/01/13.
//

#ifndef CPPMODULE_SOCKETCONN_H
#define CPPMODULE_SOCKETCONN_H

#include "Include.h"

class IP{
private:
    unsigned int _addr;
    unsigned int _avail;
public:
    /*
     * 构造函数：使用指定IP地址进行构造
     */
    explicit IP(unsigned int addr);

    /*
     * 构造函数：构造空IP地址
     */
    explicit IP();

    /*
     * 构造函数：使用四位值构造
     */
    explicit IP(unsigned int addr1, unsigned int addr2, unsigned int addr3, unsigned int addr4);

    /*
     * 函数名称：toString()
     * 作用：转换成X.X.X.X的字符串
     * 返回值：字符串或者"NULL"（代表未存储任何IP地址）
     */
    std::string toString();
    const char* toString(int d);

    /*
     * 函数名称：toUnsignedInt()
     * 作用：转换成UnsignedInt
     */
    _Uint toUnsignedInt();
    /*
     * 赋值函数
     */
    IP &operator=(const IP &o);

};


class SocketConnection {
private:
    int s;
    struct sockaddr_in servaddr;
    socklen_t len;
    std::list li;
    bool debuggable;
public:
    /*
     * 默认构造函数
     * 参数：IP类型ip, 端口号：unsigned short
     */
    SocketConnection(IP ip, in_port_t Port, bool debugflag = false);
    /*
     * 连接函数：要求独立线程运行（detach）
     */
    void getConn();
    /*
     * 获取信息函数：要求独立线程运行（Detach）
     */
    void getData();
    /*
     * 传递信息函数：要求独立线程运行（detach）
     */
    void sendData();

};


#endif //CPPMODULE_SOCKETCONN_H
