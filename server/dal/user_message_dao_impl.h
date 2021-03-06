/*
 *  Copyright (c) 2016, https://github.com/nebula-im/imengine
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

#ifndef IMENGINGE_DAL_USER_MESSAGE_DAO_IMPL_H_
#define IMENGINGE_DAL_USER_MESSAGE_DAO_IMPL_H_

#include "dal/user_message_dao.h"

struct UserMessageDAOImpl : public UserMessageDAO {
  virtual ~UserMessageDAOImpl() = default;
  
  int64_t Create(UserMessageDO& user_message) override;
  
  int LoadUserMessageList(const std::string& user_id,
                          uint64_t received_max_message_seq,
                          UserMessageDOList& user_message_list) override;
  
  int LoadUserDialogMessageList(const std::string& user_id,
                                const std::string& peer_id,
                                uint32_t peer_type,
                                UserMessageDOList& message_list) override;
};

#endif
