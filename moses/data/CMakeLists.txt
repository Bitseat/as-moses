ADD_SUBDIRECTORY(combo)
ADD_SUBDIRECTORY(table)
ADD_SUBDIRECTORY(representation)

ADD_LIBRARY(data SHARED


	combo/action
	combo/action_symbol
	combo/argument
	combo/assumption
	combo/builtin_action
	combo/convert_ann_combo
	combo/definite_object
	combo/descriptions
	combo/enum_type
	combo/indefinite_object
	combo/iostream_combo
	combo/message
	combo/perception
	combo/procedure_call
	combo/procedure_repository
	combo/similarity
	combo/simple_nn
	combo/vertex
    table/table
    table/table_io
	representation/load_table
        )

TARGET_LINK_LIBRARIES(data
	comboreduct
	${Boost_DATE_TIME_LIBRARY}
    ${COGUTIL_LIBRARY}
	${ATOMSPACE_atombase_LIBRARY}
)


# Install library
IF (WIN32)
	INSTALL(TARGETS data DESTINATION "lib${LIB_DIR_SUFFIX}/moses")
ELSE (WIN32)
	INSTALL(TARGETS data
	        LIBRARY DESTINATION "lib${LIB_DIR_SUFFIX}"    # lib*.so files
	        ARCHIVE DESTINATION "lib${LIB_DIR_SUFFIX}")   # lib*.a files
ENDIF (WIN32)