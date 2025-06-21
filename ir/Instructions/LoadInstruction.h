#pragma once

#include "Instruction.h"
#include "Value.h"

class Function;

///
/// @brief 加载指令（从内存中读取值）
///
/// 格式：目标变量 = *源地址
///
class LoadInstruction : public Instruction {
public:
    ///
    /// @brief 构造函数
    /// @param func 所属函数
    /// @param dest 目标变量（存储加载的值）
    /// @param srcAddr 源地址（要加载的内存地址）
    ///
    LoadInstruction(Function * func, Value * dest, Value * srcAddr);

    /// @brief 转换成字符串
    /// @param str 输出的字符串
    void toString(std::string & str) override;
};