#pragma once

#include "Common.h"
#include "GeometryController.hpp"
#include "SM.hpp"
#include "SMC.hpp"
#include "TextureUnit.hpp"

namespace gpu {
class TextureProcessingCluster {
public:
  TextureProcessingCluster();
  ~TextureProcessingCluster();

private:
  GeometryController geometry_controller;
  StreamingMultiprocessorController sm_controller;
  StreamingMultiprocessor sm_list[2];
  TextureUnit texture_unit;
};
} // namespace gpu