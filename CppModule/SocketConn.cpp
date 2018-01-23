//
// Created by Peter Zheng on 2018/01/13.
//
#ifndef _INCLUDE_SOCKETCONN
#define _INCLUDE_SOCKETCONN

#include "SocketConn.h"

#endif

IP::IP() {
    _avail = 0;
    _addr = 0;
}

IP::IP(unsigned int addr) {
    _avail = 1;
    _addr = addr;
}

std::string IP::toString() {
    if (_avail == 0) return _NULL_STRING;
    unsigned int t = _addr;
    int count = 0;//用于计数小数点的位置
    std::string ans = "";
    ans = itos(_addr / 256 / 256 / 256) + "." + itos(_addr / 256 / 256 % 256) + "." + itos(_addr % (256 * 256) / 256) +
          "." + itos(_addr % 256);
    return ans;
}

IP::IP(unsigned int addr1, unsigned int addr2, unsigned int addr3, unsigned int addr4) {
    _avail = 1;
    _addr = addr1 * 256 * 256 * 256 + addr2 * 256 * 256 + addr3 * 256 + addr4;
}

IP &IP::operator=(const IP &o) {
    IP p;
    p._avail = o._avail;
    p._addr = o._addr;
    return p;
}

const char *IP::toString(int d) {
    std::string str = this->toString();
    char *ret = new char[str.length() + 1];
    for (int i = 0; i < str.length(); i++)
        ret[i] = str[i];
    return ret;
}

_Uint IP::toUnsignedInt() {
    return _addr;
}

SocketConnection::SocketConnection(IP ip, in_port_t Port, bool debugflag = false) {

}

void SocketConnection::getConn() {

}

void SocketConnection::getData() {

}

void SocketConnection::sendData() {

}


