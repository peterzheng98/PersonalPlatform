//
// Created by Peter Zheng on 2018/01/13.
//

#ifndef CPPMODULE_RUNTIMEEXCEPTION_H
#define CPPMODULE_RUNTIMEEXCEPTION_H


#include <exception>
#include "Include.h"
#define _MESSAGE_INLINE_NOINPUT "No Message Input"
class RuntimeException : public std::exception{
private:
    _Uint _code;
    char* _message_char;
    std::string _message_string;
    _Uint _len;
public:
    explicit RuntimeException(_Uint code, std::string message);
    explicit RuntimeException(_Uint code, char* message, _Uint len);
    const char* what();
    ~RuntimeException() override;
};

class SQLException : public std::exception{
private:
    _Uint _code;
    char* _message_char;
    std::string _message_string;
    _Uint _len;
    std::string _database;
    std::string _sentence;
    std::string _table;
public:
    explicit SQLException(_Uint code, std::string message, std::string db, std::string sentence, std::string table);
};


#endif //CPPMODULE_RUNTIMEEXCEPTION_H
