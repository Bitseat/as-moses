ADD_CXXTEST(tableUTest)
TARGET_LINK_LIBRARIES(tableUTest
	comboreduct
	comboant
	${Boost_DATE_TIME_LIBRARY}
	${COGUTIL_LIBRARY}
	${ATOMSPACE_atombase_LIBRARY}
)

ADD_CXXTEST(completeTruthTableUTest)
TARGET_LINK_LIBRARIES(completeTruthTableUTest
	comboreduct
    comboant
	${COGUTIL_LIBRARY}
	${ATOMSPACE_LIBRARIES}
)