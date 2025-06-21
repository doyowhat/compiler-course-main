#pragma once

#include "Instruction.h"
#include "Value.h"

class Function;

///
/// @brief 存储指令（将值写入内存）
///
/// 格式：*目标地址 = 源值
///
class StoreInstruction : public Instruction {
public:
    ///
    /// @brief 构造函数
    /// @param func 所属函数
    /// @param destAddr 目标地址（要存储的内存地址）
    /// @param srcVal 源值（要存储的值）
    ///
    StoreInstruction(Function * func, Value * destAddr, Value * srcVal);

    /// @brief 转换成字符串
    /// @param str 输出的字符串
    void toString(std::string & str) override;
};