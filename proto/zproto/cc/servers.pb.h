// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: servers.proto

#ifndef PROTOBUF_servers_2eproto__INCLUDED
#define PROTOBUF_servers_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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
void protobuf_AssignDesc_servers_2eproto();
void protobuf_ShutdownFile_servers_2eproto();

class ClientOfflineReq;
class ClientOfflineRsp;
class ClientOnlineReq;
class ClientOnlineRsp;
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
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr server_name_;
  ::google::protobuf::uint32 server_id_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_servers_2eproto();
  friend void protobuf_AssignDesc_servers_2eproto();
  friend void protobuf_ShutdownFile_servers_2eproto();

  void InitAsDefaultInstance();
  static ServerAuthReq* default_instance_;
};
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
  bool _is_default_instance_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_servers_2eproto();
  friend void protobuf_AssignDesc_servers_2eproto();
  friend void protobuf_ShutdownFile_servers_2eproto();

  void InitAsDefaultInstance();
  static ServerAuthRsp* default_instance_;
};
// -------------------------------------------------------------------

class ClientOnlineReq : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:zproto.ClientOnlineReq) */ {
 public:
  ClientOnlineReq();
  virtual ~ClientOnlineReq();

  ClientOnlineReq(const ClientOnlineReq& from);

  inline ClientOnlineReq& operator=(const ClientOnlineReq& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ClientOnlineReq& default_instance();

  void Swap(ClientOnlineReq* other);

  // implements Message ----------------------------------------------

  inline ClientOnlineReq* New() const { return New(NULL); }

  ClientOnlineReq* New(::google::protobuf::Arena* arena) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ClientOnlineReq* other);
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

  // optional uint64 conn_id = 2;
  void clear_conn_id();
  static const int kConnIdFieldNumber = 2;
  ::google::protobuf::uint64 conn_id() const;
  void set_conn_id(::google::protobuf::uint64 value);

  // optional uint32 app_id = 3;
  void clear_app_id();
  static const int kAppIdFieldNumber = 3;
  ::google::protobuf::uint32 app_id() const;
  void set_app_id(::google::protobuf::uint32 value);

  // optional string user_id = 4;
  void clear_user_id();
  static const int kUserIdFieldNumber = 4;
  const ::std::string& user_id() const;
  void set_user_id(const ::std::string& value);
  void set_user_id(const char* value);
  void set_user_id(const char* value, size_t size);
  ::std::string* mutable_user_id();
  ::std::string* release_user_id();
  void set_allocated_user_id(::std::string* user_id);

  // optional uint32 state = 5;
  void clear_state();
  static const int kStateFieldNumber = 5;
  ::google::protobuf::uint32 state() const;
  void set_state(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:zproto.ClientOnlineReq)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::uint64 conn_id_;
  ::google::protobuf::uint32 server_id_;
  ::google::protobuf::uint32 app_id_;
  ::google::protobuf::internal::ArenaStringPtr user_id_;
  ::google::protobuf::uint32 state_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_servers_2eproto();
  friend void protobuf_AssignDesc_servers_2eproto();
  friend void protobuf_ShutdownFile_servers_2eproto();

  void InitAsDefaultInstance();
  static ClientOnlineReq* default_instance_;
};
// -------------------------------------------------------------------

class ClientOnlineRsp : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:zproto.ClientOnlineRsp) */ {
 public:
  ClientOnlineRsp();
  virtual ~ClientOnlineRsp();

  ClientOnlineRsp(const ClientOnlineRsp& from);

  inline ClientOnlineRsp& operator=(const ClientOnlineRsp& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ClientOnlineRsp& default_instance();

  void Swap(ClientOnlineRsp* other);

  // implements Message ----------------------------------------------

  inline ClientOnlineRsp* New() const { return New(NULL); }

  ClientOnlineRsp* New(::google::protobuf::Arena* arena) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ClientOnlineRsp* other);
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

  // optional uint64 index_id = 1;
  void clear_index_id();
  static const int kIndexIdFieldNumber = 1;
  ::google::protobuf::uint64 index_id() const;
  void set_index_id(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:zproto.ClientOnlineRsp)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::uint64 index_id_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_servers_2eproto();
  friend void protobuf_AssignDesc_servers_2eproto();
  friend void protobuf_ShutdownFile_servers_2eproto();

  void InitAsDefaultInstance();
  static ClientOnlineRsp* default_instance_;
};
// -------------------------------------------------------------------

class ClientOfflineReq : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:zproto.ClientOfflineReq) */ {
 public:
  ClientOfflineReq();
  virtual ~ClientOfflineReq();

  ClientOfflineReq(const ClientOfflineReq& from);

  inline ClientOfflineReq& operator=(const ClientOfflineReq& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ClientOfflineReq& default_instance();

  void Swap(ClientOfflineReq* other);

  // implements Message ----------------------------------------------

  inline ClientOfflineReq* New() const { return New(NULL); }

  ClientOfflineReq* New(::google::protobuf::Arena* arena) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ClientOfflineReq* other);
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

  // optional uint64 conn_id = 2;
  void clear_conn_id();
  static const int kConnIdFieldNumber = 2;
  ::google::protobuf::uint64 conn_id() const;
  void set_conn_id(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:zproto.ClientOfflineReq)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::uint64 conn_id_;
  ::google::protobuf::uint32 server_id_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_servers_2eproto();
  friend void protobuf_AssignDesc_servers_2eproto();
  friend void protobuf_ShutdownFile_servers_2eproto();

  void InitAsDefaultInstance();
  static ClientOfflineReq* default_instance_;
};
// -------------------------------------------------------------------

class ClientOfflineRsp : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:zproto.ClientOfflineRsp) */ {
 public:
  ClientOfflineRsp();
  virtual ~ClientOfflineRsp();

  ClientOfflineRsp(const ClientOfflineRsp& from);

  inline ClientOfflineRsp& operator=(const ClientOfflineRsp& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ClientOfflineRsp& default_instance();

  void Swap(ClientOfflineRsp* other);

  // implements Message ----------------------------------------------

  inline ClientOfflineRsp* New() const { return New(NULL); }

  ClientOfflineRsp* New(::google::protobuf::Arena* arena) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ClientOfflineRsp* other);
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

  // optional uint64 index_id = 1;
  void clear_index_id();
  static const int kIndexIdFieldNumber = 1;
  ::google::protobuf::uint64 index_id() const;
  void set_index_id(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:zproto.ClientOfflineRsp)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::uint64 index_id_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_servers_2eproto();
  friend void protobuf_AssignDesc_servers_2eproto();
  friend void protobuf_ShutdownFile_servers_2eproto();

  void InitAsDefaultInstance();
  static ClientOfflineRsp* default_instance_;
};
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

// -------------------------------------------------------------------

// ServerAuthRsp

// -------------------------------------------------------------------

// ClientOnlineReq

// optional uint32 server_id = 1;
inline void ClientOnlineReq::clear_server_id() {
  server_id_ = 0u;
}
inline ::google::protobuf::uint32 ClientOnlineReq::server_id() const {
  // @@protoc_insertion_point(field_get:zproto.ClientOnlineReq.server_id)
  return server_id_;
}
inline void ClientOnlineReq::set_server_id(::google::protobuf::uint32 value) {
  
  server_id_ = value;
  // @@protoc_insertion_point(field_set:zproto.ClientOnlineReq.server_id)
}

// optional uint64 conn_id = 2;
inline void ClientOnlineReq::clear_conn_id() {
  conn_id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 ClientOnlineReq::conn_id() const {
  // @@protoc_insertion_point(field_get:zproto.ClientOnlineReq.conn_id)
  return conn_id_;
}
inline void ClientOnlineReq::set_conn_id(::google::protobuf::uint64 value) {
  
  conn_id_ = value;
  // @@protoc_insertion_point(field_set:zproto.ClientOnlineReq.conn_id)
}

// optional uint32 app_id = 3;
inline void ClientOnlineReq::clear_app_id() {
  app_id_ = 0u;
}
inline ::google::protobuf::uint32 ClientOnlineReq::app_id() const {
  // @@protoc_insertion_point(field_get:zproto.ClientOnlineReq.app_id)
  return app_id_;
}
inline void ClientOnlineReq::set_app_id(::google::protobuf::uint32 value) {
  
  app_id_ = value;
  // @@protoc_insertion_point(field_set:zproto.ClientOnlineReq.app_id)
}

// optional string user_id = 4;
inline void ClientOnlineReq::clear_user_id() {
  user_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ClientOnlineReq::user_id() const {
  // @@protoc_insertion_point(field_get:zproto.ClientOnlineReq.user_id)
  return user_id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ClientOnlineReq::set_user_id(const ::std::string& value) {
  
  user_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:zproto.ClientOnlineReq.user_id)
}
inline void ClientOnlineReq::set_user_id(const char* value) {
  
  user_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:zproto.ClientOnlineReq.user_id)
}
inline void ClientOnlineReq::set_user_id(const char* value, size_t size) {
  
  user_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:zproto.ClientOnlineReq.user_id)
}
inline ::std::string* ClientOnlineReq::mutable_user_id() {
  
  // @@protoc_insertion_point(field_mutable:zproto.ClientOnlineReq.user_id)
  return user_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ClientOnlineReq::release_user_id() {
  // @@protoc_insertion_point(field_release:zproto.ClientOnlineReq.user_id)
  
  return user_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ClientOnlineReq::set_allocated_user_id(::std::string* user_id) {
  if (user_id != NULL) {
    
  } else {
    
  }
  user_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), user_id);
  // @@protoc_insertion_point(field_set_allocated:zproto.ClientOnlineReq.user_id)
}

// optional uint32 state = 5;
inline void ClientOnlineReq::clear_state() {
  state_ = 0u;
}
inline ::google::protobuf::uint32 ClientOnlineReq::state() const {
  // @@protoc_insertion_point(field_get:zproto.ClientOnlineReq.state)
  return state_;
}
inline void ClientOnlineReq::set_state(::google::protobuf::uint32 value) {
  
  state_ = value;
  // @@protoc_insertion_point(field_set:zproto.ClientOnlineReq.state)
}

// -------------------------------------------------------------------

// ClientOnlineRsp

// optional uint64 index_id = 1;
inline void ClientOnlineRsp::clear_index_id() {
  index_id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 ClientOnlineRsp::index_id() const {
  // @@protoc_insertion_point(field_get:zproto.ClientOnlineRsp.index_id)
  return index_id_;
}
inline void ClientOnlineRsp::set_index_id(::google::protobuf::uint64 value) {
  
  index_id_ = value;
  // @@protoc_insertion_point(field_set:zproto.ClientOnlineRsp.index_id)
}

// -------------------------------------------------------------------

// ClientOfflineReq

// optional uint32 server_id = 1;
inline void ClientOfflineReq::clear_server_id() {
  server_id_ = 0u;
}
inline ::google::protobuf::uint32 ClientOfflineReq::server_id() const {
  // @@protoc_insertion_point(field_get:zproto.ClientOfflineReq.server_id)
  return server_id_;
}
inline void ClientOfflineReq::set_server_id(::google::protobuf::uint32 value) {
  
  server_id_ = value;
  // @@protoc_insertion_point(field_set:zproto.ClientOfflineReq.server_id)
}

// optional uint64 conn_id = 2;
inline void ClientOfflineReq::clear_conn_id() {
  conn_id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 ClientOfflineReq::conn_id() const {
  // @@protoc_insertion_point(field_get:zproto.ClientOfflineReq.conn_id)
  return conn_id_;
}
inline void ClientOfflineReq::set_conn_id(::google::protobuf::uint64 value) {
  
  conn_id_ = value;
  // @@protoc_insertion_point(field_set:zproto.ClientOfflineReq.conn_id)
}

// -------------------------------------------------------------------

// ClientOfflineRsp

// optional uint64 index_id = 1;
inline void ClientOfflineRsp::clear_index_id() {
  index_id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 ClientOfflineRsp::index_id() const {
  // @@protoc_insertion_point(field_get:zproto.ClientOfflineRsp.index_id)
  return index_id_;
}
inline void ClientOfflineRsp::set_index_id(::google::protobuf::uint64 value) {
  
  index_id_ = value;
  // @@protoc_insertion_point(field_set:zproto.ClientOfflineRsp.index_id)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace zproto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_servers_2eproto__INCLUDED
