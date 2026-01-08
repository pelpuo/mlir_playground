#include "mlir/Pass/Pass.h"
#include "mlir/Dialect/Func/IR/FuncOps.h"

class AffineFullUnrollPass
    : public mlir::PassWrapper<AffineFullUnrollPass,
                         mlir::OperationPass<mlir::func::FuncOp>> {
private:
  void runOnOperation() override;  // implemented in AffineFullUnroll.cpp

  llvm::StringRef getArgument() const final { return "affine-full-unroll"; }

  llvm::StringRef getDescription() const final {
    return "Fully unroll all affine loops";
  }
};