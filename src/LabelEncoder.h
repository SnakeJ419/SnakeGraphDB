#ifndef SG_LABEL_BUILDER
#define SG_LABEL_BUILDER

#include <string>

#include "Label.h"

namespace SnakeGraph {
    class LabelEncoder {
        public:
            static Label* decodeLabel(std::string encodedString);
    };
}

#endif