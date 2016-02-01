find_package( ProtobufC )

protoc(PROTO_SRC_REQ scope_msg_request.proto)
protoc(PROTO_SRC_RES scope_msg_response.proto)

add_library(scopeproto ${PROTO_SRC_REQ} ${PROTO_SRC_RES})
