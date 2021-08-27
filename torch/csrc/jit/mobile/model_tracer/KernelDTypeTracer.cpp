#include <torch/csrc/jit/mobile/model_tracer/KernelDTypeTracer.h>
#include <map>
#include <set>
#include <string>

namespace torch::jit::mobile {
KernelDTypeTracer::kernel_tags_type& KernelDTypeTracer::getCalledKernelTags() {
  static kernel_tags_type called_kernel_tags;
  return called_kernel_tags;
}
} // namespace torch::jit::mobile
