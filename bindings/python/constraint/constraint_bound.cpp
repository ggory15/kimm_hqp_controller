#include "kimm_hqp_controller/bindings/python/constraint/constraint_bound.hpp"
#include "kimm_hqp_controller/bindings/python/constraint/expose_constraint.hpp"

namespace kimmhqp
{
  namespace python
  {
    void exposeConstraintBound()
    {
      ConstraintPythonVisitor<kimmhqp::math::ConstraintBound>::expose("ConstraintBound");
    }
  }
}
