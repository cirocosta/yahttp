#ifndef HTTP_GEN_HH
#define HTTP_GEN_HH 

#include "yahttp/http_defs.hh"

namespace yahttp {

  class Gen
  {
  public:
    Gen();
    ~Gen();

    std::string gen_response(const HTTPMessage message);
    std::string gen_request(const HTTPMessage message);
  };

}

#endif
