if (NOT SYSTEM_ZLIB_FOUND)
	add_subdirectory(zlib)
endif (NOT SYSTEM_ZLIB_FOUND)

if (NOT SYSTEM_MINIZIP_FOUND)
	add_subdirectory(minizip)
endif (NOT SYSTEM_MINIZIP_FOUND)

if (NOT SYSTEM_IDN_FOUND)
	add_subdirectory(idn)
endif (NOT SYSTEM_IDN_FOUND)

if (NOT SYSTEM_QTLOCKEDFILE_FOUND)
	add_subdirectory(qtlockedfile)
endif (NOT SYSTEM_QTLOCKEDFILE_FOUND)

if (NOT SYSTEM_QXTGLOBALSHORTCUT_FOUND)
	add_subdirectory(qxtglobalshortcut)
endif (NOT SYSTEM_QXTGLOBALSHORTCUT_FOUND)

add_subdirectory(idle)
