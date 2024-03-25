/*
用于存储关于类型的实现。
*/

#include <map>

#include "./defines.hpp"

#ifndef SYNTH_TYPE_794507
#define SYNTH_TYPE_794507

/*
一个为了方便与其他公开结构区分开来，用以存储基本结构的命名空间。
*/
namespace basic {

/*
#### 介绍

一个用来实现类型的枚举
#### 更新日志

- 2024-3-22 实现了这个枚举。
- 2024-3-24 新增了 `EOF_TYPE` 用以表示文件尾。
- 2024-3-25 新增了 `OPERATOR_TYPE` 用以表示字符。
*/
enum BASIC_TYPE {
    EOF_TYPE,
    OPERATOR_TYPE,
    STRING_TYPE,
    NUMBER_TYPE,
    BOOLEAN_TYPE,
};

/*
#### 介绍

一个用来实现异常类型的枚举
#### 更新日志

- 2024-3-25 实现了这个枚举。
*/
enum BASIC_EXCEPTIONTYPE {
    UNKNOW_EXCEPTION,
    SYSTEM_EXCEPTION,
    PARSING_EXCEPTION,
    NAME_EXCEPTION,
    RUNTIME_EXCEPTION,
};

/*
#### 介绍

一个用来实现辨别异常类型的 `map`
#### 更新日志

- 2024-3-25 实现了这个 `map`。
*/
std::map<basic::BASIC_INTEGER, basic::BASIC_REGISTE> BAISC_EXCEPTIONMAP {
    {basic::UNKNOW_EXCEPTION , "Unknow Exception"},
    {basic::SYSTEM_EXCEPTION, "System Exception"},
    {basic::PARSING_EXCEPTION, "Parsing Exception"},
    {basic::NAME_EXCEPTION, "Name Exception"},
    {basic::RUNTIME_EXCEPTION, "Runtime Exception"},
};

}

#endif