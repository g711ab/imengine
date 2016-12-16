/*
 *  Copyright (c) 2016, https://github.com/nebula-im
 *  All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// TODO(@benqi): 使用zrpc-code-gen代码生成工具自动生成

#ifndef	MESSENGER_ZRPC_MESSENGER_DISPATCHER_H_
#define	MESSENGER_ZRPC_MESSENGER_DISPATCHER_H_

#include "nebula/net/zproto/zproto_package_data.h"

class ZRpcMessengerDispatcher {
public:
  ZRpcMessengerDispatcher();
  ~ZRpcMessengerDispatcher() = default;
  
  static ProtoRpcResponsePtr SendMessage(RpcRequestPtr request);
  static ProtoRpcResponsePtr MessageSync(RpcRequestPtr request);
  static ProtoRpcResponsePtr LoadHistoryMessage(RpcRequestPtr request);
  static ProtoRpcResponsePtr LoadDialogs(RpcRequestPtr request);
  static ProtoRpcResponsePtr CreateGroup(RpcRequestPtr request);
};

#endif // MESSENGER_ZRPC_MESSENGER_DISPATCHER_H_