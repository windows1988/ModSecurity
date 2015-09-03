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

#ifndef SRC_OPERATORS_CONTAINS_H_
#define SRC_OPERATORS_CONTAINS_H_

#include <string>

#include "modsecurity/assay.h"
#include "operators/operator.h"

#ifdef __cplusplus
namespace ModSecurity {
namespace operators {

class Contains : public Operator {
 public:
    /** @ingroup ModSecurity_Operator */
    Contains(std::string op, std::string param, bool negation)
        : Operator(op, param, negation) { }
    bool evaluate(Assay *assay, const std::string &exp) override;

    std::list<std::string> matched;
};

}  // namespace operators
}  // namespace ModSecurity
#endif


#endif  // SRC_OPERATORS_CONTAINS_H_
