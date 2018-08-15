IF (HAVE_GUILE)
    ADD_CXXTEST(load_tableUTest)
    TARGET_LINK_LIBRARIES(load_tableUTest
            atomese
            ${COGUTIL_LIBRARY}
            ${ATOMSPACE_atombase_LIBRARY}
            ${GUILE_LIBRARIES}
            )
ENDIF (HAVE_GUILE)
