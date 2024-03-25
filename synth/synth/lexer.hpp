/*
用于实现语法分析。
*/

#include ".\token.hpp"
#include ".\defines.hpp"
#include ".\consts.hpp"
#include ".\tools.hpp"
#include ".\sets.hpp"
#include ".\type.hpp"
#include ".\exceptions.hpp"

#ifndef SYNTH_LEXER_794507
#define SYNTH_LEXER_794507

/*
#### 介绍

一个用以实现语法分析的类。
#### 更新日志

- 2024-3-24 初步实现了这个类的 `parse` 方法。
- 2024-3-24 为了实现 `parse` 方法，初步实现了这个类的 `read_integer` 方法。
- 2024-3-25 新增了 `next` 方法。用于更加具有可读性的代码。
- 2024-3-25 完全实现了 `read_integer` 方法。
- 2024-3-25 完全实现了 `parse` 方法。
*/
class lexer {
    private:

    basic::BASIC_ARRAY<basic::BASIC_TOKEN> _tokens; // 用以存储处理完毕或者仍未处理但成型语法节点。
    basic::BASIC_REGISTE _text; // 用以存储要分析的语句。
    basic::BASIC_INTEGER _cur_pos; // 用以存储当前应该处理的语法位置。
    basic::BASIC_SINGLED _cur_char; // 用以存储当前应该处理的语法字符。

    public:

    /*
    #### 介绍

    用以语法分析，`public` 状态。

    ##### 参数

    - `text` : `parse` 会对 `text` 进行语法分析。

    ##### 更新日志

    - 2024-3-24 初步实现了 `parse` 方法。
    - 2024-3-25 实现了 `parse` 方法中判断 `integer` 数据的部分。
    */
    basic::BASIC_ARRAY<basic::BASIC_TOKEN> parse (basic::BASIC_REGISTE text) {

        // 初始化数据
        _cur_pos = -1;
        _text = text;

        // 遍历语句
        while (true) {
            basic::BASIC_TOKEN _token_v = basic::BASIC_EOF;

            if (next() == false) { // 处理文件尾。
                _tokens.push_back(_token_v);
                break;
            }

            if (_cur_char == ' ') { // 处理空格。
                // 忽略只起到间隔作用的空格。
                next();
                continue;
            } else if (basic::BASIC_CHECKIN(_cur_char, basic::BASIC_NUMBERS)) {
                // 读取整形。
                _token_v = read_integer();
            } else if (basic::BASIC_CHECKIN(_cur_char, basic::BASIC_OPERATORS)) {
                _token_v.type = basic::OPERATOR_TYPE;
                _token_v.value = _cur_char;
                next();
            } else {
                basic::BASIC_EXCEPTION(basic::PARSING_EXCEPTION, ((basic::BASIC_REGISTE)"An unknown character has appeared.")).raise();
            }

            _tokens.push_back(_token_v);
        }
        return _tokens;
    }

    /*
    #### 介绍

    用以读取 `integer`。`public` 状态。
    ##### 更新日志
    - 2024-3-24 初步实现了 `read_integer` 方法。
    - 2024-3-25 实现了 `read_integer` 方法。
    */
    basic::BASIC_TOKEN read_integer() {
        basic::BASIC_REGISTE _integer = {_cur_char};
        next();
        while (basic::BASIC_CHECKIN(_cur_char, basic::BASIC_NUMBERS) && (_cur_pos < _text.size())) {
            _integer += _cur_char;
            next();
        }
        
        return basic::BASIC_TOKEN(basic::NUMBER_TYPE, _integer);
    }

    /*
    #### 介绍

    用以更新语法位置。`public` 状态。

    ##### 返回值

    如果到了文件尽头，返回 `false`。
    ##### 更新日志
    - 2024-3-25 实现了 `next` 方法。
    */
    bool next() {
        _cur_pos++;
        if (_cur_pos >= _text.size()) {
            return false;
        }
        _cur_char = _text[_cur_pos];
        return true;
    }
};

#endif