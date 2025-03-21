#pragma once
#include "tensorflow/lite/micro/micro_mutable_op_resolver.h"
#include "tensorflow/lite/micro/kernels/micro_ops.h"

#define CREATE_ALL_OPS_RESOLVER(resolver_name)                \
    static tflite::MicroMutableOpResolver<128> resolver_name; \
    resolver_name.AddAbs();                                   \
    resolver_name.AddAdd();                                   \
    resolver_name.AddArgMax();                                \
    resolver_name.AddArgMin();                                \
    resolver_name.AddAveragePool2D();                         \
    resolver_name.AddCeil();                                  \
    resolver_name.AddConcatenation();                         \
    resolver_name.AddConv2D();                                \
    resolver_name.AddCos();                                   \
    resolver_name.AddDepthwiseConv2D();                       \
    resolver_name.AddDequantize();                            \
    resolver_name.AddEqual();                                 \
    resolver_name.AddFloor();                                 \
    resolver_name.AddFullyConnected();                        \
    resolver_name.AddGreater();                               \
    resolver_name.AddGreaterEqual();                          \
    resolver_name.AddHardSwish();                             \
    resolver_name.AddL2Normalization();                       \
    resolver_name.AddLess();                                  \
    resolver_name.AddLessEqual();                             \
    resolver_name.AddLog();                                   \
    resolver_name.AddLogicalAnd();                            \
    resolver_name.AddLogicalNot();                            \
    resolver_name.AddLogicalOr();                             \
    resolver_name.AddLogistic();                              \
    resolver_name.AddMaximum();                               \
    resolver_name.AddMaxPool2D();                             \
    resolver_name.AddMean();                                  \
    resolver_name.AddMinimum();                               \
    resolver_name.AddMul();                                   \
    resolver_name.AddNeg();                                   \
    resolver_name.AddNotEqual();                              \
    resolver_name.AddPack();                                  \
    resolver_name.AddPad();                                   \
    resolver_name.AddPadV2();                                 \
    resolver_name.AddPrelu();                                 \
    resolver_name.AddQuantize();                              \
    resolver_name.AddReduceMax();                             \
    resolver_name.AddRelu();                                  \
    resolver_name.AddRelu6();                                 \
    resolver_name.AddReshape();                               \
    resolver_name.AddResizeNearestNeighbor();                 \
    resolver_name.AddRound();                                 \
    resolver_name.AddRsqrt();                                 \
    resolver_name.AddShape();                                 \
    resolver_name.AddSin();                                   \
    resolver_name.AddSoftmax();                               \
    resolver_name.AddSplit();                                 \
    resolver_name.AddSplitV();                                \
    resolver_name.AddSqrt();                                  \
    resolver_name.AddSquare();                                \
    resolver_name.AddStridedSlice();                          \
    resolver_name.AddSub();                                   \
    resolver_name.AddSvdf();                                  \
    resolver_name.AddTanh();                                  \
    resolver_name.AddUnpack();

// end of file