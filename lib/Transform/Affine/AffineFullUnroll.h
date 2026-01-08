#include "mlir/Pass/Pass.h"

class AffineFullUnrollPass
    : public PassWrapper<AffineFullUnrollPass,
                         OperationPass<mlir::func::FuncOp>> {
private:
  void runOnOperation() override;  // implemented in AffineFullUnroll.cpp

  StringRef getArgument() const final { return "affine-full-unroll"; }

  StringRef getDescription() const final {
    return "Fully unroll all affine loops";
  }
};