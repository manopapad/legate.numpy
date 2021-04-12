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

// To == __half
namespace legate {
namespace numpy {
template void PointTask<ConvertTask<__half, float>>::gpu_variant(const Task*, const std::vector<PhysicalRegion>&, Context,
                                                                 Runtime*);
template void PointTask<ConvertTask<__half, double>>::gpu_variant(const Task*, const std::vector<PhysicalRegion>&, Context,
                                                                  Runtime*);
template void PointTask<ConvertTask<__half, int16_t>>::gpu_variant(const Task*, const std::vector<PhysicalRegion>&, Context,
                                                                   Runtime*);
template void PointTask<ConvertTask<__half, int32_t>>::gpu_variant(const Task*, const std::vector<PhysicalRegion>&, Context,
                                                                   Runtime*);
template void PointTask<ConvertTask<__half, int64_t>>::gpu_variant(const Task*, const std::vector<PhysicalRegion>&, Context,
                                                                   Runtime*);
template void PointTask<ConvertTask<__half, uint16_t>>::gpu_variant(const Task*, const std::vector<PhysicalRegion>&, Context,
                                                                    Runtime*);
template void PointTask<ConvertTask<__half, uint32_t>>::gpu_variant(const Task*, const std::vector<PhysicalRegion>&, Context,
                                                                    Runtime*);
template void PointTask<ConvertTask<__half, uint64_t>>::gpu_variant(const Task*, const std::vector<PhysicalRegion>&, Context,
                                                                    Runtime*);
template void PointTask<ConvertTask<__half, bool>>::gpu_variant(const Task*, const std::vector<PhysicalRegion>&, Context, Runtime*);
}    // namespace numpy
}    // namespace legate
