#pragma once

#include "cqhttp/core/plugin.h"

namespace cqhttp::plugins {
    struct Http : Plugin {
        void hook_enable(Context &ctx) override {
            logging::debug("wow", "你好");
            ctx.next();
        }

        void hook_message_event(EventContext<cq::MessageEvent> &ctx) override {
            logging::debug("你好", "wow");
            ctx.next();
        }
    };

    static std::shared_ptr<Http> http = std::make_shared<Http>();
} // namespace cqhttp::plugins