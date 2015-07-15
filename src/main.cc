#include <iostream>
#include "yahttp/http_defs.hh"

using namespace yahttp;

int main(int argc, char *argv[])
{
  HTTPRequestStartLine req {
    HTTPMethod::POST,
    "/path",
    "HTTP/1.1"
  };

  HTTPResponseStartLine res {
    "HTTP/1.1",
    200,
    "Ok"
  };

  std::string body = "hue hue brbr";
  HTTPBody data (body.begin(), body.end());

  HTTPRequestMessage req_msg (
      req,
      HTTPHeaders {{"Content-Length", "1024"}},
      data
  );

  HTTPResponseMessage res_msg (
      res,
      HTTPHeaders {{"Content-Length", "1024"}},
      data
  );

  std::cout << req_msg << std::endl;
  std::cout << res_msg << std::endl;

  return 0;
}
