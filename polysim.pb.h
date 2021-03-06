// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: polysim.proto

#ifndef PROTOBUF_polysim_2eproto__INCLUDED
#define PROTOBUF_polysim_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

namespace polysim {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_polysim_2eproto();
void protobuf_AssignDesc_polysim_2eproto();
void protobuf_ShutdownFile_polysim_2eproto();

class SPolymer;
class SSystem;
class SSim;
class Settings;

// ===================================================================

class SPolymer : public ::google::protobuf::Message {
 public:
  SPolymer();
  virtual ~SPolymer();
  
  SPolymer(const SPolymer& from);
  
  inline SPolymer& operator=(const SPolymer& from) {
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
  static const SPolymer& default_instance();
  
  void Swap(SPolymer* other);
  
  // implements Message ----------------------------------------------
  
  SPolymer* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SPolymer& from);
  void MergeFrom(const SPolymer& from);
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
  
  // repeated double x = 1;
  inline int x_size() const;
  inline void clear_x();
  static const int kXFieldNumber = 1;
  inline double x(int index) const;
  inline void set_x(int index, double value);
  inline void add_x(double value);
  inline const ::google::protobuf::RepeatedField< double >&
      x() const;
  inline ::google::protobuf::RepeatedField< double >*
      mutable_x();
  
  // repeated double y = 2;
  inline int y_size() const;
  inline void clear_y();
  static const int kYFieldNumber = 2;
  inline double y(int index) const;
  inline void set_y(int index, double value);
  inline void add_y(double value);
  inline const ::google::protobuf::RepeatedField< double >&
      y() const;
  inline ::google::protobuf::RepeatedField< double >*
      mutable_y();
  
  // repeated double z = 3;
  inline int z_size() const;
  inline void clear_z();
  static const int kZFieldNumber = 3;
  inline double z(int index) const;
  inline void set_z(int index, double value);
  inline void add_z(double value);
  inline const ::google::protobuf::RepeatedField< double >&
      z() const;
  inline ::google::protobuf::RepeatedField< double >*
      mutable_z();
  
  // @@protoc_insertion_point(class_scope:polysim.SPolymer)
 private:
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::RepeatedField< double > x_;
  ::google::protobuf::RepeatedField< double > y_;
  ::google::protobuf::RepeatedField< double > z_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_polysim_2eproto();
  friend void protobuf_AssignDesc_polysim_2eproto();
  friend void protobuf_ShutdownFile_polysim_2eproto();
  
  void InitAsDefaultInstance();
  static SPolymer* default_instance_;
};
// -------------------------------------------------------------------

class SSystem : public ::google::protobuf::Message {
 public:
  SSystem();
  virtual ~SSystem();
  
  SSystem(const SSystem& from);
  
  inline SSystem& operator=(const SSystem& from) {
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
  static const SSystem& default_instance();
  
  void Swap(SSystem* other);
  
  // implements Message ----------------------------------------------
  
  SSystem* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SSystem& from);
  void MergeFrom(const SSystem& from);
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
  
  // repeated .polysim.SPolymer poly = 1;
  inline int poly_size() const;
  inline void clear_poly();
  static const int kPolyFieldNumber = 1;
  inline const ::polysim::SPolymer& poly(int index) const;
  inline ::polysim::SPolymer* mutable_poly(int index);
  inline ::polysim::SPolymer* add_poly();
  inline const ::google::protobuf::RepeatedPtrField< ::polysim::SPolymer >&
      poly() const;
  inline ::google::protobuf::RepeatedPtrField< ::polysim::SPolymer >*
      mutable_poly();
  
  // @@protoc_insertion_point(class_scope:polysim.SSystem)
 private:
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::RepeatedPtrField< ::polysim::SPolymer > poly_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  friend void  protobuf_AddDesc_polysim_2eproto();
  friend void protobuf_AssignDesc_polysim_2eproto();
  friend void protobuf_ShutdownFile_polysim_2eproto();
  
  void InitAsDefaultInstance();
  static SSystem* default_instance_;
};
// -------------------------------------------------------------------

class SSim : public ::google::protobuf::Message {
 public:
  SSim();
  virtual ~SSim();
  
  SSim(const SSim& from);
  
  inline SSim& operator=(const SSim& from) {
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
  static const SSim& default_instance();
  
  void Swap(SSim* other);
  
  // implements Message ----------------------------------------------
  
  SSim* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SSim& from);
  void MergeFrom(const SSim& from);
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
  
  // repeated .polysim.SSystem system = 1;
  inline int system_size() const;
  inline void clear_system();
  static const int kSystemFieldNumber = 1;
  inline const ::polysim::SSystem& system(int index) const;
  inline ::polysim::SSystem* mutable_system(int index);
  inline ::polysim::SSystem* add_system();
  inline const ::google::protobuf::RepeatedPtrField< ::polysim::SSystem >&
      system() const;
  inline ::google::protobuf::RepeatedPtrField< ::polysim::SSystem >*
      mutable_system();
  
  // repeated .polysim.SPolymer yolk = 3;
  inline int yolk_size() const;
  inline void clear_yolk();
  static const int kYolkFieldNumber = 3;
  inline const ::polysim::SPolymer& yolk(int index) const;
  inline ::polysim::SPolymer* mutable_yolk(int index);
  inline ::polysim::SPolymer* add_yolk();
  inline const ::google::protobuf::RepeatedPtrField< ::polysim::SPolymer >&
      yolk() const;
  inline ::google::protobuf::RepeatedPtrField< ::polysim::SPolymer >*
      mutable_yolk();
  
  // required .polysim.Settings settings = 2;
  inline bool has_settings() const;
  inline void clear_settings();
  static const int kSettingsFieldNumber = 2;
  inline const ::polysim::Settings& settings() const;
  inline ::polysim::Settings* mutable_settings();
  inline ::polysim::Settings* release_settings();
  
  // @@protoc_insertion_point(class_scope:polysim.SSim)
 private:
  inline void set_has_settings();
  inline void clear_has_settings();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::google::protobuf::RepeatedPtrField< ::polysim::SSystem > system_;
  ::google::protobuf::RepeatedPtrField< ::polysim::SPolymer > yolk_;
  ::polysim::Settings* settings_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  friend void  protobuf_AddDesc_polysim_2eproto();
  friend void protobuf_AssignDesc_polysim_2eproto();
  friend void protobuf_ShutdownFile_polysim_2eproto();
  
  void InitAsDefaultInstance();
  static SSim* default_instance_;
};
// -------------------------------------------------------------------

class Settings : public ::google::protobuf::Message {
 public:
  Settings();
  virtual ~Settings();
  
  Settings(const Settings& from);
  
  inline Settings& operator=(const Settings& from) {
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
  static const Settings& default_instance();
  
  void Swap(Settings* other);
  
  // implements Message ----------------------------------------------
  
  Settings* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Settings& from);
  void MergeFrom(const Settings& from);
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
  
  // required double h = 7;
  inline bool has_h() const;
  inline void clear_h();
  static const int kHFieldNumber = 7;
  inline double h() const;
  inline void set_h(double value);
  
  // required double sk = 1;
  inline bool has_sk() const;
  inline void clear_sk();
  static const int kSkFieldNumber = 1;
  inline double sk() const;
  inline void set_sk(double value);
  
  // required double pk = 2;
  inline bool has_pk() const;
  inline void clear_pk();
  static const int kPkFieldNumber = 2;
  inline double pk() const;
  inline void set_pk(double value);
  
  // required double stiffk = 3;
  inline bool has_stiffk() const;
  inline void clear_stiffk();
  static const int kStiffkFieldNumber = 3;
  inline double stiffk() const;
  inline void set_stiffk(double value);
  
  // required double shiftk = 4;
  inline bool has_shiftk() const;
  inline void clear_shiftk();
  static const int kShiftkFieldNumber = 4;
  inline double shiftk() const;
  inline void set_shiftk(double value);
  
  // required double oseenk = 5;
  inline bool has_oseenk() const;
  inline void clear_oseenk();
  static const int kOseenkFieldNumber = 5;
  inline double oseenk() const;
  inline void set_oseenk(double value);
  
  // required int32 numpin = 6;
  inline bool has_numpin() const;
  inline void clear_numpin();
  static const int kNumpinFieldNumber = 6;
  inline ::google::protobuf::int32 numpin() const;
  inline void set_numpin(::google::protobuf::int32 value);
  
  // @@protoc_insertion_point(class_scope:polysim.Settings)
 private:
  inline void set_has_h();
  inline void clear_has_h();
  inline void set_has_sk();
  inline void clear_has_sk();
  inline void set_has_pk();
  inline void clear_has_pk();
  inline void set_has_stiffk();
  inline void clear_has_stiffk();
  inline void set_has_shiftk();
  inline void clear_has_shiftk();
  inline void set_has_oseenk();
  inline void clear_has_oseenk();
  inline void set_has_numpin();
  inline void clear_has_numpin();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  double h_;
  double sk_;
  double pk_;
  double stiffk_;
  double shiftk_;
  double oseenk_;
  ::google::protobuf::int32 numpin_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(7 + 31) / 32];
  
  friend void  protobuf_AddDesc_polysim_2eproto();
  friend void protobuf_AssignDesc_polysim_2eproto();
  friend void protobuf_ShutdownFile_polysim_2eproto();
  
  void InitAsDefaultInstance();
  static Settings* default_instance_;
};
// ===================================================================


// ===================================================================

// SPolymer

// repeated double x = 1;
inline int SPolymer::x_size() const {
  return x_.size();
}
inline void SPolymer::clear_x() {
  x_.Clear();
}
inline double SPolymer::x(int index) const {
  return x_.Get(index);
}
inline void SPolymer::set_x(int index, double value) {
  x_.Set(index, value);
}
inline void SPolymer::add_x(double value) {
  x_.Add(value);
}
inline const ::google::protobuf::RepeatedField< double >&
SPolymer::x() const {
  return x_;
}
inline ::google::protobuf::RepeatedField< double >*
SPolymer::mutable_x() {
  return &x_;
}

// repeated double y = 2;
inline int SPolymer::y_size() const {
  return y_.size();
}
inline void SPolymer::clear_y() {
  y_.Clear();
}
inline double SPolymer::y(int index) const {
  return y_.Get(index);
}
inline void SPolymer::set_y(int index, double value) {
  y_.Set(index, value);
}
inline void SPolymer::add_y(double value) {
  y_.Add(value);
}
inline const ::google::protobuf::RepeatedField< double >&
SPolymer::y() const {
  return y_;
}
inline ::google::protobuf::RepeatedField< double >*
SPolymer::mutable_y() {
  return &y_;
}

// repeated double z = 3;
inline int SPolymer::z_size() const {
  return z_.size();
}
inline void SPolymer::clear_z() {
  z_.Clear();
}
inline double SPolymer::z(int index) const {
  return z_.Get(index);
}
inline void SPolymer::set_z(int index, double value) {
  z_.Set(index, value);
}
inline void SPolymer::add_z(double value) {
  z_.Add(value);
}
inline const ::google::protobuf::RepeatedField< double >&
SPolymer::z() const {
  return z_;
}
inline ::google::protobuf::RepeatedField< double >*
SPolymer::mutable_z() {
  return &z_;
}

// -------------------------------------------------------------------

// SSystem

// repeated .polysim.SPolymer poly = 1;
inline int SSystem::poly_size() const {
  return poly_.size();
}
inline void SSystem::clear_poly() {
  poly_.Clear();
}
inline const ::polysim::SPolymer& SSystem::poly(int index) const {
  return poly_.Get(index);
}
inline ::polysim::SPolymer* SSystem::mutable_poly(int index) {
  return poly_.Mutable(index);
}
inline ::polysim::SPolymer* SSystem::add_poly() {
  return poly_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::polysim::SPolymer >&
SSystem::poly() const {
  return poly_;
}
inline ::google::protobuf::RepeatedPtrField< ::polysim::SPolymer >*
SSystem::mutable_poly() {
  return &poly_;
}

// -------------------------------------------------------------------

// SSim

// repeated .polysim.SSystem system = 1;
inline int SSim::system_size() const {
  return system_.size();
}
inline void SSim::clear_system() {
  system_.Clear();
}
inline const ::polysim::SSystem& SSim::system(int index) const {
  return system_.Get(index);
}
inline ::polysim::SSystem* SSim::mutable_system(int index) {
  return system_.Mutable(index);
}
inline ::polysim::SSystem* SSim::add_system() {
  return system_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::polysim::SSystem >&
SSim::system() const {
  return system_;
}
inline ::google::protobuf::RepeatedPtrField< ::polysim::SSystem >*
SSim::mutable_system() {
  return &system_;
}

// repeated .polysim.SPolymer yolk = 3;
inline int SSim::yolk_size() const {
  return yolk_.size();
}
inline void SSim::clear_yolk() {
  yolk_.Clear();
}
inline const ::polysim::SPolymer& SSim::yolk(int index) const {
  return yolk_.Get(index);
}
inline ::polysim::SPolymer* SSim::mutable_yolk(int index) {
  return yolk_.Mutable(index);
}
inline ::polysim::SPolymer* SSim::add_yolk() {
  return yolk_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::polysim::SPolymer >&
SSim::yolk() const {
  return yolk_;
}
inline ::google::protobuf::RepeatedPtrField< ::polysim::SPolymer >*
SSim::mutable_yolk() {
  return &yolk_;
}

// required .polysim.Settings settings = 2;
inline bool SSim::has_settings() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SSim::set_has_settings() {
  _has_bits_[0] |= 0x00000004u;
}
inline void SSim::clear_has_settings() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void SSim::clear_settings() {
  if (settings_ != NULL) settings_->::polysim::Settings::Clear();
  clear_has_settings();
}
inline const ::polysim::Settings& SSim::settings() const {
  return settings_ != NULL ? *settings_ : *default_instance_->settings_;
}
inline ::polysim::Settings* SSim::mutable_settings() {
  set_has_settings();
  if (settings_ == NULL) settings_ = new ::polysim::Settings;
  return settings_;
}
inline ::polysim::Settings* SSim::release_settings() {
  clear_has_settings();
  ::polysim::Settings* temp = settings_;
  settings_ = NULL;
  return temp;
}

// -------------------------------------------------------------------

// Settings

// required double h = 7;
inline bool Settings::has_h() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Settings::set_has_h() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Settings::clear_has_h() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Settings::clear_h() {
  h_ = 0;
  clear_has_h();
}
inline double Settings::h() const {
  return h_;
}
inline void Settings::set_h(double value) {
  set_has_h();
  h_ = value;
}

// required double sk = 1;
inline bool Settings::has_sk() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Settings::set_has_sk() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Settings::clear_has_sk() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Settings::clear_sk() {
  sk_ = 0;
  clear_has_sk();
}
inline double Settings::sk() const {
  return sk_;
}
inline void Settings::set_sk(double value) {
  set_has_sk();
  sk_ = value;
}

// required double pk = 2;
inline bool Settings::has_pk() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Settings::set_has_pk() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Settings::clear_has_pk() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Settings::clear_pk() {
  pk_ = 0;
  clear_has_pk();
}
inline double Settings::pk() const {
  return pk_;
}
inline void Settings::set_pk(double value) {
  set_has_pk();
  pk_ = value;
}

// required double stiffk = 3;
inline bool Settings::has_stiffk() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Settings::set_has_stiffk() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Settings::clear_has_stiffk() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Settings::clear_stiffk() {
  stiffk_ = 0;
  clear_has_stiffk();
}
inline double Settings::stiffk() const {
  return stiffk_;
}
inline void Settings::set_stiffk(double value) {
  set_has_stiffk();
  stiffk_ = value;
}

// required double shiftk = 4;
inline bool Settings::has_shiftk() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Settings::set_has_shiftk() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Settings::clear_has_shiftk() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Settings::clear_shiftk() {
  shiftk_ = 0;
  clear_has_shiftk();
}
inline double Settings::shiftk() const {
  return shiftk_;
}
inline void Settings::set_shiftk(double value) {
  set_has_shiftk();
  shiftk_ = value;
}

// required double oseenk = 5;
inline bool Settings::has_oseenk() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Settings::set_has_oseenk() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Settings::clear_has_oseenk() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Settings::clear_oseenk() {
  oseenk_ = 0;
  clear_has_oseenk();
}
inline double Settings::oseenk() const {
  return oseenk_;
}
inline void Settings::set_oseenk(double value) {
  set_has_oseenk();
  oseenk_ = value;
}

// required int32 numpin = 6;
inline bool Settings::has_numpin() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Settings::set_has_numpin() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Settings::clear_has_numpin() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Settings::clear_numpin() {
  numpin_ = 0;
  clear_has_numpin();
}
inline ::google::protobuf::int32 Settings::numpin() const {
  return numpin_;
}
inline void Settings::set_numpin(::google::protobuf::int32 value) {
  set_has_numpin();
  numpin_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace polysim

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_polysim_2eproto__INCLUDED
