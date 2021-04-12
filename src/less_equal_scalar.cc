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

#include "less_equal_scalar.h"

// instantiate LessEqualScalarTask for the types Legate handles
template class LessEqualScalarTask<__half>;
template class LessEqualScalarTask<float>;
template class LessEqualScalarTask<double>;
template class LessEqualScalarTask<int16_t>;
template class LessEqualScalarTask<int32_t>;
template class LessEqualScalarTask<int64_t>;
template class LessEqualScalarTask<uint16_t>;
template class LessEqualScalarTask<uint32_t>;
template class LessEqualScalarTask<uint64_t>;
template class LessEqualScalarTask<bool>;
