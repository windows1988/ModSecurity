/*
 * ModSecurity, http://www.modsecurity.org/
 * Copyright (c) 2015 Trustwave Holdings, Inc. (http://www.trustwave.com/)
 *
 * You may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * If any of the files related to licensing are missing or if you have any
 * other questions related to licensing please contact Trustwave Holdings, Inc.
 * directly using the email address security@modsecurity.org.
 * 
 */

#include "operators/contains.h"

#include <string>

namespace ModSecurity {
namespace operators {

bool Contains::evaluate(Assay *assay, const std::string &input) {
    bool contains = input.find(param) != std::string::npos;

    if (contains) {
        matched.push_back(param);
    }

    if (negation) {
        return !contains;
    }

    return contains;
}

}  // namespace operators
}  // namespace ModSecurity
