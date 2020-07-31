// Copyright (c) 2017 Sony Corporation. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef NBLA_CUDA_FUNCTION_MISH_HPP
#define NBLA_CUDA_FUNCTION_MISH_HPP

#include <nbla/cuda/function/utils/base_transform_unary.hpp>
#include <nbla/function/mish.hpp>

namespace nbla {

/** @copydoc Mish
 * */
NBLA_DECLARE_TRANSFORM_UNARY_CUDA(Mish);
}
#endif