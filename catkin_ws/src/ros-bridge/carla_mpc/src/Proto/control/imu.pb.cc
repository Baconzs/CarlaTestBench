// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: control/imu.proto

#include "control/imu.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_common_2fgeometry_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_common_2fgeometry_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Point3D;
}  // namespace protobuf_common_2fgeometry_2eproto
namespace protobuf_common_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_common_2fheader_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Header;
}  // namespace protobuf_common_2fheader_2eproto
namespace localization {
class PoseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Pose>
      _instance;
} _Pose_default_instance_;
}  // namespace localization
namespace protobuf_control_2fimu_2eproto {
static void InitDefaultsPose() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::localization::_Pose_default_instance_;
    new (ptr) ::localization::Pose();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::localization::Pose::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<2> scc_info_Pose =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsPose}, {
      &protobuf_common_2fheader_2eproto::scc_info_Header.base,
      &protobuf_common_2fgeometry_2eproto::scc_info_Point3D.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Pose.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::localization::Pose, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::localization::Pose, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::localization::Pose, position_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::localization::Pose, linear_velocity_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::localization::Pose, linear_acceleration_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::localization::Pose, angular_velocity_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::localization::Pose, orientation_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::localization::Pose)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::localization::_Pose_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "control/imu.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\021control/imu.proto\022\014localization\032\025commo"
      "n/geometry.proto\032\023common/header.proto\"\362\001"
      "\n\004Pose\022\036\n\006header\030\001 \001(\0132\016.common.Header\022!"
      "\n\010position\030\002 \001(\0132\017.common.Point3D\022(\n\017lin"
      "ear_velocity\030\003 \001(\0132\017.common.Point3D\022,\n\023l"
      "inear_acceleration\030\004 \001(\0132\017.common.Point3"
      "D\022)\n\020angular_velocity\030\005 \001(\0132\017.common.Poi"
      "nt3D\022$\n\013orientation\030\006 \001(\0132\017.common.Point"
      "3Db\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 330);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "control/imu.proto", &protobuf_RegisterTypes);
  ::protobuf_common_2fgeometry_2eproto::AddDescriptors();
  ::protobuf_common_2fheader_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_control_2fimu_2eproto
namespace localization {

// ===================================================================

void Pose::InitAsDefaultInstance() {
  ::localization::_Pose_default_instance_._instance.get_mutable()->header_ = const_cast< ::common::Header*>(
      ::common::Header::internal_default_instance());
  ::localization::_Pose_default_instance_._instance.get_mutable()->position_ = const_cast< ::common::Point3D*>(
      ::common::Point3D::internal_default_instance());
  ::localization::_Pose_default_instance_._instance.get_mutable()->linear_velocity_ = const_cast< ::common::Point3D*>(
      ::common::Point3D::internal_default_instance());
  ::localization::_Pose_default_instance_._instance.get_mutable()->linear_acceleration_ = const_cast< ::common::Point3D*>(
      ::common::Point3D::internal_default_instance());
  ::localization::_Pose_default_instance_._instance.get_mutable()->angular_velocity_ = const_cast< ::common::Point3D*>(
      ::common::Point3D::internal_default_instance());
  ::localization::_Pose_default_instance_._instance.get_mutable()->orientation_ = const_cast< ::common::Point3D*>(
      ::common::Point3D::internal_default_instance());
}
void Pose::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
void Pose::clear_position() {
  if (GetArenaNoVirtual() == NULL && position_ != NULL) {
    delete position_;
  }
  position_ = NULL;
}
void Pose::clear_linear_velocity() {
  if (GetArenaNoVirtual() == NULL && linear_velocity_ != NULL) {
    delete linear_velocity_;
  }
  linear_velocity_ = NULL;
}
void Pose::clear_linear_acceleration() {
  if (GetArenaNoVirtual() == NULL && linear_acceleration_ != NULL) {
    delete linear_acceleration_;
  }
  linear_acceleration_ = NULL;
}
void Pose::clear_angular_velocity() {
  if (GetArenaNoVirtual() == NULL && angular_velocity_ != NULL) {
    delete angular_velocity_;
  }
  angular_velocity_ = NULL;
}
void Pose::clear_orientation() {
  if (GetArenaNoVirtual() == NULL && orientation_ != NULL) {
    delete orientation_;
  }
  orientation_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Pose::kHeaderFieldNumber;
const int Pose::kPositionFieldNumber;
const int Pose::kLinearVelocityFieldNumber;
const int Pose::kLinearAccelerationFieldNumber;
const int Pose::kAngularVelocityFieldNumber;
const int Pose::kOrientationFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Pose::Pose()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_control_2fimu_2eproto::scc_info_Pose.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:localization.Pose)
}
Pose::Pose(const Pose& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_header()) {
    header_ = new ::common::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  if (from.has_position()) {
    position_ = new ::common::Point3D(*from.position_);
  } else {
    position_ = NULL;
  }
  if (from.has_linear_velocity()) {
    linear_velocity_ = new ::common::Point3D(*from.linear_velocity_);
  } else {
    linear_velocity_ = NULL;
  }
  if (from.has_linear_acceleration()) {
    linear_acceleration_ = new ::common::Point3D(*from.linear_acceleration_);
  } else {
    linear_acceleration_ = NULL;
  }
  if (from.has_angular_velocity()) {
    angular_velocity_ = new ::common::Point3D(*from.angular_velocity_);
  } else {
    angular_velocity_ = NULL;
  }
  if (from.has_orientation()) {
    orientation_ = new ::common::Point3D(*from.orientation_);
  } else {
    orientation_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:localization.Pose)
}

void Pose::SharedCtor() {
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&orientation_) -
      reinterpret_cast<char*>(&header_)) + sizeof(orientation_));
}

Pose::~Pose() {
  // @@protoc_insertion_point(destructor:localization.Pose)
  SharedDtor();
}

void Pose::SharedDtor() {
  if (this != internal_default_instance()) delete header_;
  if (this != internal_default_instance()) delete position_;
  if (this != internal_default_instance()) delete linear_velocity_;
  if (this != internal_default_instance()) delete linear_acceleration_;
  if (this != internal_default_instance()) delete angular_velocity_;
  if (this != internal_default_instance()) delete orientation_;
}

void Pose::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Pose::descriptor() {
  ::protobuf_control_2fimu_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_control_2fimu_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Pose& Pose::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_control_2fimu_2eproto::scc_info_Pose.base);
  return *internal_default_instance();
}


void Pose::Clear() {
// @@protoc_insertion_point(message_clear_start:localization.Pose)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  if (GetArenaNoVirtual() == NULL && position_ != NULL) {
    delete position_;
  }
  position_ = NULL;
  if (GetArenaNoVirtual() == NULL && linear_velocity_ != NULL) {
    delete linear_velocity_;
  }
  linear_velocity_ = NULL;
  if (GetArenaNoVirtual() == NULL && linear_acceleration_ != NULL) {
    delete linear_acceleration_;
  }
  linear_acceleration_ = NULL;
  if (GetArenaNoVirtual() == NULL && angular_velocity_ != NULL) {
    delete angular_velocity_;
  }
  angular_velocity_ = NULL;
  if (GetArenaNoVirtual() == NULL && orientation_ != NULL) {
    delete orientation_;
  }
  orientation_ = NULL;
  _internal_metadata_.Clear();
}

bool Pose::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:localization.Pose)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .common.Header header = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_header()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .common.Point3D position = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_position()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .common.Point3D linear_velocity = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_linear_velocity()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .common.Point3D linear_acceleration = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_linear_acceleration()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .common.Point3D angular_velocity = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_angular_velocity()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .common.Point3D orientation = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_orientation()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:localization.Pose)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:localization.Pose)
  return false;
#undef DO_
}

void Pose::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:localization.Pose)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .common.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // .common.Point3D position = 2;
  if (this->has_position()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_position(), output);
  }

  // .common.Point3D linear_velocity = 3;
  if (this->has_linear_velocity()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->_internal_linear_velocity(), output);
  }

  // .common.Point3D linear_acceleration = 4;
  if (this->has_linear_acceleration()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->_internal_linear_acceleration(), output);
  }

  // .common.Point3D angular_velocity = 5;
  if (this->has_angular_velocity()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->_internal_angular_velocity(), output);
  }

  // .common.Point3D orientation = 6;
  if (this->has_orientation()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->_internal_orientation(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:localization.Pose)
}

::google::protobuf::uint8* Pose::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:localization.Pose)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .common.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // .common.Point3D position = 2;
  if (this->has_position()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_position(), deterministic, target);
  }

  // .common.Point3D linear_velocity = 3;
  if (this->has_linear_velocity()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->_internal_linear_velocity(), deterministic, target);
  }

  // .common.Point3D linear_acceleration = 4;
  if (this->has_linear_acceleration()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, this->_internal_linear_acceleration(), deterministic, target);
  }

  // .common.Point3D angular_velocity = 5;
  if (this->has_angular_velocity()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        5, this->_internal_angular_velocity(), deterministic, target);
  }

  // .common.Point3D orientation = 6;
  if (this->has_orientation()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        6, this->_internal_orientation(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:localization.Pose)
  return target;
}

size_t Pose::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:localization.Pose)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .common.Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *header_);
  }

  // .common.Point3D position = 2;
  if (this->has_position()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *position_);
  }

  // .common.Point3D linear_velocity = 3;
  if (this->has_linear_velocity()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *linear_velocity_);
  }

  // .common.Point3D linear_acceleration = 4;
  if (this->has_linear_acceleration()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *linear_acceleration_);
  }

  // .common.Point3D angular_velocity = 5;
  if (this->has_angular_velocity()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *angular_velocity_);
  }

  // .common.Point3D orientation = 6;
  if (this->has_orientation()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *orientation_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Pose::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:localization.Pose)
  GOOGLE_DCHECK_NE(&from, this);
  const Pose* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Pose>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:localization.Pose)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:localization.Pose)
    MergeFrom(*source);
  }
}

void Pose::MergeFrom(const Pose& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:localization.Pose)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_header()) {
    mutable_header()->::common::Header::MergeFrom(from.header());
  }
  if (from.has_position()) {
    mutable_position()->::common::Point3D::MergeFrom(from.position());
  }
  if (from.has_linear_velocity()) {
    mutable_linear_velocity()->::common::Point3D::MergeFrom(from.linear_velocity());
  }
  if (from.has_linear_acceleration()) {
    mutable_linear_acceleration()->::common::Point3D::MergeFrom(from.linear_acceleration());
  }
  if (from.has_angular_velocity()) {
    mutable_angular_velocity()->::common::Point3D::MergeFrom(from.angular_velocity());
  }
  if (from.has_orientation()) {
    mutable_orientation()->::common::Point3D::MergeFrom(from.orientation());
  }
}

void Pose::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:localization.Pose)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Pose::CopyFrom(const Pose& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:localization.Pose)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Pose::IsInitialized() const {
  return true;
}

void Pose::Swap(Pose* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Pose::InternalSwap(Pose* other) {
  using std::swap;
  swap(header_, other->header_);
  swap(position_, other->position_);
  swap(linear_velocity_, other->linear_velocity_);
  swap(linear_acceleration_, other->linear_acceleration_);
  swap(angular_velocity_, other->angular_velocity_);
  swap(orientation_, other->orientation_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Pose::GetMetadata() const {
  protobuf_control_2fimu_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_control_2fimu_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace localization
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::localization::Pose* Arena::CreateMaybeMessage< ::localization::Pose >(Arena* arena) {
  return Arena::CreateInternal< ::localization::Pose >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)