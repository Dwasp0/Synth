/*
用于存储内部工具。
*/

#include "./defines.hpp"

#ifndef SYNTH_TOOLS_794507
#define SYNTH_TOOLS_794507

/*
一个为了方便与其他公开结构区分开来，用以存储基本结构的命名空间。
*/
namespace basic {

/*
#### 介绍

一个用与判断元素是否在多个元素中的模板函数。
#### 更新日志

- 2024-3-24 实现了这个函数。
*/
template<typename T>
bool BASIC_CHECKIN(T item, basic::BASIC_ARRAY<T> items) {
    for (auto p : items) {
        if (item == p) {
            return true;
        }
    }

    return false;
}

/*
#### 介绍

一个用与判断元素是否在集合中的模板函数。
#### 更新日志

- 2024-3-24 实现了这个函数。
*/
template<typename T>
bool BASIC_CHECKIN(T item, basic::BASIC_SET<T> items) {
    for (auto p : items) {
        if (item == p) {
            return true;
        }
    }
    
    return false;
}

}
#endif