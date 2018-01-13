//
// Created by Peter Zheng on 2018/01/13.
//

#include "RuntimeException.h"

const char *RuntimeException::what() {
    if(_len <= 0) return nullptr;
    else return _message_char;
}

RuntimeException::RuntimeException(_Uint code, std::string message) {
    _code = code;
    if(message.length() > 0){
        _len = message.length();
        _message_char = new char[_len + 1];
        if(_message_char != 0){
            _message_string = message;
            for(int i = 0;i<_len;i++) _message_char[i] = _message_string[i];
        } else {
//            throw std::bad_alloc();
            //TODO : 抛出分配异常错误
        }
    } else {
        _message_char = new char[20];
        strcpy(_message_char, _MESSAGE_INLINE_NOINPUT);
    }
}

RuntimeException::RuntimeException(_Uint code, char *message, _Uint len) {
    _code = code;
    _len = len;
    _message_char = new char[len + 2];
    strcpy(_message_char, message);
    for(int i = 0;i<_len;i++) _message_string = _message_string + _message_char[i];
}

RuntimeException::~RuntimeException() {
    if(_message_char) delete _message_char;
}


