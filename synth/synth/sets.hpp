/*
用于存储特殊的集合。
*/

#include "./defines.hpp"

#ifndef SYNTH_SETS_794507
#define SYNTH_SETS_794507

/*
一个为了方便与其他公开结构区分开来，用以存储基本结构的命名空间。
*/
namespace basic {

// 一个用于存储数据的常量集合。
const basic::BASIC_SET<basic::BASIC_SINGLED> BASIC_NUMBERS {
    '0',
    '1',
    '2',
    '3',
    '4',
    '5',
    '6',
    '7',
    '8',
    '9',
};

//表示四种运算符号的常量。
const basic::BASIC_SINGLED ADD = '+'; // 表示加法的符号
const basic::BASIC_SINGLED SUB = '-'; // 表示减法的符号
const basic::BASIC_SINGLED MUL = '*'; // 表示乘法的符号
const basic::BASIC_SINGLED DIV = '/'; // 表示除法的符号

// 一个用于存储加减乘除符号的常量集合。
const basic::BASIC_SET<basic::BASIC_SINGLED> BASIC_OPERATORS {
    basic::ADD,
    basic::SUB,
    basic::MUL,
    basic::DIV,
};

}
#endif