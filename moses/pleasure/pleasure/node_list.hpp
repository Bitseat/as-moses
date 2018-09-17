#include <set>
#include <istream>

#include <moses/data/combo/vertex.h>
#include <moses/comboreduct/ant_combo_vocabulary/ant_combo_vocabulary.h>
#include <moses/data/combo/builtin_action.h>
#include <moses/data/combo/perception.h>
#include <moses/data/combo/action_symbol.h>
#include <moses/data/combo/indefinite_object.h>

namespace pleasure {
    typedef std::set<moses::combo::vertex> node_list;

    //std::istream& stream_to_node_list(std::istream& is, node_list& list);
    void stream_to_node_list(std::istream& is, node_list& list);
}

