#ifndef EXAMPLE_BOOST_BEAST_HTTPSREQUEST_H
#define EXAMPLE_BOOST_BEAST_HTTPSREQUEST_H

#include <boost/exception/all.hpp>
#include <boost/beast/core.hpp>
#include <boost/beast/http.hpp>
#include <boost/beast/version.hpp>
#include <boost/asio/connect.hpp>
#include <boost/asio/ip/tcp.hpp>
#include <boost/asio/ssl/error.hpp>
#include <boost/asio/ssl/stream.hpp>
#include <cstdlib>
#include <iostream>
#include <string>

typedef boost::error_info<struct HttpHost,std::string> HttpsRequestErrorInfoHost;
typedef boost::error_info<struct HttpPort,uint16_t> HttpsRequestErrorInfoPort;
typedef boost::error_info<struct HttpPath,std::string> HttpsRequestErrorInfoPath;

class HttpsRequest {
public:
    void get(const std::string& host, uint16_t port, const std::string& path);
};

#endif //EXAMPLE_BOOST_BEAST_HTTPSREQUEST_H
