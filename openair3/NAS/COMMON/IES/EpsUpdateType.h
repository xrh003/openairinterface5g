/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.0  (the "License"); you may not use this file
 * except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "OctetString.h"

#ifndef EPS_UPDATE_TYPE_H_
#define EPS_UPDATE_TYPE_H_

#define EPS_UPDATE_TYPE_MINIMUM_LENGTH 1
#define EPS_UPDATE_TYPE_MAXIMUM_LENGTH 1

typedef struct EpsUpdateType_tag {
  uint8_t  activeflag:1;
  uint8_t  epsupdatetypevalue:3;
} EpsUpdateType;

int encode_eps_update_type(EpsUpdateType *epsupdatetype, uint8_t iei, uint8_t *buffer, uint32_t len);

void dump_eps_update_type_xml(EpsUpdateType *epsupdatetype, uint8_t iei);

uint8_t encode_u8_eps_update_type(EpsUpdateType *epsupdatetype);

int decode_eps_update_type(EpsUpdateType *epsupdatetype, uint8_t iei, uint8_t *buffer, uint32_t len);

int decode_u8_eps_update_type(EpsUpdateType *epsupdatetype, uint8_t iei, uint8_t value, uint32_t len);

#endif /* EPS UPDATE TYPE_H_ */

