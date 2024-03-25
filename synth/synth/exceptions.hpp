/*
实现了抛出异常
*/

#include <iostream>

#include "./defines.hpp"
#include "./type.hpp"

#ifndef SYNTH_EXCEPTIONS_794507
#define SYNTH_EXCEPTIONS_794507

namespace basic{

/*
#### 介绍

一个用以实现抛出错误的类。
#### 更新日志

- 2024-3-25 实现了这个类
*/
class BASIC_EXCEPTION {
    private:
    
    basic::BASIC_EXCEPTIONTYPE _exception_type;
    basic::BASIC_REGISTE _content;

    public:
    
    /*
    #### 介绍

    用以快捷设置 `_exception_type` 和 `_content`。`public` 状态。

    ##### 参数

    - `exception_type` : 要设置的 `_exception_type`。
    - `content` : 要设置的 `_content`。

    ##### 更新日志

    - 2024-3-25 初步实现了这个构造函数。
    */
    BASIC_EXCEPTION(basic::BASIC_EXCEPTIONTYPE exception_type, basic::BASIC_REGISTE content) {
        _exception_type = exception_type;
        _content = content;
    }

    /*
    #### 介绍

    抛出异常。

    ##### 更新日志

    - 2024-3-25 实现了这个函数。
    */
    void raise() {
        std::cout << "<Exception> An exception has occurred !:" << std::endl;
        std::cout << "  this.exception_type = " << _exception_type << " (" << basic::BAISC_EXCEPTIONMAP[_exception_type] << ")" << std::endl;
        std::cout << "  " << basic::BAISC_EXCEPTIONMAP[_exception_type] << " : " << _content << std::endl;
        std::cout << "Run Stopped, Done.";
        exit(0);
    }
};

}

#endif