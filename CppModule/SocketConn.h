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

    /*
     * 赋值函数
     */
    IP &operator=(const IP &o);
};


class SocketConnection {
private:

};


#endif //CPPMODULE_SOCKETCONN_H
