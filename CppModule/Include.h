//
// Created by Peter Zheng on 2018/01/13.
//

#ifndef CPPMODULE_INCLUDE_H
#define CPPMODULE_INCLUDE_H

#include <iostream>
#include <sstream>

#define _Uint unsigned int
#define _NULL_STRING "NULL"

//核心代码片段
template <typename T>
inline std::string itos(T a){
    std::stringstream s1;
    s1 << a;
    std::string s2;
    s1 >> s2;
    return s2;
}

#endif //CPPMODULE_INCLUDE_H
