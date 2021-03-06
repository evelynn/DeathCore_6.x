# Copyright (C) 2013-2015 DeathCore <http://www.noffearrdeathproject.net/>
#
# This file is free software; as a special exception the author gives
# unlimited permission to copy and/or distribute it, with or without
# modifications, as long as this notice is preserved.
#
# This program is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY, to the extent permitted by law; without even the
# implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

if( MSVC )
  add_definitions(/W0)
else()
  add_definitions(-w)
endif()

if(CMAKE_SYSTEM_NAME MATCHES "Linux")
  if(SERVERS AND NOT NOJEM)
    add_subdirectory(jemalloc)  
  endif()
endif()

if(CMAKE_SYSTEM_NAME MATCHES "Windows")
  if(TOOLS)
    add_subdirectory(bzip2)
  endif()
  if(SERVERS OR TOOLS)
    add_subdirectory(zlib)
  endif()
endif()

if(SERVERS OR TOOLS)
  add_subdirectory(g3dlite)
  add_subdirectory(recastnavigation)
  add_subdirectory(cppformat)
endif()

if(SERVERS)
  add_subdirectory(gsoap)
  add_subdirectory(zmqpp)
endif()

if(TOOLS)
  add_subdirectory(CascLib)
endif()
