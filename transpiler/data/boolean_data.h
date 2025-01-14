// Copyright 2021 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef FULLY_HOMOMORPHIC_ENCRYPTION_TRANSPILER_DATA_BOOLEAN_DATA_H_
#define FULLY_HOMOMORPHIC_ENCRYPTION_TRANSPILER_DATA_BOOLEAN_DATA_H_

#include <assert.h>
#include <stddef.h>
#include <stdint.h>

#include <string>
#include <type_traits>

#include "absl/base/casts.h"
#include "absl/container/fixed_array.h"
#include "absl/types/span.h"
#include "transpiler/data/cleartext_value.h"
#include "transpiler/data/primitives_cleartext.types.h"

// Corresponds to std::string
using EncodedString = EncodedArray<char>;
using EncodedStringRef = EncodedArrayRef<char>;
// Corresponds to char
using EncodedChar = EncodedPrimitiveChar;
using EncodedCharRef = EncodedPrimitiveCharRef;
// Corresponds to signed/unsigned char
using EncodedSignedChar = EncodedPrimitiveSignedChar;
using EncodedSignedCharRef = EncodedPrimitiveSignedCharRef;
using EncodedUnsignedChar = EncodedPrimitiveUnsignedChar;
using EncodedUnsignedCharRef = EncodedPrimitiveUnsignedCharRef;
// Corresponds to long
using EncodedLong = EncodedPrimitiveSignedLong;
using EncodedLongRef = EncodedPrimitiveSignedLongRef;
using EncodedUnsignedLong = EncodedPrimitiveUnsignedLong;
using EncodedUnsignedLongRef = EncodedPrimitiveUnsignedLongRef;
// Corresponds to int
using EncodedInt = EncodedPrimitiveSignedInt;
using EncodedIntRef = EncodedPrimitiveSignedIntRef;
using EncodedUnsignedInt = EncodedPrimitiveUnsignedInt;
using EncodedUnsignedIntRef = EncodedPrimitiveUnsignedIntRef;
// Corresponds to short
using EncodedShort = EncodedPrimitiveSignedShort;
using EncodedShortRef = EncodedPrimitiveSignedShortRef;
using EncodedUnsignedShort = EncodedPrimitiveUnsignedShort;
using EncodedUnsignedShortRef = EncodedPrimitiveUnsignedShortRef;
// Corresponds to bool
using EncodedBit = EncodedPrimitiveBool;
using EncodedBitRef = EncodedPrimitiveBoolRef;
using EncodedBool = EncodedPrimitiveBool;
using EncodedBoolRef = EncodedPrimitiveBoolRef;

#endif  // FULLY_HOMOMORPHIC_ENCRYPTION_TRANSPILER_DATA_BOOLEAN_DATA_H_
