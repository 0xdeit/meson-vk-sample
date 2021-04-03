#include <iostream>
#include <vector>
#include <vulkan/vulkan.h>

int main() {
  uint32_t layers = 0;
  vkEnumerateInstanceLayerProperties(&layers, nullptr);

  std::vector<VkLayerProperties> available_layers(layers);
  vkEnumerateInstanceLayerProperties(&layers, available_layers.data());

  for (const auto &layer_properties : available_layers) {
    std::cout << "Validation layer found: " << layer_properties.layerName
              << "\n";
  }

  return 0;
}
