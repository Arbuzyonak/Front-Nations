import sys
import os
env = Environment()

env.Append(CPPPATH=["godot-cpp/include", "godot-cpp/gen/include", "src"])

if sys.platform == "win32":
    env.Append(CCFLAGS=["/EHs", "/GR", "/GF"])
    target_path = "bin/godot-cpp.windows.template_debug.x86_64.dll"
else:
    env.Append(CCFLAGS=["-fPIC", "-O3", "-std=c++17"])
    target_path = "bin/godot-cpp.linux.template_debug.x86_64.so"

sources = Glob("src/*.cpp")
env.SharedLibrary(target=target_path, source=sources)