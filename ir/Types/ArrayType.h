#pragma once

#include "Type.h"
#include <vector>
#include <string>
#include <iostream>

/// @brief 数组类型类
///
/// @author zenglj (zenglj@live.com)
/// @version 1.0
/// @date 2025-06-20
///
/// @copyright Copyright (c) 2025
///
/// @par 修改日志:
/// <table>
/// <tr><th>Date       <th>Version <th>Author  <th>Description
/// <tr><td>2025-06-20 <td>1.0     <td>zenglj  <td>新建
/// </table>
///
class ArrayType : public Type {

public:
    ///
    /// @brief 创建数组类型
    /// @param elementType 元素类型
    /// @param dimensions 维度数组
    ///
    ArrayType(Type * _elementType, const std::vector<int> & _dimensions)
        : Type(ArrayTyID), elementType(_elementType), dimensions(_dimensions)
    {}
    ///
    /// @brief 获取数组类型的字符串表示
    /// @return std::string
    ///
    [[nodiscard]] std::string toString() const override
    {
        std::string typeStr;

        // 递归添加维度
        if (elementType) {
            typeStr += elementType->toString();
        }

        for (int dim: dimensions) {
            typeStr += "[" + std::to_string(dim) + "]";
        }
        return typeStr;
    }

    ///
    /// @brief 获取元素类型
    /// @return Type*
    ///
    Type * getElementType() const
    {
        return elementType;
    }

    ///
    /// @brief 获取维度信息
    /// @return const std::vector<int>&
    ///
    const std::vector<int> & getDimensions() const
    {
        return dimensions;
    }

    ///
    /// @brief 获取数组元素的大小（字节数）
    /// @return int
    ///
    int getElementSize() const
    {
        // 所有元素固定为4字节（int类型）
        return 4;
    }

    ///
    /// @brief 获取数组总大小（字节数）
    /// @return int
    ///
    [[nodiscard]] int32_t getSize() const override
    {
        int size = 1;
        for (int dim: dimensions) {
            if (dim == 0) {
                // 形式参数数组（第一维为0）
                return 4; // 返回指针大小
            }
            size *= dim;
        }
        return size * getElementSize();
    }

    ///
    /// @brief 获取数组总元素个数
    /// @return int
    ///
    int getTotalElements() const
    {
        int count = 1;
        for (int dim: dimensions) {
            count *= dim;
        }
        return count;
    }

private:
    /// @brief 元素类型
    Type * elementType;

    /// @brief 维度信息
    std::vector<int> dimensions;
};