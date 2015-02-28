#ifndef NODESCWS_H
#define NODESCWS_H

#define NODESCWS_MSG_ERR 1
#define NODESCWS_MSG_WARNING 2
#define NODESCWS_MSG_LOG 3

#include <nan.h>
#include "libscws/scws.h"

class Nodescws : public node::ObjectWrap {
        public:
        static void Init(v8::Handle<v8::Object> target);
        scws_t scws;
        scws_result *result_raw_;

        private:
        Nodescws();
        ~Nodescws();
		static v8::Persistent<v8::Function> constructor;
		static NAN_METHOD(New);
		static NAN_METHOD(Segment);
		static NAN_METHOD(Destroy);

        //static v8::Handle<v8::Value> New(const v8::internal::Arguments& args);
        //static v8::Handle<v8::Value> Segment(const v8::internal::Arguments& args);
        //static v8::Handle<v8::Value> Destroy(const v8::internal::Arguments& args);
};
#endif
