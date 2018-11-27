#include <moses/data/table/table.h>
#include <moses/data/table/table_io.h>
#include <opencog/atomspace/AtomSpace.h>
#include <moses/utils/value_key.h>
#include <opencog/atoms/base/Link.h>
#include "populate_atomspace.h"

namespace opencog{
    namespace moses {

void populate(AtomSpace& as,  ITable &itable) {

    std::vector<multi_type_seq>::const_iterator it,end;
     in = createNode(SCHEMA_NODE, "inputs");
     std::vector<ProtoAtomPtr> col_patm ={};

    int col_size = itable.get_types().size();
    for (int i=0; i< col_size;  i++) {
        id::type_node col_type = itable.get_types().at(i);

        int row_size = itable.size();

        switch (col_type) {
            case id::boolean_type: {
                std::vector <ProtoAtomPtr> col_values = {};
                for (int j = 0; j < row_size; j++) {
                    // for each element the ith column and the jth row
                    // change the vertex to bool
                    bool col_data = vertex_to_bool(itable.get_column_data(itable.get_labels().at(i)).at(j));
                    col_values.push_back(ProtoAtomPtr(createLink(col_data ? TRUE_LINK : FALSE_LINK)));
                }
                ProtoAtomPtr ptr_atom(new LinkValue(col_values));
                in->setValue(value_key, ptr_atom);
                break;

            }
            case id::contin_type: {
                std::vector<double> col_values_contin = {};
                for (int j = 0; j < row_size; j++)
                    col_values_contin.push_back(
                            get_contin(itable.get_column_data(itable.get_labels().at(i)).at(j)));

                ProtoAtomPtr ptr_atom(new FloatValue(col_values_contin));
                col_patm.push_back(ptr_atom);
                auto test1 = FloatValueCast(ptr_atom)->value();
                break;
            }
            case id::enum_type: {
                //TODO enum_type data to be added to Atomspace
                break;
            }

            default: {
                std::stringstream ss;
                ss << col_type;
                throw ComboException(TRACE_INFO,
                                     "populate atomspace can not handle type_node %s",
                                      ss.str().c_str());
                break;
            }

        }
    }
    ProtoAtomPtr proto_link(new LinkValue(col_patm));
    auto test2 = LinkValueCast(proto_link)->value();

    for (const ProtoAtomPtr ts : test2)
    {
        auto test3= FloatValueCast(ts)->value();
    }

    in->setValue(value_key,proto_link);
    as.add_atom(in);


}

void populate_otable(AtomSpace *as, const OTable &target){
    id::type_node out_type = target.get_type();
    Handle out;
    int target_size = target.size();
    switch (out_type){
        case id::boolean_type:
        {
            std::vector<ProtoAtomPtr> values = {};
            for (int j = 0; j < target_size; j++)
            {
                bool out_data = vertex_to_bool(target.at(j));
                values.push_back(ProtoAtomPtr(createLink(out_data ? TRUE_LINK : FALSE_LINK)));
            }
            ProtoAtomPtr ptr_atom(new LinkValue(values));
            out->setValue(opencog::moses::value_key, ptr_atom);

        }

        case id::contin_type:
        {
            std::vector<double> col_values_contin = {};
            for (int j = 0; j < target_size; j++) {
                col_values_contin.push_back(get_contin(target.at(j)));
            }
            ProtoAtomPtr ptr_atom(new FloatValue(col_values_contin));
            out->setValue(opencog::moses::value_key, ptr_atom);

        }
        case id::enum_type:
        {
            //TODO enum populate add Atomspace
        }
        default: {
            std::stringstream ss;
//            ss << col_type;
            throw ComboException(TRACE_INFO,
                                 "populate atomspace can not handle type_node %s",
                                 ss.str().c_str());

        }

    }

  //  as.add_atom(out);


}



}
}