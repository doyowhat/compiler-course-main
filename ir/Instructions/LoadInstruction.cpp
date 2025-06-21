#include "LoadInstruction.h"
#include "VoidType.h"

///
/// @brief 构造函数
/// @param func 所属函数
/// @param dest 目标变量（存储加载的值）
/// @param srcAddr 源地址（要加载的内存地址）
///
LoadInstruction::LoadInstruction(Function * func, Value * dest, Value * srcAddr)
    : Instruction(func, IRInstOperator::IRINST_OP_LOAD, VoidType::getType())
{
    // 添加操作数：目标变量、源地址
    addOperand(dest);
    addOperand(srcAddr);
}

/// @brief 转换成字符串显示
/// @param str 转换后的字符串
void LoadInstruction::toString(std::string & str)
{
    // 获取操作数
    Value *dest = getOperand(0), *srcAddr = getOperand(1);

    // 格式：目标变量 = *源地址
    str = dest->getIRName() + " = *" + srcAddr->getIRName();
}