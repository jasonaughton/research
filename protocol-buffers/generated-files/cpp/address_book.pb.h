// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: address_book.proto

#ifndef PROTOBUF_address_5fbook_2eproto__INCLUDED
#define PROTOBUF_address_5fbook_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_address_5fbook_2eproto();
void protobuf_AssignDesc_address_5fbook_2eproto();
void protobuf_ShutdownFile_address_5fbook_2eproto();

class AddressBook;
class Person;
class Person_PhoneNumber;

enum Person_PhoneType {
  Person_PhoneType_Mobile = 0,
  Person_PhoneType_Home = 1,
  Person_PhoneType_Work = 2,
  Person_PhoneType_Person_PhoneType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Person_PhoneType_Person_PhoneType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Person_PhoneType_IsValid(int value);
const Person_PhoneType Person_PhoneType_PhoneType_MIN = Person_PhoneType_Mobile;
const Person_PhoneType Person_PhoneType_PhoneType_MAX = Person_PhoneType_Work;
const int Person_PhoneType_PhoneType_ARRAYSIZE = Person_PhoneType_PhoneType_MAX + 1;

const ::google::protobuf::EnumDescriptor* Person_PhoneType_descriptor();
inline const ::std::string& Person_PhoneType_Name(Person_PhoneType value) {
  return ::google::protobuf::internal::NameOfEnum(
    Person_PhoneType_descriptor(), value);
}
inline bool Person_PhoneType_Parse(
    const ::std::string& name, Person_PhoneType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Person_PhoneType>(
    Person_PhoneType_descriptor(), name, value);
}
// ===================================================================

class Person_PhoneNumber : public ::google::protobuf::Message {
 public:
  Person_PhoneNumber();
  virtual ~Person_PhoneNumber();

  Person_PhoneNumber(const Person_PhoneNumber& from);

  inline Person_PhoneNumber& operator=(const Person_PhoneNumber& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Person_PhoneNumber& default_instance();

  void Swap(Person_PhoneNumber* other);

  // implements Message ----------------------------------------------

  inline Person_PhoneNumber* New() const { return New(NULL); }

  Person_PhoneNumber* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Person_PhoneNumber& from);
  void MergeFrom(const Person_PhoneNumber& from);
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
  void InternalSwap(Person_PhoneNumber* other);
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

  // optional string number = 1;
  void clear_number();
  static const int kNumberFieldNumber = 1;
  const ::std::string& number() const;
  void set_number(const ::std::string& value);
  void set_number(const char* value);
  void set_number(const char* value, size_t size);
  ::std::string* mutable_number();
  ::std::string* release_number();
  void set_allocated_number(::std::string* number);

  // optional .Person.PhoneType type = 2;
  void clear_type();
  static const int kTypeFieldNumber = 2;
  ::Person_PhoneType type() const;
  void set_type(::Person_PhoneType value);

  // @@protoc_insertion_point(class_scope:Person.PhoneNumber)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr number_;
  int type_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_address_5fbook_2eproto();
  friend void protobuf_AssignDesc_address_5fbook_2eproto();
  friend void protobuf_ShutdownFile_address_5fbook_2eproto();

  void InitAsDefaultInstance();
  static Person_PhoneNumber* default_instance_;
};
// -------------------------------------------------------------------

class Person : public ::google::protobuf::Message {
 public:
  Person();
  virtual ~Person();

  Person(const Person& from);

  inline Person& operator=(const Person& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Person& default_instance();

  void Swap(Person* other);

  // implements Message ----------------------------------------------

  inline Person* New() const { return New(NULL); }

  Person* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Person& from);
  void MergeFrom(const Person& from);
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
  void InternalSwap(Person* other);
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

  typedef Person_PhoneNumber PhoneNumber;

  typedef Person_PhoneType PhoneType;
  static const PhoneType Mobile = Person_PhoneType_Mobile;
  static const PhoneType Home = Person_PhoneType_Home;
  static const PhoneType Work = Person_PhoneType_Work;
  static inline bool PhoneType_IsValid(int value) {
    return Person_PhoneType_IsValid(value);
  }
  static const PhoneType PhoneType_MIN =
    Person_PhoneType_PhoneType_MIN;
  static const PhoneType PhoneType_MAX =
    Person_PhoneType_PhoneType_MAX;
  static const int PhoneType_ARRAYSIZE =
    Person_PhoneType_PhoneType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  PhoneType_descriptor() {
    return Person_PhoneType_descriptor();
  }
  static inline const ::std::string& PhoneType_Name(PhoneType value) {
    return Person_PhoneType_Name(value);
  }
  static inline bool PhoneType_Parse(const ::std::string& name,
      PhoneType* value) {
    return Person_PhoneType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional int32 id = 2;
  void clear_id();
  static const int kIdFieldNumber = 2;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // optional string email = 3;
  void clear_email();
  static const int kEmailFieldNumber = 3;
  const ::std::string& email() const;
  void set_email(const ::std::string& value);
  void set_email(const char* value);
  void set_email(const char* value, size_t size);
  ::std::string* mutable_email();
  ::std::string* release_email();
  void set_allocated_email(::std::string* email);

  // optional string date_of_birth = 5;
  void clear_date_of_birth();
  static const int kDateOfBirthFieldNumber = 5;
  const ::std::string& date_of_birth() const;
  void set_date_of_birth(const ::std::string& value);
  void set_date_of_birth(const char* value);
  void set_date_of_birth(const char* value, size_t size);
  ::std::string* mutable_date_of_birth();
  ::std::string* release_date_of_birth();
  void set_allocated_date_of_birth(::std::string* date_of_birth);

  // repeated .Person.PhoneNumber phones = 4;
  int phones_size() const;
  void clear_phones();
  static const int kPhonesFieldNumber = 4;
  const ::Person_PhoneNumber& phones(int index) const;
  ::Person_PhoneNumber* mutable_phones(int index);
  ::Person_PhoneNumber* add_phones();
  ::google::protobuf::RepeatedPtrField< ::Person_PhoneNumber >*
      mutable_phones();
  const ::google::protobuf::RepeatedPtrField< ::Person_PhoneNumber >&
      phones() const;

  // @@protoc_insertion_point(class_scope:Person)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr email_;
  ::google::protobuf::internal::ArenaStringPtr date_of_birth_;
  ::google::protobuf::RepeatedPtrField< ::Person_PhoneNumber > phones_;
  ::google::protobuf::int32 id_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_address_5fbook_2eproto();
  friend void protobuf_AssignDesc_address_5fbook_2eproto();
  friend void protobuf_ShutdownFile_address_5fbook_2eproto();

  void InitAsDefaultInstance();
  static Person* default_instance_;
};
// -------------------------------------------------------------------

class AddressBook : public ::google::protobuf::Message {
 public:
  AddressBook();
  virtual ~AddressBook();

  AddressBook(const AddressBook& from);

  inline AddressBook& operator=(const AddressBook& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const AddressBook& default_instance();

  void Swap(AddressBook* other);

  // implements Message ----------------------------------------------

  inline AddressBook* New() const { return New(NULL); }

  AddressBook* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AddressBook& from);
  void MergeFrom(const AddressBook& from);
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
  void InternalSwap(AddressBook* other);
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

  // repeated .Person people = 1;
  int people_size() const;
  void clear_people();
  static const int kPeopleFieldNumber = 1;
  const ::Person& people(int index) const;
  ::Person* mutable_people(int index);
  ::Person* add_people();
  ::google::protobuf::RepeatedPtrField< ::Person >*
      mutable_people();
  const ::google::protobuf::RepeatedPtrField< ::Person >&
      people() const;

  // @@protoc_insertion_point(class_scope:AddressBook)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedPtrField< ::Person > people_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_address_5fbook_2eproto();
  friend void protobuf_AssignDesc_address_5fbook_2eproto();
  friend void protobuf_ShutdownFile_address_5fbook_2eproto();

  void InitAsDefaultInstance();
  static AddressBook* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Person_PhoneNumber

// optional string number = 1;
inline void Person_PhoneNumber::clear_number() {
  number_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Person_PhoneNumber::number() const {
  // @@protoc_insertion_point(field_get:Person.PhoneNumber.number)
  return number_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Person_PhoneNumber::set_number(const ::std::string& value) {
  
  number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Person.PhoneNumber.number)
}
inline void Person_PhoneNumber::set_number(const char* value) {
  
  number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Person.PhoneNumber.number)
}
inline void Person_PhoneNumber::set_number(const char* value, size_t size) {
  
  number_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Person.PhoneNumber.number)
}
inline ::std::string* Person_PhoneNumber::mutable_number() {
  
  // @@protoc_insertion_point(field_mutable:Person.PhoneNumber.number)
  return number_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Person_PhoneNumber::release_number() {
  
  return number_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Person_PhoneNumber::set_allocated_number(::std::string* number) {
  if (number != NULL) {
    
  } else {
    
  }
  number_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), number);
  // @@protoc_insertion_point(field_set_allocated:Person.PhoneNumber.number)
}

// optional .Person.PhoneType type = 2;
inline void Person_PhoneNumber::clear_type() {
  type_ = 0;
}
inline ::Person_PhoneType Person_PhoneNumber::type() const {
  // @@protoc_insertion_point(field_get:Person.PhoneNumber.type)
  return static_cast< ::Person_PhoneType >(type_);
}
inline void Person_PhoneNumber::set_type(::Person_PhoneType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:Person.PhoneNumber.type)
}

// -------------------------------------------------------------------

// Person

// optional string name = 1;
inline void Person::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Person::name() const {
  // @@protoc_insertion_point(field_get:Person.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Person::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Person.name)
}
inline void Person::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Person.name)
}
inline void Person::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Person.name)
}
inline ::std::string* Person::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:Person.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Person::release_name() {
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Person::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:Person.name)
}

// optional int32 id = 2;
inline void Person::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 Person::id() const {
  // @@protoc_insertion_point(field_get:Person.id)
  return id_;
}
inline void Person::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:Person.id)
}

// optional string email = 3;
inline void Person::clear_email() {
  email_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Person::email() const {
  // @@protoc_insertion_point(field_get:Person.email)
  return email_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Person::set_email(const ::std::string& value) {
  
  email_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Person.email)
}
inline void Person::set_email(const char* value) {
  
  email_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Person.email)
}
inline void Person::set_email(const char* value, size_t size) {
  
  email_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Person.email)
}
inline ::std::string* Person::mutable_email() {
  
  // @@protoc_insertion_point(field_mutable:Person.email)
  return email_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Person::release_email() {
  
  return email_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Person::set_allocated_email(::std::string* email) {
  if (email != NULL) {
    
  } else {
    
  }
  email_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), email);
  // @@protoc_insertion_point(field_set_allocated:Person.email)
}

// optional string date_of_birth = 5;
inline void Person::clear_date_of_birth() {
  date_of_birth_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Person::date_of_birth() const {
  // @@protoc_insertion_point(field_get:Person.date_of_birth)
  return date_of_birth_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Person::set_date_of_birth(const ::std::string& value) {
  
  date_of_birth_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Person.date_of_birth)
}
inline void Person::set_date_of_birth(const char* value) {
  
  date_of_birth_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Person.date_of_birth)
}
inline void Person::set_date_of_birth(const char* value, size_t size) {
  
  date_of_birth_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Person.date_of_birth)
}
inline ::std::string* Person::mutable_date_of_birth() {
  
  // @@protoc_insertion_point(field_mutable:Person.date_of_birth)
  return date_of_birth_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Person::release_date_of_birth() {
  
  return date_of_birth_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Person::set_allocated_date_of_birth(::std::string* date_of_birth) {
  if (date_of_birth != NULL) {
    
  } else {
    
  }
  date_of_birth_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), date_of_birth);
  // @@protoc_insertion_point(field_set_allocated:Person.date_of_birth)
}

// repeated .Person.PhoneNumber phones = 4;
inline int Person::phones_size() const {
  return phones_.size();
}
inline void Person::clear_phones() {
  phones_.Clear();
}
inline const ::Person_PhoneNumber& Person::phones(int index) const {
  // @@protoc_insertion_point(field_get:Person.phones)
  return phones_.Get(index);
}
inline ::Person_PhoneNumber* Person::mutable_phones(int index) {
  // @@protoc_insertion_point(field_mutable:Person.phones)
  return phones_.Mutable(index);
}
inline ::Person_PhoneNumber* Person::add_phones() {
  // @@protoc_insertion_point(field_add:Person.phones)
  return phones_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::Person_PhoneNumber >*
Person::mutable_phones() {
  // @@protoc_insertion_point(field_mutable_list:Person.phones)
  return &phones_;
}
inline const ::google::protobuf::RepeatedPtrField< ::Person_PhoneNumber >&
Person::phones() const {
  // @@protoc_insertion_point(field_list:Person.phones)
  return phones_;
}

// -------------------------------------------------------------------

// AddressBook

// repeated .Person people = 1;
inline int AddressBook::people_size() const {
  return people_.size();
}
inline void AddressBook::clear_people() {
  people_.Clear();
}
inline const ::Person& AddressBook::people(int index) const {
  // @@protoc_insertion_point(field_get:AddressBook.people)
  return people_.Get(index);
}
inline ::Person* AddressBook::mutable_people(int index) {
  // @@protoc_insertion_point(field_mutable:AddressBook.people)
  return people_.Mutable(index);
}
inline ::Person* AddressBook::add_people() {
  // @@protoc_insertion_point(field_add:AddressBook.people)
  return people_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::Person >*
AddressBook::mutable_people() {
  // @@protoc_insertion_point(field_mutable_list:AddressBook.people)
  return &people_;
}
inline const ::google::protobuf::RepeatedPtrField< ::Person >&
AddressBook::people() const {
  // @@protoc_insertion_point(field_list:AddressBook.people)
  return people_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::Person_PhoneType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Person_PhoneType>() {
  return ::Person_PhoneType_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_address_5fbook_2eproto__INCLUDED
