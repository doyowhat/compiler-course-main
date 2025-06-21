#include "StoreInstruction.h"
#include "VoidType.h"

///
/// @brief 构造函数
/// @param func 所属函数
/// @param destAddr 目标地址（要存储的内存地址）
/// @param srcVal 源值（要存储的值）
///
StoreInstruction::StoreInstruction(Function * func, Value * destAddr, Value * srcVal)
    : Instruction(func, IRInstOperator::IRINST_OP_STORE, VoidType::getType())
{
    // 添加操作数：目标地址、源值
    addOperand(destAddr);
    addOperand(srcVal);
}

/// @brief 转换成字符串显示
/// @param str 转换后的字符串
void StoreInstruction::toString(std::string & str)
{
    // 获取操作数
    Value *destAddr = getOperand(0), *srcVal = getOperand(1);

    // 格式：*目标地址 = 源值
    str = "*" + destAddr->getIRName() + " = " + srcVal->getIRName();
}