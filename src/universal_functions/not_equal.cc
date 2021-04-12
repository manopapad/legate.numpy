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

#include "not_equal.h"

// instantiate NotEqual's tasks for all Legate types
namespace legate {
namespace numpy {
template void NotEqual<__half>::instantiate_tasks();
template void NotEqual<float>::instantiate_tasks();
template void NotEqual<double>::instantiate_tasks();
template void NotEqual<int16_t>::instantiate_tasks();
template void NotEqual<int32_t>::instantiate_tasks();
template void NotEqual<int64_t>::instantiate_tasks();
template void NotEqual<uint16_t>::instantiate_tasks();
template void NotEqual<uint32_t>::instantiate_tasks();
template void NotEqual<uint64_t>::instantiate_tasks();
template void NotEqual<bool>::instantiate_tasks();
template void NotEqual<complex<float>>::instantiate_tasks();
template void NotEqual<complex<double>>::instantiate_tasks();
}    // namespace numpy
}    // namespace legate
