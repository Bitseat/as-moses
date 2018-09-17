ADD_CXXTEST(type_treeUTest)
TARGET_LINK_LIBRARIES(type_treeUTest
	comboant
	data
	comboreduct
	${COGUTIL_LIBRARY}
)
