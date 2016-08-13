/* This is the source code of Brain Programming Language.
 * It is licensed under GNU GPL v. 3 or later.
 * You should have received a copy of the license in this archive (see LICENSE).
 *
 * Copyright Brain, 2016.
 */

#ifndef SHIFT_EXPR_H
#define SHIFT_EXPR_H

#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/Module.h>

#include <iostream>

#include "Expr.h"

/**
 * @brief Class that represents the shift operator in Brain.
 */
class ShiftExpr : public Expr
{
protected:
    ///
    int _step;
public:
    ShiftExpr(int step) : _step(step) {}
    ~ShiftExpr() {}
    /**
     * @brief
     * @param M
     * @param B
     * @param BreakBB
     */
    void code_gen(llvm::Module *M,
             llvm::IRBuilder<> &B,
        llvm::BasicBlock *BreakBB);
    /**
     * @brief
     * @param level
     */
    void debug_description(int level);
    /**
     * @brief
     * @param level
     */
    bool update_expression(char update);
    /**
     * @brief
     */
    void ast_code_gen();
};

#endif  // SHIFT_EXPR_H
