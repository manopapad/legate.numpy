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

#ifndef __NUMPY_MULTIPLY_H__
#define __NUMPY_MULTIPLY_H__

#include "universal_function.h"
#include <functional>

namespace legate {
namespace numpy {
template<class T>
struct MultiplyOperation : std::multiplies<T> {
  constexpr static auto op_code = NumPyOpCode::NUMPY_MULTIPLY;

  template<typename U, typename V>
  __CUDA_HD__ auto operator()(U&& u, V&& v) const {
    return std::forward<U>(u) * std::forward<V>(v);
  }
};

// Standard data-parallel multiply task
template<typename T>
using Multiply = BinaryUniversalFunction<MultiplyOperation<T>>;
}    // namespace numpy
}    // namespace legate

#endif    // __NUMPY_MULTIPLY_H__
