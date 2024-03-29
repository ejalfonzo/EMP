/*
 * {iso14443a.h}
 *
 * {ISO14443A header file}
 *
 * Copyright (C) 2013 Texas Instruments Incorporated - http://www.ti.com/
 *
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
*/

#ifndef _ISO14443A_H_
#define _ISO14443A_H_

//================================================================

#include <MSP430.h> 					// prozessor spezific header
#include "mcu.h"
#include "trf7970.h"
#include "types.h"
#include "uart.h"

//===============================================================

// if disabled file ISO14443A.c may be excluded from build
//#define	ENABLE14443A						// delete to disable standard

//===============================================================

void Iso14443aAnticollision(u08_t reqa);
void Iso14443aFindTag(void);
void Iso14443aLoop(u08_t select, u08_t nvb, u08_t *UID);
void Iso14443a_command(u08_t command);
void Iso14443a_halt();
void Iso14443aSelectCommand(u08_t select, u08_t nvb, u08_t *uid);
void Iso14443_config(u08_t crc);
void ISO14443IRQWaitTimeout(u08_t txtimeout, u08_t rxtimeout);

//===============================================================

#endif
