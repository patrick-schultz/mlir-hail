
#include "Optional/OptionalDialect.h"
#include "Optional/OptionalOps.h"

using namespace mlir;
using namespace hail::optional;

#include "Optional/OptionalOpsDialect.cpp.inc"

void OptionalDialect::initialize() {
  addOperations<
#define GET_OP_LIST
#include "Optional/OptionalOps.cpp.inc"
      >();
}
