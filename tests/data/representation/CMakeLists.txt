IF (HAVE_GUILE)
    ADD_CXXTEST(load_tableUTest)
    TARGET_LINK_LIBRARIES(load_tableUTest
#			atomese
			data
			comboreduct
            ${COGUTIL_LIBRARY}
	        ${Boost_DATE_TIME_LIBRARY}
	        ${Boost_THREAD_LIBRARY}
	        ${Boost_REGEX_LIBRARY}
            ${ATOMSPACE_LIBRARIES}
            ${GUILE_LIBRARIES}
            )
ENDIF (HAVE_GUILE)
