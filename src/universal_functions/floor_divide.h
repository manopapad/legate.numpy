/* Copyright 2021 NVIDIA Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef __NUMPY_FLOOR_DIVIDE_H__
#define __NUMPY_FLOOR_DIVIDE_H__

#include "universal_function.h"
#include <cmath>

namespace legate {
namespace numpy {
using std::floor;
template<class T>
struct FloorDivideOperation {
  using first_argument_type     = T;
  using second_argument_type    = T;
  constexpr static auto op_code = NumPyOpCode::NUMPY_FLOOR_DIVIDE;

  constexpr T operator()(const T& a, const T& b) const { return floor(a / b); }
};

// Standard data-parallel division task
template<typename T>
using FloorDivide = NoncommutativeBinaryUniversalFunction<FloorDivideOperation<T>>;
}    // namespace numpy
}    // namespace legate

#endif    // __NUMPY_FLOOR_DIVIDE_H__
