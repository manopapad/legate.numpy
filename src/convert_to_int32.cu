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

#include "convert.h"

using namespace Legion;

// instantiate Convert's tasks' gpu variants
// we omit the T1 == T2 case

// To == int32_t
namespace legate {
namespace numpy {
template void PointTask<ConvertTask<int32_t, __half>>::gpu_variant(const Task*, const std::vector<PhysicalRegion>&, Context,
                                                                   Runtime*);
template void PointTask<ConvertTask<int32_t, float>>::gpu_variant(const Task*, const std::vector<PhysicalRegion>&, Context,
                                                                  Runtime*);
template void PointTask<ConvertTask<int32_t, double>>::gpu_variant(const Task*, const std::vector<PhysicalRegion>&, Context,
                                                                   Runtime*);
template void PointTask<ConvertTask<int32_t, int16_t>>::gpu_variant(const Task*, const std::vector<PhysicalRegion>&, Context,
                                                                    Runtime*);
template void PointTask<ConvertTask<int32_t, int64_t>>::gpu_variant(const Task*, const std::vector<PhysicalRegion>&, Context,
                                                                    Runtime*);
template void PointTask<ConvertTask<int32_t, uint16_t>>::gpu_variant(const Task*, const std::vector<PhysicalRegion>&, Context,
                                                                     Runtime*);
template void PointTask<ConvertTask<int32_t, uint32_t>>::gpu_variant(const Task*, const std::vector<PhysicalRegion>&, Context,
                                                                     Runtime*);
template void PointTask<ConvertTask<int32_t, uint64_t>>::gpu_variant(const Task*, const std::vector<PhysicalRegion>&, Context,
                                                                     Runtime*);
template void PointTask<ConvertTask<int32_t, bool>>::gpu_variant(const Task*, const std::vector<PhysicalRegion>&, Context,
                                                                 Runtime*);
}    // namespace numpy
}    // namespace legate
