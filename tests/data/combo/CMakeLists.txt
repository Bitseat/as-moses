ADD_CXXTEST(vertexUTest)
TARGET_LINK_LIBRARIES(vertexUTest
	comboreduct
	comboant
	data
	${COGUTIL_LIBRARY}
)

ADD_CXXTEST(messageUTest)
TARGET_LINK_LIBRARIES(messageUTest
	comboreduct
	comboant
	data
	${COGUTIL_LIBRARY}
)

ADD_CXXTEST(listUTest)
TARGET_LINK_LIBRARIES(listUTest
	comboreduct
	comboant
	data
	${COGUTIL_LIBRARY}
)

ADD_CXXTEST(similarityUTest)
TARGET_LINK_LIBRARIES(similarityUTest
	comboreduct
	comboant
	data
	${COGUTIL_LIBRARY}
)

ADD_CXXTEST(annUTest)
TARGET_LINK_LIBRARIES(annUTest
	comboreduct
	data
	${COGUTIL_LIBRARY}
)

ADD_CXXTEST(procedure_callUTest)
TARGET_LINK_LIBRARIES(procedure_callUTest
	comboreduct
	comboant
	data
	${COGUTIL_LIBRARY}
)

ADD_CXXTEST(procedure_repositoryUTest)
TARGET_LINK_LIBRARIES(procedure_repositoryUTest
	comboreduct
	comboant
	data
	${COGUTIL_LIBRARY}
)

ADD_CXXTEST(interpreterUTest)
TARGET_LINK_LIBRARIES(interpreterUTest
	comboreduct
	comboant
	data
	${COGUTIL_LIBRARY}
)

ADD_CXXTEST(iostream_comboUTest)
TARGET_LINK_LIBRARIES(iostream_comboUTest
	comboreduct
	comboant
	data
	${COGUTIL_LIBRARY}
)
