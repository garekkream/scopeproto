/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: scope_msg_response.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "scope_msg_response.pb-c.h"
void   scope_msg_server_res__init
                     (ScopeMsgServerRes         *message)
{
  static ScopeMsgServerRes init_value = SCOPE_MSG_SERVER_RES__INIT;
  *message = init_value;
}
size_t scope_msg_server_res__get_packed_size
                     (const ScopeMsgServerRes *message)
{
  assert(message->base.descriptor == &scope_msg_server_res__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t scope_msg_server_res__pack
                     (const ScopeMsgServerRes *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &scope_msg_server_res__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t scope_msg_server_res__pack_to_buffer
                     (const ScopeMsgServerRes *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &scope_msg_server_res__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
ScopeMsgServerRes *
       scope_msg_server_res__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (ScopeMsgServerRes *)
     protobuf_c_message_unpack (&scope_msg_server_res__descriptor,
                                allocator, len, data);
}
void   scope_msg_server_res__free_unpacked
                     (ScopeMsgServerRes *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &scope_msg_server_res__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCEnumValue scope_msg_server_res__scope_msg_id_res__enum_values_by_number[3] =
{
  { "SCOPE_MSGID_DUMMY_RES", "SCOPE_MSG_SERVER_RES__SCOPE_MSG_ID_RES__SCOPE_MSGID_DUMMY_RES", 0 },
  { "SCOPE_MSGID_REGISTER_RES", "SCOPE_MSG_SERVER_RES__SCOPE_MSG_ID_RES__SCOPE_MSGID_REGISTER_RES", 1 },
  { "SCOPE_MSGID_UNREGISTER_RES", "SCOPE_MSG_SERVER_RES__SCOPE_MSG_ID_RES__SCOPE_MSGID_UNREGISTER_RES", 2 },
};
static const ProtobufCIntRange scope_msg_server_res__scope_msg_id_res__value_ranges[] = {
{0, 0},{0, 3}
};
static const ProtobufCEnumValueIndex scope_msg_server_res__scope_msg_id_res__enum_values_by_name[3] =
{
  { "SCOPE_MSGID_DUMMY_RES", 0 },
  { "SCOPE_MSGID_REGISTER_RES", 1 },
  { "SCOPE_MSGID_UNREGISTER_RES", 2 },
};
const ProtobufCEnumDescriptor scope_msg_server_res__scope_msg_id_res__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "scopeMsgServerRes.scopeMsgIdRes",
  "scopeMsgIdRes",
  "ScopeMsgServerRes__ScopeMsgIdRes",
  "",
  3,
  scope_msg_server_res__scope_msg_id_res__enum_values_by_number,
  3,
  scope_msg_server_res__scope_msg_id_res__enum_values_by_name,
  1,
  scope_msg_server_res__scope_msg_id_res__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCEnumValue scope_msg_server_res__scope_register_flags_res__enum_values_by_number[1] =
{
  { "SERVER_SW_VER", "SCOPE_MSG_SERVER_RES__SCOPE_REGISTER_FLAGS_RES__SERVER_SW_VER", 1 },
};
static const ProtobufCIntRange scope_msg_server_res__scope_register_flags_res__value_ranges[] = {
{1, 0},{0, 1}
};
static const ProtobufCEnumValueIndex scope_msg_server_res__scope_register_flags_res__enum_values_by_name[1] =
{
  { "SERVER_SW_VER", 0 },
};
const ProtobufCEnumDescriptor scope_msg_server_res__scope_register_flags_res__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "scopeMsgServerRes.scopeRegisterFlagsRes",
  "scopeRegisterFlagsRes",
  "ScopeMsgServerRes__ScopeRegisterFlagsRes",
  "",
  1,
  scope_msg_server_res__scope_register_flags_res__enum_values_by_number,
  1,
  scope_msg_server_res__scope_register_flags_res__enum_values_by_name,
  1,
  scope_msg_server_res__scope_register_flags_res__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor scope_msg_server_res__field_descriptors[4] =
{
  {
    "id",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(ScopeMsgServerRes, id),
    &scope_msg_server_res__scope_msg_id_res__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "device_id",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(ScopeMsgServerRes, device_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "payload_flags",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(ScopeMsgServerRes, has_payload_flags),
    offsetof(ScopeMsgServerRes, payload_flags),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "payload_data",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(ScopeMsgServerRes, has_payload_data),
    offsetof(ScopeMsgServerRes, payload_data),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned scope_msg_server_res__field_indices_by_name[] = {
  1,   /* field[1] = device_id */
  0,   /* field[0] = id */
  3,   /* field[3] = payload_data */
  2,   /* field[2] = payload_flags */
};
static const ProtobufCIntRange scope_msg_server_res__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor scope_msg_server_res__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "scopeMsgServerRes",
  "ScopeMsgServerRes",
  "ScopeMsgServerRes",
  "",
  sizeof(ScopeMsgServerRes),
  4,
  scope_msg_server_res__field_descriptors,
  scope_msg_server_res__field_indices_by_name,
  1,  scope_msg_server_res__number_ranges,
  (ProtobufCMessageInit) scope_msg_server_res__init,
  NULL,NULL,NULL    /* reserved[123] */
};
