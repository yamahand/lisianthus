workspace "lisianthus"
configurations { "Debug", "Profile", "Release" }
    platforms "Win64"
    location "build"

filter { "platforms:Win64" }
    system "Windows"
    architecture "x64"

project "lisianthus"
    location "build"
    kind "StaticLib"
    language "C++"
    files { "include/**.h", "src/**.cpp", "include/**.inl", "src/**.inl" }
    pchheader "stdafx.h"
    pchsource "src/stdafx.cpp"
    includedirs { "include" }

    filter { "configurations:Debug" }
    defines { "DEBUG" }
    flags { "Symbols" }

    filter { "configurations:Release" }
    defines { "NDEBUG" }
    optimize "On"

project "example"
    location "build"
    kind "ConsoleApp"
    language "C++"
    files { "example/**.h", "example/**.cpp", "example/**.inl" }
    links { "lisianthus" }
    includedirs { "include" }

    filter { "configurations:Debug" }
    defines { "DEBUG" }
    flags { "Symbols" }

    filter { "configurations:Release" }
    defines { "NDEBUG" }
    optimize "On"
