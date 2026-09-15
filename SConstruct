import sys
import os

env=SConscript("godot-cpp/SConstruct", {"api_version": "4.7"})

env.Append(CPPPATH=["src/"])
sources=Glob("src/*.cpp")

library = env.SharedLibrary(
    "bin/libfrontnations{}{}".format(env["suffix"], env["SHLIBSUFFIX"]),
    source=sources,
)

Default(library)