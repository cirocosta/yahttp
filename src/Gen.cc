#include "yahttp/Gen.hh"

// We don't really need this! We just need to support the
// ostream stuff for those structs in a proper way!
//
// fuck!

namespace yahttp {

  // TODO go with std::snprintf c++11 solution
  std::string Gen::gen_request (const HTTPRequestMessage& message)
  {
    std::ostringstream res;


    return res.str();
  }

  std::string Gen::gen_response (const HTTPResponseMessage& message)
  {
    std::ostringstream req;

    return req.str();
  }

};
