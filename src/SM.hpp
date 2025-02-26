#pragma once

#include "CCache.hpp"
#include "Common.h"
#include "ICache.hpp"
#include "MTissue.hpp"
#include "SFU.hpp"
#include "SP.hpp"
#include "SharedMemory.hpp"

namespace gpu {
class StreamingMultiprocessor {
public:
  StreamingMultiprocessor();
  ~StreamingMultiprocessor();

private:
  InstructionCache i_cache;
  ConstantCache c_cache;
  MultiThreadedIssue mt_issue;
  StreamingProcessor sp_list[8];
  SpecialFunctionUnit sfu_list[2];
  SharedMemory shared_memory;
};
} // namespace gpu