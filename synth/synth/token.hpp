/*
用于存储语法节点的实现。
*/

#include "./type.hpp"
#include "./defines.hpp"

#ifndef SYNTH_TOKEN_794507
#define SYNTH_TOKEN_794507

/*
一个为了方便与其他公开结构区分开来，用以存储基本结构的命名空间。
*/
namespace basic {

/*
#### 介绍

一个用以实现语法节点的类。
#### 更新日志

- 2024-3-22 实现了这个类。
- 2024-3-24 新增了构造函数以更加快捷的设置 `type` 和 `value`。
*/
class BASIC_TOKEN {
    public:

    basic::BASIC_TYPE type;
    basic::BASIC_REGISTE value;

    /*
    #### 介绍

    用以快捷设置 `type` 和 `value`。`public` 状态。

    ##### 参数

    - `set_type` : `type` 将会被设置为 `set_type`。
    - `set_type` : `value` 将会被设置为 `set_value`。

    ##### 更新日志

    - 2024-3-24 初步实现了这个构造函数。
    */
    BASIC_TOKEN(basic::BASIC_TYPE set_type, basic::BASIC_REGISTE set_value) {
        type = set_type;
        value = set_value;

        return;
    }
};

}

#endif