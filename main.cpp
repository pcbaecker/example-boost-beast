#include "HttpsRequest.h"

// Performs an HTTP GET and prints the response
int main(int argc, char** argv) {
    try {

        HttpsRequest httpsRequest;
        httpsRequest.get("www.orderheaven.com", 443, "/");

        return EXIT_SUCCESS;
    } catch (std::exception& e) {
        std::cerr << boost::diagnostic_information(e);
        return EXIT_FAILURE;
    } catch (...) {
        std::cerr << "Unknown exception" << std::endl;
        return EXIT_FAILURE;
    }
}