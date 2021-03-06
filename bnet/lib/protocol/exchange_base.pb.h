// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: lib/protocol/exchange.proto

#ifndef PROTOBUF_lib_2fprotocol_2fexchange_2eproto__INCLUDED
#define PROTOBUF_lib_2fprotocol_2fexchange_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

namespace bnet {
namespace protocol {
namespace exchange {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_lib_2fprotocol_2fexchange_2eproto();
void protobuf_AssignDesc_lib_2fprotocol_2fexchange_2eproto();
void protobuf_ShutdownFile_lib_2fprotocol_2fexchange_2eproto();

class PartitionId;
class BlobFrom;
class BlobOfType;
class BlobFromOfType;

// ===================================================================

class PartitionId : public ::google::protobuf::Message {
 public:
  PartitionId();
  virtual ~PartitionId();
  
  PartitionId(const PartitionId& from);
  
  inline PartitionId& operator=(const PartitionId& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const PartitionId& default_instance();
  
  void Swap(PartitionId* other);
  
  // implements Message ----------------------------------------------
  
  PartitionId* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PartitionId& from);
  void MergeFrom(const PartitionId& from);
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
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required fixed64 high = 1;
  inline bool has_high() const;
  inline void clear_high();
  static const int kHighFieldNumber = 1;
  inline ::google::protobuf::uint64 high() const;
  inline void set_high(::google::protobuf::uint64 value);
  
  // required fixed64 low = 2;
  inline bool has_low() const;
  inline void clear_low();
  static const int kLowFieldNumber = 2;
  inline ::google::protobuf::uint64 low() const;
  inline void set_low(::google::protobuf::uint64 value);
  
  // @@protoc_insertion_point(class_scope:bnet.protocol.exchange.PartitionId)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::uint64 high_;
  ::google::protobuf::uint64 low_;
  friend void  protobuf_AddDesc_lib_2fprotocol_2fexchange_2eproto();
  friend void protobuf_AssignDesc_lib_2fprotocol_2fexchange_2eproto();
  friend void protobuf_ShutdownFile_lib_2fprotocol_2fexchange_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static PartitionId* default_instance_;
};
// -------------------------------------------------------------------

class BlobFrom : public ::google::protobuf::Message {
 public:
  BlobFrom();
  virtual ~BlobFrom();
  
  BlobFrom(const BlobFrom& from);
  
  inline BlobFrom& operator=(const BlobFrom& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const BlobFrom& default_instance();
  
  void Swap(BlobFrom* other);
  
  // implements Message ----------------------------------------------
  
  BlobFrom* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BlobFrom& from);
  void MergeFrom(const BlobFrom& from);
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
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required fixed32 source = 1;
  inline bool has_source() const;
  inline void clear_source();
  static const int kSourceFieldNumber = 1;
  inline ::google::protobuf::uint32 source() const;
  inline void set_source(::google::protobuf::uint32 value);
  
  // required bytes data = 2;
  inline bool has_data() const;
  inline void clear_data();
  static const int kDataFieldNumber = 2;
  inline const ::std::string& data() const;
  inline void set_data(const ::std::string& value);
  inline void set_data(const char* value);
  inline void set_data(const void* value, size_t size);
  inline ::std::string* mutable_data();
  
  // optional bytes extra_data = 3;
  inline bool has_extra_data() const;
  inline void clear_extra_data();
  static const int kExtraDataFieldNumber = 3;
  inline const ::std::string& extra_data() const;
  inline void set_extra_data(const ::std::string& value);
  inline void set_extra_data(const char* value);
  inline void set_extra_data(const void* value, size_t size);
  inline ::std::string* mutable_extra_data();
  
  // @@protoc_insertion_point(class_scope:bnet.protocol.exchange.BlobFrom)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::uint32 source_;
  ::std::string* data_;
  static const ::std::string _default_data_;
  ::std::string* extra_data_;
  static const ::std::string _default_extra_data_;
  friend void  protobuf_AddDesc_lib_2fprotocol_2fexchange_2eproto();
  friend void protobuf_AssignDesc_lib_2fprotocol_2fexchange_2eproto();
  friend void protobuf_ShutdownFile_lib_2fprotocol_2fexchange_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static BlobFrom* default_instance_;
};
// -------------------------------------------------------------------

class BlobOfType : public ::google::protobuf::Message {
 public:
  BlobOfType();
  virtual ~BlobOfType();
  
  BlobOfType(const BlobOfType& from);
  
  inline BlobOfType& operator=(const BlobOfType& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const BlobOfType& default_instance();
  
  void Swap(BlobOfType* other);
  
  // implements Message ----------------------------------------------
  
  BlobOfType* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BlobOfType& from);
  void MergeFrom(const BlobOfType& from);
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
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required string type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline const ::std::string& type() const;
  inline void set_type(const ::std::string& value);
  inline void set_type(const char* value);
  inline void set_type(const char* value, size_t size);
  inline ::std::string* mutable_type();
  
  // optional bytes data = 2;
  inline bool has_data() const;
  inline void clear_data();
  static const int kDataFieldNumber = 2;
  inline const ::std::string& data() const;
  inline void set_data(const ::std::string& value);
  inline void set_data(const char* value);
  inline void set_data(const void* value, size_t size);
  inline ::std::string* mutable_data();
  
  // optional bytes extra_data = 3;
  inline bool has_extra_data() const;
  inline void clear_extra_data();
  static const int kExtraDataFieldNumber = 3;
  inline const ::std::string& extra_data() const;
  inline void set_extra_data(const ::std::string& value);
  inline void set_extra_data(const char* value);
  inline void set_extra_data(const void* value, size_t size);
  inline ::std::string* mutable_extra_data();
  
  // @@protoc_insertion_point(class_scope:bnet.protocol.exchange.BlobOfType)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::std::string* type_;
  static const ::std::string _default_type_;
  ::std::string* data_;
  static const ::std::string _default_data_;
  ::std::string* extra_data_;
  static const ::std::string _default_extra_data_;
  friend void  protobuf_AddDesc_lib_2fprotocol_2fexchange_2eproto();
  friend void protobuf_AssignDesc_lib_2fprotocol_2fexchange_2eproto();
  friend void protobuf_ShutdownFile_lib_2fprotocol_2fexchange_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static BlobOfType* default_instance_;
};
// -------------------------------------------------------------------

class BlobFromOfType : public ::google::protobuf::Message {
 public:
  BlobFromOfType();
  virtual ~BlobFromOfType();
  
  BlobFromOfType(const BlobFromOfType& from);
  
  inline BlobFromOfType& operator=(const BlobFromOfType& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const BlobFromOfType& default_instance();
  
  void Swap(BlobFromOfType* other);
  
  // implements Message ----------------------------------------------
  
  BlobFromOfType* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BlobFromOfType& from);
  void MergeFrom(const BlobFromOfType& from);
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
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required fixed32 source = 1;
  inline bool has_source() const;
  inline void clear_source();
  static const int kSourceFieldNumber = 1;
  inline ::google::protobuf::uint32 source() const;
  inline void set_source(::google::protobuf::uint32 value);
  
  // required string type = 2;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 2;
  inline const ::std::string& type() const;
  inline void set_type(const ::std::string& value);
  inline void set_type(const char* value);
  inline void set_type(const char* value, size_t size);
  inline ::std::string* mutable_type();
  
  // required bytes data = 3;
  inline bool has_data() const;
  inline void clear_data();
  static const int kDataFieldNumber = 3;
  inline const ::std::string& data() const;
  inline void set_data(const ::std::string& value);
  inline void set_data(const char* value);
  inline void set_data(const void* value, size_t size);
  inline ::std::string* mutable_data();
  
  // @@protoc_insertion_point(class_scope:bnet.protocol.exchange.BlobFromOfType)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::uint32 source_;
  ::std::string* type_;
  static const ::std::string _default_type_;
  ::std::string* data_;
  static const ::std::string _default_data_;
  friend void  protobuf_AddDesc_lib_2fprotocol_2fexchange_2eproto();
  friend void protobuf_AssignDesc_lib_2fprotocol_2fexchange_2eproto();
  friend void protobuf_ShutdownFile_lib_2fprotocol_2fexchange_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static BlobFromOfType* default_instance_;
};
// ===================================================================


// ===================================================================

// PartitionId

// required fixed64 high = 1;
inline bool PartitionId::has_high() const {
  return _has_bit(0);
}
inline void PartitionId::clear_high() {
  high_ = GOOGLE_ULONGLONG(0);
  _clear_bit(0);
}
inline ::google::protobuf::uint64 PartitionId::high() const {
  return high_;
}
inline void PartitionId::set_high(::google::protobuf::uint64 value) {
  _set_bit(0);
  high_ = value;
}

// required fixed64 low = 2;
inline bool PartitionId::has_low() const {
  return _has_bit(1);
}
inline void PartitionId::clear_low() {
  low_ = GOOGLE_ULONGLONG(0);
  _clear_bit(1);
}
inline ::google::protobuf::uint64 PartitionId::low() const {
  return low_;
}
inline void PartitionId::set_low(::google::protobuf::uint64 value) {
  _set_bit(1);
  low_ = value;
}

// -------------------------------------------------------------------

// BlobFrom

// required fixed32 source = 1;
inline bool BlobFrom::has_source() const {
  return _has_bit(0);
}
inline void BlobFrom::clear_source() {
  source_ = 0u;
  _clear_bit(0);
}
inline ::google::protobuf::uint32 BlobFrom::source() const {
  return source_;
}
inline void BlobFrom::set_source(::google::protobuf::uint32 value) {
  _set_bit(0);
  source_ = value;
}

// required bytes data = 2;
inline bool BlobFrom::has_data() const {
  return _has_bit(1);
}
inline void BlobFrom::clear_data() {
  if (data_ != &_default_data_) {
    data_->clear();
  }
  _clear_bit(1);
}
inline const ::std::string& BlobFrom::data() const {
  return *data_;
}
inline void BlobFrom::set_data(const ::std::string& value) {
  _set_bit(1);
  if (data_ == &_default_data_) {
    data_ = new ::std::string;
  }
  data_->assign(value);
}
inline void BlobFrom::set_data(const char* value) {
  _set_bit(1);
  if (data_ == &_default_data_) {
    data_ = new ::std::string;
  }
  data_->assign(value);
}
inline void BlobFrom::set_data(const void* value, size_t size) {
  _set_bit(1);
  if (data_ == &_default_data_) {
    data_ = new ::std::string;
  }
  data_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* BlobFrom::mutable_data() {
  _set_bit(1);
  if (data_ == &_default_data_) {
    data_ = new ::std::string;
  }
  return data_;
}

// optional bytes extra_data = 3;
inline bool BlobFrom::has_extra_data() const {
  return _has_bit(2);
}
inline void BlobFrom::clear_extra_data() {
  if (extra_data_ != &_default_extra_data_) {
    extra_data_->clear();
  }
  _clear_bit(2);
}
inline const ::std::string& BlobFrom::extra_data() const {
  return *extra_data_;
}
inline void BlobFrom::set_extra_data(const ::std::string& value) {
  _set_bit(2);
  if (extra_data_ == &_default_extra_data_) {
    extra_data_ = new ::std::string;
  }
  extra_data_->assign(value);
}
inline void BlobFrom::set_extra_data(const char* value) {
  _set_bit(2);
  if (extra_data_ == &_default_extra_data_) {
    extra_data_ = new ::std::string;
  }
  extra_data_->assign(value);
}
inline void BlobFrom::set_extra_data(const void* value, size_t size) {
  _set_bit(2);
  if (extra_data_ == &_default_extra_data_) {
    extra_data_ = new ::std::string;
  }
  extra_data_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* BlobFrom::mutable_extra_data() {
  _set_bit(2);
  if (extra_data_ == &_default_extra_data_) {
    extra_data_ = new ::std::string;
  }
  return extra_data_;
}

// -------------------------------------------------------------------

// BlobOfType

// required string type = 1;
inline bool BlobOfType::has_type() const {
  return _has_bit(0);
}
inline void BlobOfType::clear_type() {
  if (type_ != &_default_type_) {
    type_->clear();
  }
  _clear_bit(0);
}
inline const ::std::string& BlobOfType::type() const {
  return *type_;
}
inline void BlobOfType::set_type(const ::std::string& value) {
  _set_bit(0);
  if (type_ == &_default_type_) {
    type_ = new ::std::string;
  }
  type_->assign(value);
}
inline void BlobOfType::set_type(const char* value) {
  _set_bit(0);
  if (type_ == &_default_type_) {
    type_ = new ::std::string;
  }
  type_->assign(value);
}
inline void BlobOfType::set_type(const char* value, size_t size) {
  _set_bit(0);
  if (type_ == &_default_type_) {
    type_ = new ::std::string;
  }
  type_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* BlobOfType::mutable_type() {
  _set_bit(0);
  if (type_ == &_default_type_) {
    type_ = new ::std::string;
  }
  return type_;
}

// optional bytes data = 2;
inline bool BlobOfType::has_data() const {
  return _has_bit(1);
}
inline void BlobOfType::clear_data() {
  if (data_ != &_default_data_) {
    data_->clear();
  }
  _clear_bit(1);
}
inline const ::std::string& BlobOfType::data() const {
  return *data_;
}
inline void BlobOfType::set_data(const ::std::string& value) {
  _set_bit(1);
  if (data_ == &_default_data_) {
    data_ = new ::std::string;
  }
  data_->assign(value);
}
inline void BlobOfType::set_data(const char* value) {
  _set_bit(1);
  if (data_ == &_default_data_) {
    data_ = new ::std::string;
  }
  data_->assign(value);
}
inline void BlobOfType::set_data(const void* value, size_t size) {
  _set_bit(1);
  if (data_ == &_default_data_) {
    data_ = new ::std::string;
  }
  data_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* BlobOfType::mutable_data() {
  _set_bit(1);
  if (data_ == &_default_data_) {
    data_ = new ::std::string;
  }
  return data_;
}

// optional bytes extra_data = 3;
inline bool BlobOfType::has_extra_data() const {
  return _has_bit(2);
}
inline void BlobOfType::clear_extra_data() {
  if (extra_data_ != &_default_extra_data_) {
    extra_data_->clear();
  }
  _clear_bit(2);
}
inline const ::std::string& BlobOfType::extra_data() const {
  return *extra_data_;
}
inline void BlobOfType::set_extra_data(const ::std::string& value) {
  _set_bit(2);
  if (extra_data_ == &_default_extra_data_) {
    extra_data_ = new ::std::string;
  }
  extra_data_->assign(value);
}
inline void BlobOfType::set_extra_data(const char* value) {
  _set_bit(2);
  if (extra_data_ == &_default_extra_data_) {
    extra_data_ = new ::std::string;
  }
  extra_data_->assign(value);
}
inline void BlobOfType::set_extra_data(const void* value, size_t size) {
  _set_bit(2);
  if (extra_data_ == &_default_extra_data_) {
    extra_data_ = new ::std::string;
  }
  extra_data_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* BlobOfType::mutable_extra_data() {
  _set_bit(2);
  if (extra_data_ == &_default_extra_data_) {
    extra_data_ = new ::std::string;
  }
  return extra_data_;
}

// -------------------------------------------------------------------

// BlobFromOfType

// required fixed32 source = 1;
inline bool BlobFromOfType::has_source() const {
  return _has_bit(0);
}
inline void BlobFromOfType::clear_source() {
  source_ = 0u;
  _clear_bit(0);
}
inline ::google::protobuf::uint32 BlobFromOfType::source() const {
  return source_;
}
inline void BlobFromOfType::set_source(::google::protobuf::uint32 value) {
  _set_bit(0);
  source_ = value;
}

// required string type = 2;
inline bool BlobFromOfType::has_type() const {
  return _has_bit(1);
}
inline void BlobFromOfType::clear_type() {
  if (type_ != &_default_type_) {
    type_->clear();
  }
  _clear_bit(1);
}
inline const ::std::string& BlobFromOfType::type() const {
  return *type_;
}
inline void BlobFromOfType::set_type(const ::std::string& value) {
  _set_bit(1);
  if (type_ == &_default_type_) {
    type_ = new ::std::string;
  }
  type_->assign(value);
}
inline void BlobFromOfType::set_type(const char* value) {
  _set_bit(1);
  if (type_ == &_default_type_) {
    type_ = new ::std::string;
  }
  type_->assign(value);
}
inline void BlobFromOfType::set_type(const char* value, size_t size) {
  _set_bit(1);
  if (type_ == &_default_type_) {
    type_ = new ::std::string;
  }
  type_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* BlobFromOfType::mutable_type() {
  _set_bit(1);
  if (type_ == &_default_type_) {
    type_ = new ::std::string;
  }
  return type_;
}

// required bytes data = 3;
inline bool BlobFromOfType::has_data() const {
  return _has_bit(2);
}
inline void BlobFromOfType::clear_data() {
  if (data_ != &_default_data_) {
    data_->clear();
  }
  _clear_bit(2);
}
inline const ::std::string& BlobFromOfType::data() const {
  return *data_;
}
inline void BlobFromOfType::set_data(const ::std::string& value) {
  _set_bit(2);
  if (data_ == &_default_data_) {
    data_ = new ::std::string;
  }
  data_->assign(value);
}
inline void BlobFromOfType::set_data(const char* value) {
  _set_bit(2);
  if (data_ == &_default_data_) {
    data_ = new ::std::string;
  }
  data_->assign(value);
}
inline void BlobFromOfType::set_data(const void* value, size_t size) {
  _set_bit(2);
  if (data_ == &_default_data_) {
    data_ = new ::std::string;
  }
  data_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* BlobFromOfType::mutable_data() {
  _set_bit(2);
  if (data_ == &_default_data_) {
    data_ = new ::std::string;
  }
  return data_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace exchange
}  // namespace protocol
}  // namespace bnet

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_lib_2fprotocol_2fexchange_2eproto__INCLUDED
