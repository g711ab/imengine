// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: servers.proto

#ifndef PROTOBUF_servers_2eproto__INCLUDED
#define PROTOBUF_servers_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace zproto {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_servers_2eproto();
void protobuf_InitDefaults_servers_2eproto();
void protobuf_AssignDesc_servers_2eproto();
void protobuf_ShutdownFile_servers_2eproto();

class DeliveryDataToUsersReq;
class ServerAuthReq;
class ServerAuthRsp;

// ===================================================================

class ServerAuthReq : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:zproto.ServerAuthReq) */ {
 public:
  ServerAuthReq();
  virtual ~ServerAuthReq();

  ServerAuthReq(const ServerAuthReq& from);

  inline ServerAuthReq& operator=(const ServerAuthReq& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ServerAuthReq& default_instance();

  static const ServerAuthReq* internal_default_instance();

  void Swap(ServerAuthReq* other);

  // implements Message ----------------------------------------------

  inline ServerAuthReq* New() const { return New(NULL); }

  ServerAuthReq* New(::google::protobuf::Arena* arena) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ServerAuthReq* other);
  void UnsafeMergeFrom(const ServerAuthReq& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint32 server_id = 1;
  void clear_server_id();
  static const int kServerIdFieldNumber = 1;
  ::google::protobuf::uint32 server_id() const;
  void set_server_id(::google::protobuf::uint32 value);

  // optional string server_name = 2;
  void clear_server_name();
  static const int kServerNameFieldNumber = 2;
  const ::std::string& server_name() const;
  void set_server_name(const ::std::string& value);
  void set_server_name(const char* value);
  void set_server_name(const char* value, size_t size);
  ::std::string* mutable_server_name();
  ::std::string* release_server_name();
  void set_allocated_server_name(::std::string* server_name);

  // @@protoc_insertion_point(class_scope:zproto.ServerAuthReq)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr server_name_;
  ::google::protobuf::uint32 server_id_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_servers_2eproto_impl();
  friend void  protobuf_AddDesc_servers_2eproto_impl();
  friend void protobuf_AssignDesc_servers_2eproto();
  friend void protobuf_ShutdownFile_servers_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<ServerAuthReq> ServerAuthReq_default_instance_;

// -------------------------------------------------------------------

class ServerAuthRsp : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:zproto.ServerAuthRsp) */ {
 public:
  ServerAuthRsp();
  virtual ~ServerAuthRsp();

  ServerAuthRsp(const ServerAuthRsp& from);

  inline ServerAuthRsp& operator=(const ServerAuthRsp& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ServerAuthRsp& default_instance();

  static const ServerAuthRsp* internal_default_instance();

  void Swap(ServerAuthRsp* other);

  // implements Message ----------------------------------------------

  inline ServerAuthRsp* New() const { return New(NULL); }

  ServerAuthRsp* New(::google::protobuf::Arena* arena) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ServerAuthRsp* other);
  void UnsafeMergeFrom(const ServerAuthRsp& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:zproto.ServerAuthRsp)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_servers_2eproto_impl();
  friend void  protobuf_AddDesc_servers_2eproto_impl();
  friend void protobuf_AssignDesc_servers_2eproto();
  friend void protobuf_ShutdownFile_servers_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<ServerAuthRsp> ServerAuthRsp_default_instance_;

// -------------------------------------------------------------------

class DeliveryDataToUsersReq : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:zproto.DeliveryDataToUsersReq) */ {
 public:
  DeliveryDataToUsersReq();
  virtual ~DeliveryDataToUsersReq();

  DeliveryDataToUsersReq(const DeliveryDataToUsersReq& from);

  inline DeliveryDataToUsersReq& operator=(const DeliveryDataToUsersReq& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const DeliveryDataToUsersReq& default_instance();

  static const DeliveryDataToUsersReq* internal_default_instance();

  void Swap(DeliveryDataToUsersReq* other);

  // implements Message ----------------------------------------------

  inline DeliveryDataToUsersReq* New() const { return New(NULL); }

  DeliveryDataToUsersReq* New(::google::protobuf::Arena* arena) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(DeliveryDataToUsersReq* other);
  void UnsafeMergeFrom(const DeliveryDataToUsersReq& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint64 my_conn_id = 1;
  void clear_my_conn_id();
  static const int kMyConnIdFieldNumber = 1;
  ::google::protobuf::uint64 my_conn_id() const;
  void set_my_conn_id(::google::protobuf::uint64 value);

  // repeated string uid_list = 2;
  int uid_list_size() const;
  void clear_uid_list();
  static const int kUidListFieldNumber = 2;
  const ::std::string& uid_list(int index) const;
  ::std::string* mutable_uid_list(int index);
  void set_uid_list(int index, const ::std::string& value);
  void set_uid_list(int index, const char* value);
  void set_uid_list(int index, const char* value, size_t size);
  ::std::string* add_uid_list();
  void add_uid_list(const ::std::string& value);
  void add_uid_list(const char* value);
  void add_uid_list(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& uid_list() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_uid_list();

  // optional uint32 raw_data_header = 4;
  void clear_raw_data_header();
  static const int kRawDataHeaderFieldNumber = 4;
  ::google::protobuf::uint32 raw_data_header() const;
  void set_raw_data_header(::google::protobuf::uint32 value);

  // optional bytes raw_data = 5;
  void clear_raw_data();
  static const int kRawDataFieldNumber = 5;
  const ::std::string& raw_data() const;
  void set_raw_data(const ::std::string& value);
  void set_raw_data(const char* value);
  void set_raw_data(const void* value, size_t size);
  ::std::string* mutable_raw_data();
  ::std::string* release_raw_data();
  void set_allocated_raw_data(::std::string* raw_data);

  // @@protoc_insertion_point(class_scope:zproto.DeliveryDataToUsersReq)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::std::string> uid_list_;
  ::google::protobuf::internal::ArenaStringPtr raw_data_;
  ::google::protobuf::uint64 my_conn_id_;
  ::google::protobuf::uint32 raw_data_header_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_servers_2eproto_impl();
  friend void  protobuf_AddDesc_servers_2eproto_impl();
  friend void protobuf_AssignDesc_servers_2eproto();
  friend void protobuf_ShutdownFile_servers_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<DeliveryDataToUsersReq> DeliveryDataToUsersReq_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ServerAuthReq

// optional uint32 server_id = 1;
inline void ServerAuthReq::clear_server_id() {
  server_id_ = 0u;
}
inline ::google::protobuf::uint32 ServerAuthReq::server_id() const {
  // @@protoc_insertion_point(field_get:zproto.ServerAuthReq.server_id)
  return server_id_;
}
inline void ServerAuthReq::set_server_id(::google::protobuf::uint32 value) {
  
  server_id_ = value;
  // @@protoc_insertion_point(field_set:zproto.ServerAuthReq.server_id)
}

// optional string server_name = 2;
inline void ServerAuthReq::clear_server_name() {
  server_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ServerAuthReq::server_name() const {
  // @@protoc_insertion_point(field_get:zproto.ServerAuthReq.server_name)
  return server_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ServerAuthReq::set_server_name(const ::std::string& value) {
  
  server_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:zproto.ServerAuthReq.server_name)
}
inline void ServerAuthReq::set_server_name(const char* value) {
  
  server_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:zproto.ServerAuthReq.server_name)
}
inline void ServerAuthReq::set_server_name(const char* value, size_t size) {
  
  server_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:zproto.ServerAuthReq.server_name)
}
inline ::std::string* ServerAuthReq::mutable_server_name() {
  
  // @@protoc_insertion_point(field_mutable:zproto.ServerAuthReq.server_name)
  return server_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ServerAuthReq::release_server_name() {
  // @@protoc_insertion_point(field_release:zproto.ServerAuthReq.server_name)
  
  return server_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ServerAuthReq::set_allocated_server_name(::std::string* server_name) {
  if (server_name != NULL) {
    
  } else {
    
  }
  server_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), server_name);
  // @@protoc_insertion_point(field_set_allocated:zproto.ServerAuthReq.server_name)
}

inline const ServerAuthReq* ServerAuthReq::internal_default_instance() {
  return &ServerAuthReq_default_instance_.get();
}
// -------------------------------------------------------------------

// ServerAuthRsp

inline const ServerAuthRsp* ServerAuthRsp::internal_default_instance() {
  return &ServerAuthRsp_default_instance_.get();
}
// -------------------------------------------------------------------

// DeliveryDataToUsersReq

// optional uint64 my_conn_id = 1;
inline void DeliveryDataToUsersReq::clear_my_conn_id() {
  my_conn_id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 DeliveryDataToUsersReq::my_conn_id() const {
  // @@protoc_insertion_point(field_get:zproto.DeliveryDataToUsersReq.my_conn_id)
  return my_conn_id_;
}
inline void DeliveryDataToUsersReq::set_my_conn_id(::google::protobuf::uint64 value) {
  
  my_conn_id_ = value;
  // @@protoc_insertion_point(field_set:zproto.DeliveryDataToUsersReq.my_conn_id)
}

// repeated string uid_list = 2;
inline int DeliveryDataToUsersReq::uid_list_size() const {
  return uid_list_.size();
}
inline void DeliveryDataToUsersReq::clear_uid_list() {
  uid_list_.Clear();
}
inline const ::std::string& DeliveryDataToUsersReq::uid_list(int index) const {
  // @@protoc_insertion_point(field_get:zproto.DeliveryDataToUsersReq.uid_list)
  return uid_list_.Get(index);
}
inline ::std::string* DeliveryDataToUsersReq::mutable_uid_list(int index) {
  // @@protoc_insertion_point(field_mutable:zproto.DeliveryDataToUsersReq.uid_list)
  return uid_list_.Mutable(index);
}
inline void DeliveryDataToUsersReq::set_uid_list(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:zproto.DeliveryDataToUsersReq.uid_list)
  uid_list_.Mutable(index)->assign(value);
}
inline void DeliveryDataToUsersReq::set_uid_list(int index, const char* value) {
  uid_list_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:zproto.DeliveryDataToUsersReq.uid_list)
}
inline void DeliveryDataToUsersReq::set_uid_list(int index, const char* value, size_t size) {
  uid_list_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:zproto.DeliveryDataToUsersReq.uid_list)
}
inline ::std::string* DeliveryDataToUsersReq::add_uid_list() {
  // @@protoc_insertion_point(field_add_mutable:zproto.DeliveryDataToUsersReq.uid_list)
  return uid_list_.Add();
}
inline void DeliveryDataToUsersReq::add_uid_list(const ::std::string& value) {
  uid_list_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:zproto.DeliveryDataToUsersReq.uid_list)
}
inline void DeliveryDataToUsersReq::add_uid_list(const char* value) {
  uid_list_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:zproto.DeliveryDataToUsersReq.uid_list)
}
inline void DeliveryDataToUsersReq::add_uid_list(const char* value, size_t size) {
  uid_list_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:zproto.DeliveryDataToUsersReq.uid_list)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
DeliveryDataToUsersReq::uid_list() const {
  // @@protoc_insertion_point(field_list:zproto.DeliveryDataToUsersReq.uid_list)
  return uid_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
DeliveryDataToUsersReq::mutable_uid_list() {
  // @@protoc_insertion_point(field_mutable_list:zproto.DeliveryDataToUsersReq.uid_list)
  return &uid_list_;
}

// optional uint32 raw_data_header = 4;
inline void DeliveryDataToUsersReq::clear_raw_data_header() {
  raw_data_header_ = 0u;
}
inline ::google::protobuf::uint32 DeliveryDataToUsersReq::raw_data_header() const {
  // @@protoc_insertion_point(field_get:zproto.DeliveryDataToUsersReq.raw_data_header)
  return raw_data_header_;
}
inline void DeliveryDataToUsersReq::set_raw_data_header(::google::protobuf::uint32 value) {
  
  raw_data_header_ = value;
  // @@protoc_insertion_point(field_set:zproto.DeliveryDataToUsersReq.raw_data_header)
}

// optional bytes raw_data = 5;
inline void DeliveryDataToUsersReq::clear_raw_data() {
  raw_data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& DeliveryDataToUsersReq::raw_data() const {
  // @@protoc_insertion_point(field_get:zproto.DeliveryDataToUsersReq.raw_data)
  return raw_data_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DeliveryDataToUsersReq::set_raw_data(const ::std::string& value) {
  
  raw_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:zproto.DeliveryDataToUsersReq.raw_data)
}
inline void DeliveryDataToUsersReq::set_raw_data(const char* value) {
  
  raw_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:zproto.DeliveryDataToUsersReq.raw_data)
}
inline void DeliveryDataToUsersReq::set_raw_data(const void* value, size_t size) {
  
  raw_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:zproto.DeliveryDataToUsersReq.raw_data)
}
inline ::std::string* DeliveryDataToUsersReq::mutable_raw_data() {
  
  // @@protoc_insertion_point(field_mutable:zproto.DeliveryDataToUsersReq.raw_data)
  return raw_data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DeliveryDataToUsersReq::release_raw_data() {
  // @@protoc_insertion_point(field_release:zproto.DeliveryDataToUsersReq.raw_data)
  
  return raw_data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DeliveryDataToUsersReq::set_allocated_raw_data(::std::string* raw_data) {
  if (raw_data != NULL) {
    
  } else {
    
  }
  raw_data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), raw_data);
  // @@protoc_insertion_point(field_set_allocated:zproto.DeliveryDataToUsersReq.raw_data)
}

inline const DeliveryDataToUsersReq* DeliveryDataToUsersReq::internal_default_instance() {
  return &DeliveryDataToUsersReq_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace zproto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_servers_2eproto__INCLUDED
