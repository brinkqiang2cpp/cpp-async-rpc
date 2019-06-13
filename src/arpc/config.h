/// \file
/// \brief Header providing static configuration for arpc components.
///
/// \copyright
///   Copyright 2019 by Google LLC.
///
/// \copyright
///   Licensed under the Apache License, Version 2.0 (the "License"); you may
///   not use this file except in compliance with the License. You may obtain a
///   copy of the License at
///
/// \copyright
///   http://www.apache.org/licenses/LICENSE-2.0
///
/// \copyright
///   Unless required by applicable law or agreed to in writing, software
///   distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
///   WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
///   License for the specific language governing permissions and limitations
///   under the License.

#ifndef ARPC_CONFIG_H_
#define ARPC_CONFIG_H_

#include "arpc/binary_codecs.h"
#include "arpc/mpt.h"

namespace arpc {
namespace config {

using all_encoders =
    mpt::pack<arpc::binary_sizer, arpc::big_endian_binary_encoder,
              arpc::little_endian_binary_encoder>;

using all_decoders = mpt::pack<arpc::big_endian_binary_decoder,
                               arpc::little_endian_binary_decoder>;

}  // namespace config
}  // namespace arpc

#endif  // ARPC_CONFIG_H_