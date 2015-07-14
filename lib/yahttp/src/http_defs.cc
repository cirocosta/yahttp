#include "yahttp/http_defs.hh"

/**
 * For debugging purposes, properly defines output
 * streams.
 */

namespace yahttp {

std::ostream& operator<<(std::ostream& o, const HTTPMethod method)
{
  o << HTTPMethodInverseMapping.at(method);

  return o;
}

std::ostream& operator<<(std::ostream& o, const HTTPRequestStartLine& req)
{
  o << "type: request" << std::endl
    << "path: " << req.path << std::endl
    << "version: " << req.version << std::endl;

  return o;
}

std::ostream& operator<<(std::ostream& o, const HTTPResponseStartLine& res)
{
  o << "type: response" << std::endl
    << "method: " << res.method << std::endl
    << "status: " << res.status_code << std::endl
    << "reason_phrase: " << res.reason_phrase << std::endl;

  return o;
}

std::ostream& operator<<(std::ostream& o, const HTTPStartLine& line)
{
  o << line;

  return o;
}

std::ostream& operator<<(std::ostream& o, const HTTPHeaders& headers)
{
  for (const auto& header : headers)
    o << header.first << ": " << header.second << std::endl;

  return o;
}

std::ostream& operator<<(std::ostream& o, const HTTPBody& body)
{
  o << body;

  return o;
}

std::ostream& operator<<(std::ostream& o, const HTTPMessage& message)
{
  o << message.start_line << std::endl
    << message.headers << std::endl
    << message.body << std::endl;

  return o;
}

}; // !ns http

