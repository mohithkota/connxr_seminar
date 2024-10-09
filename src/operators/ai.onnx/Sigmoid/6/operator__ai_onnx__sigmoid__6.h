//this file was generated by ../../../../../../scripts/onnx_generator/OperatorHeader.py
# ifndef OPERATOR_OPERATOR__AI_ONNX__SIGMOID__6_H
# define OPERATOR_OPERATOR__AI_ONNX__SIGMOID__6_H

# include "operators/operator.h"
# include "operators/operator_stub.h"
# include "operators/operator_info.h"

/**
 * ai.onnx operator 'Sigmoid' version 6
 *
 * @param[in]  ctx  Operator context
 * @return          Status code
 *
 * Sigmoid takes one input data (Tensor<T>) and produces one output data
 * (Tensor<T>) where the sigmoid function, y = 1 / (1 + exp(-x)), is applied to the
 * tensor elementwise.
 * 
 * Constraint T:
 *   Constrain input and output types to float tensors.
 *   Allowed Types: tensor_double, tensor_float, tensor_float16
 * Input T X:
 *   Input tensor
 *   Allowed Types: tensor_double, tensor_float, tensor_float16
 * Output T Y:
 *   Output tensor
 *   Allowed Types: tensor_double, tensor_float, tensor_float16

 *
 * @since version 6
 *
 * @see io/onnx/onnx/defs/math/defs.cc:640
 * @see https://github.com/onnx/onnx/blob/master/docs/Operators.md#Sigmoid
 */

operator_status
prepare_operator__ai_onnx__sigmoid__6(
    node_context *ctx
);

extern operator_info info_operator__ai_onnx__sigmoid__6;

typedef struct {
// no attributes
} context_operator__ai_onnx__sigmoid__6;

operator_executer
resolve_operator__ai_onnx__sigmoid__6(
    node_context *ctx
);

operator_status
execute_operator__ai_onnx__sigmoid__6(
    node_context *ctx
);

operator_status
execute_operator__ai_onnx__sigmoid__6__T_tensor_double(
    node_context *ctx
);

operator_status
execute_operator__ai_onnx__sigmoid__6__T_tensor_float(
    node_context *ctx
);

operator_status
execute_operator__ai_onnx__sigmoid__6__T_tensor_float16(
    node_context *ctx
);

# endif