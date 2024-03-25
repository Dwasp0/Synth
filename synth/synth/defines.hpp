/*
用于存储类型定义。
*/

#include <string>
#include <vector>
#include <set>
#include <iostream>

#ifndef SYNTH_DEFINES_794507
#define SYNTH_DEFINES_794507

/*
一个为了方便与其他公开结构区分开来，用以存储基本结构的命名空间。
*/
namespace basic {

/*
#### 介绍

一个用于存储数据的基本存储单位。
#### 更新日志

- 2024-3-22 用 `typedef` 实现了这个功能。
*/
typedef std::string BASIC_REGISTE;

/*
#### 介绍

一个用于存储整形的基本存储单位。
#### 更新日志

- 2024-3-24 用 `typedef` 实现了这个功能。
*/
typedef long long BASIC_INTEGER;

/*
#### 介绍

一个用于存储单个字符的基本存储单位。
#### 更新日志

- 2024-3-24 用 `typedef` 实现了这个功能。
*/
typedef char BASIC_SINGLED;

/*
#### 介绍

一个用于 存储 多个数据的基本存储单位。
#### 更新日志

- 2024-3-22 用 `using` 与 `template` 实现了这个功能。
*/
template<typename T>
using BASIC_ARRAY = std::vector<T>;

/*
#### 介绍

一个用于 集合 多个数据的基本集合单位。
#### 更新日志

- 2024-3-22 用 `using` 与 `template` 实现了这个功能。
*/
template<typename T>
using BASIC_SET = std::set<T>;

}

#endif