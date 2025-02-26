set_project("Tesla")
set_version("0.1.0")

set_arch("x64")
set_plat("windows")
set_toolchains("msvc")
set_languages("c++20")

add_rules("mode.debug", "mode.release")
add_rules("plugin.compile_commands.autoupdate", {outputdir = ".vscode"})

add_requires("tbb", "glm", "assimp", "stb")

target("Tesla")
    set_kind("binary")

    add_packages("tbb", "glm", "assimp", "stb")

    add_files("src/**.cpp")
    add_headerfiles("src/**.hpp", "src/**.h")
    add_includedirs("src")
target_end()
