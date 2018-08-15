ADD_CXXTEST(tableUTest)
TARGET_LINK_LIBRARIES(tableUTest
	data
	comboreduct
	comboant
	${Boost_DATE_TIME_LIBRARY}
	${COGUTIL_LIBRARY}
	${ATOMSPACE_atombase_LIBRARY}
)

ADD_CXXTEST(completeTruthTableUTest)
TARGET_LINK_LIBRARIES(completeTruthTableUTest
	data
	comboreduct
    comboant
	${COGUTIL_LIBRARY}
	${ATOMSPACE_LIBRARIES}
)