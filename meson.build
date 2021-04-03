project('meson-vk-sample', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3', 'cpp_std=c++17'])

vk_dep = dependency('vulkan')

executable('vk_meson',
           'src/main.cpp',
		   dependencies : vk_dep,
           install : true)
