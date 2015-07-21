#ifndef HTTP_GEN_HH
#define HTTP_GEN_HH

#include "yahttp/HTTP.hh"
#include <sstream>

namespace yahttp {

  class Gen
  {
  public:
    Gen () {}
    ~Gen () {}

    std::string gen_request (const HTTPRequestMessage& message);
    std::string gen_response (const HTTPResponseMessage& message);
  };

}

#endif
