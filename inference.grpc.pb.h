// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: inference.proto
// Original file comments:
// vim:sw=2:ts=2:sts=2:
#ifndef GRPC_inference_2eproto__INCLUDED
#define GRPC_inference_2eproto__INCLUDED

#include "inference.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace inference {

class ShapeDetection final {
 public:
  static constexpr char const* service_full_name() {
    return "inference.ShapeDetection";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status Detect(::grpc::ClientContext* context, const ::inference::DetectionRequest& request, ::inference::DetectionResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::inference::DetectionResponse>> AsyncDetect(::grpc::ClientContext* context, const ::inference::DetectionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::inference::DetectionResponse>>(AsyncDetectRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::inference::DetectionResponse>> PrepareAsyncDetect(::grpc::ClientContext* context, const ::inference::DetectionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::inference::DetectionResponse>>(PrepareAsyncDetectRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::inference::DetectionResponse>* AsyncDetectRaw(::grpc::ClientContext* context, const ::inference::DetectionRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::inference::DetectionResponse>* PrepareAsyncDetectRaw(::grpc::ClientContext* context, const ::inference::DetectionRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status Detect(::grpc::ClientContext* context, const ::inference::DetectionRequest& request, ::inference::DetectionResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::inference::DetectionResponse>> AsyncDetect(::grpc::ClientContext* context, const ::inference::DetectionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::inference::DetectionResponse>>(AsyncDetectRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::inference::DetectionResponse>> PrepareAsyncDetect(::grpc::ClientContext* context, const ::inference::DetectionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::inference::DetectionResponse>>(PrepareAsyncDetectRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::inference::DetectionResponse>* AsyncDetectRaw(::grpc::ClientContext* context, const ::inference::DetectionRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::inference::DetectionResponse>* PrepareAsyncDetectRaw(::grpc::ClientContext* context, const ::inference::DetectionRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Detect_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Detect(::grpc::ServerContext* context, const ::inference::DetectionRequest* request, ::inference::DetectionResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Detect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Detect() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Detect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Detect(::grpc::ServerContext* context, const ::inference::DetectionRequest* request, ::inference::DetectionResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestDetect(::grpc::ServerContext* context, ::inference::DetectionRequest* request, ::grpc::ServerAsyncResponseWriter< ::inference::DetectionResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Detect<Service > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_Detect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Detect() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Detect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Detect(::grpc::ServerContext* context, const ::inference::DetectionRequest* request, ::inference::DetectionResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Detect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Detect() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::inference::DetectionRequest, ::inference::DetectionResponse>(std::bind(&WithStreamedUnaryMethod_Detect<BaseClass>::StreamedDetect, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Detect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Detect(::grpc::ServerContext* context, const ::inference::DetectionRequest* request, ::inference::DetectionResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedDetect(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::inference::DetectionRequest,::inference::DetectionResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Detect<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_Detect<Service > StreamedService;
};

class ObjectDetection final {
 public:
  static constexpr char const* service_full_name() {
    return "inference.ObjectDetection";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    std::unique_ptr< ::grpc::ClientReaderInterface< ::inference::Object>> Detect(::grpc::ClientContext* context, const ::inference::DetectionRequest& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::inference::Object>>(DetectRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::inference::Object>> AsyncDetect(::grpc::ClientContext* context, const ::inference::DetectionRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::inference::Object>>(AsyncDetectRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::inference::Object>> PrepareAsyncDetect(::grpc::ClientContext* context, const ::inference::DetectionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::inference::Object>>(PrepareAsyncDetectRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientReaderInterface< ::inference::Object>* DetectRaw(::grpc::ClientContext* context, const ::inference::DetectionRequest& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::inference::Object>* AsyncDetectRaw(::grpc::ClientContext* context, const ::inference::DetectionRequest& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::inference::Object>* PrepareAsyncDetectRaw(::grpc::ClientContext* context, const ::inference::DetectionRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    std::unique_ptr< ::grpc::ClientReader< ::inference::Object>> Detect(::grpc::ClientContext* context, const ::inference::DetectionRequest& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::inference::Object>>(DetectRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::inference::Object>> AsyncDetect(::grpc::ClientContext* context, const ::inference::DetectionRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::inference::Object>>(AsyncDetectRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::inference::Object>> PrepareAsyncDetect(::grpc::ClientContext* context, const ::inference::DetectionRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::inference::Object>>(PrepareAsyncDetectRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientReader< ::inference::Object>* DetectRaw(::grpc::ClientContext* context, const ::inference::DetectionRequest& request) override;
    ::grpc::ClientAsyncReader< ::inference::Object>* AsyncDetectRaw(::grpc::ClientContext* context, const ::inference::DetectionRequest& request, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReader< ::inference::Object>* PrepareAsyncDetectRaw(::grpc::ClientContext* context, const ::inference::DetectionRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Detect_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Detect(::grpc::ServerContext* context, const ::inference::DetectionRequest* request, ::grpc::ServerWriter< ::inference::Object>* writer);
  };
  template <class BaseClass>
  class WithAsyncMethod_Detect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Detect() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Detect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Detect(::grpc::ServerContext* context, const ::inference::DetectionRequest* request, ::grpc::ServerWriter< ::inference::Object>* writer) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestDetect(::grpc::ServerContext* context, ::inference::DetectionRequest* request, ::grpc::ServerAsyncWriter< ::inference::Object>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(0, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Detect<Service > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_Detect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Detect() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Detect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Detect(::grpc::ServerContext* context, const ::inference::DetectionRequest* request, ::grpc::ServerWriter< ::inference::Object>* writer) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  typedef Service StreamedUnaryService;
  template <class BaseClass>
  class WithSplitStreamingMethod_Detect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithSplitStreamingMethod_Detect() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::SplitServerStreamingHandler< ::inference::DetectionRequest, ::inference::Object>(std::bind(&WithSplitStreamingMethod_Detect<BaseClass>::StreamedDetect, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithSplitStreamingMethod_Detect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Detect(::grpc::ServerContext* context, const ::inference::DetectionRequest* request, ::grpc::ServerWriter< ::inference::Object>* writer) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with split streamed
    virtual ::grpc::Status StreamedDetect(::grpc::ServerContext* context, ::grpc::ServerSplitStreamer< ::inference::DetectionRequest,::inference::Object>* server_split_streamer) = 0;
  };
  typedef WithSplitStreamingMethod_Detect<Service > SplitStreamedService;
  typedef WithSplitStreamingMethod_Detect<Service > StreamedService;
};

}  // namespace inference


#endif  // GRPC_inference_2eproto__INCLUDED
