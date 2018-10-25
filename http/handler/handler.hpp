#pragma once

#include <http/request.hpp>
#include <http/response.hpp>


namespace NAC {
    namespace NHTTPHandler {
        class THandler {
        public:
            virtual ~THandler();

            virtual void Handle(
                const NHTTP::TRequest& request,
                const std::vector<std::string>& args
            ) = 0;
        };
    }
}
