// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: handbag.proto

#ifndef PROTOBUF_handbag_2eproto__INCLUDED
#define PROTOBUF_handbag_2eproto__INCLUDED

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
#include "address_book.pb.h"
#include "wallet.pb.h"
// @@protoc_insertion_point(includes)

namespace Research {
namespace ProtoBuf {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_handbag_2eproto();
void protobuf_AssignDesc_handbag_2eproto();
void protobuf_ShutdownFile_handbag_2eproto();

class Handbag;

// ===================================================================

class Handbag : public ::google::protobuf::Message {
 public:
  Handbag();
  virtual ~Handbag();

  Handbag(const Handbag& from);

  inline Handbag& operator=(const Handbag& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Handbag& default_instance();

  void Swap(Handbag* other);

  // implements Message ----------------------------------------------

  inline Handbag* New() const { return New(NULL); }

  Handbag* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Handbag& from);
  void MergeFrom(const Handbag& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Handbag* other);
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

  // optional .AddressBook book = 1;
  bool has_book() const;
  void clear_book();
  static const int kBookFieldNumber = 1;
  const ::AddressBook& book() const;
  ::AddressBook* mutable_book();
  ::AddressBook* release_book();
  void set_allocated_book(::AddressBook* book);

  // optional .Research.ProtoBuf.Wallet purse = 2;
  bool has_purse() const;
  void clear_purse();
  static const int kPurseFieldNumber = 2;
  const ::Research::ProtoBuf::Wallet& purse() const;
  ::Research::ProtoBuf::Wallet* mutable_purse();
  ::Research::ProtoBuf::Wallet* release_purse();
  void set_allocated_purse(::Research::ProtoBuf::Wallet* purse);

  // @@protoc_insertion_point(class_scope:Research.ProtoBuf.Handbag)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::AddressBook* book_;
  ::Research::ProtoBuf::Wallet* purse_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_handbag_2eproto();
  friend void protobuf_AssignDesc_handbag_2eproto();
  friend void protobuf_ShutdownFile_handbag_2eproto();

  void InitAsDefaultInstance();
  static Handbag* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Handbag

// optional .AddressBook book = 1;
inline bool Handbag::has_book() const {
  return !_is_default_instance_ && book_ != NULL;
}
inline void Handbag::clear_book() {
  if (GetArenaNoVirtual() == NULL && book_ != NULL) delete book_;
  book_ = NULL;
}
inline const ::AddressBook& Handbag::book() const {
  // @@protoc_insertion_point(field_get:Research.ProtoBuf.Handbag.book)
  return book_ != NULL ? *book_ : *default_instance_->book_;
}
inline ::AddressBook* Handbag::mutable_book() {
  
  if (book_ == NULL) {
    book_ = new ::AddressBook;
  }
  // @@protoc_insertion_point(field_mutable:Research.ProtoBuf.Handbag.book)
  return book_;
}
inline ::AddressBook* Handbag::release_book() {
  
  ::AddressBook* temp = book_;
  book_ = NULL;
  return temp;
}
inline void Handbag::set_allocated_book(::AddressBook* book) {
  delete book_;
  book_ = book;
  if (book) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:Research.ProtoBuf.Handbag.book)
}

// optional .Research.ProtoBuf.Wallet purse = 2;
inline bool Handbag::has_purse() const {
  return !_is_default_instance_ && purse_ != NULL;
}
inline void Handbag::clear_purse() {
  if (GetArenaNoVirtual() == NULL && purse_ != NULL) delete purse_;
  purse_ = NULL;
}
inline const ::Research::ProtoBuf::Wallet& Handbag::purse() const {
  // @@protoc_insertion_point(field_get:Research.ProtoBuf.Handbag.purse)
  return purse_ != NULL ? *purse_ : *default_instance_->purse_;
}
inline ::Research::ProtoBuf::Wallet* Handbag::mutable_purse() {
  
  if (purse_ == NULL) {
    purse_ = new ::Research::ProtoBuf::Wallet;
  }
  // @@protoc_insertion_point(field_mutable:Research.ProtoBuf.Handbag.purse)
  return purse_;
}
inline ::Research::ProtoBuf::Wallet* Handbag::release_purse() {
  
  ::Research::ProtoBuf::Wallet* temp = purse_;
  purse_ = NULL;
  return temp;
}
inline void Handbag::set_allocated_purse(::Research::ProtoBuf::Wallet* purse) {
  delete purse_;
  purse_ = purse;
  if (purse) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:Research.ProtoBuf.Handbag.purse)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace ProtoBuf
}  // namespace Research

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_handbag_2eproto__INCLUDED
