/*
用于存储特殊常量或结构。
*/

#include "./token.hpp"
#include "./type.hpp"

#ifndef SYNTH_CONSTS_794507
#define SYNTH_CONSTS_794507

/*
一个为了方便与其他公开结构区分开来，用以存储基本结构的命名空间。
*/
namespace basic {

// 定义此常量为文件尾。
const basic::BASIC_TOKEN BASIC_EOF(basic::BASIC_TYPE(basic::EOF_TYPE), "<End Of File>");

}
#endif