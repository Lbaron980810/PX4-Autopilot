/****************************************************************************
 *
 *   Copyright (c) 2020 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/**
 * @file ActuatorEffectivenessOmniHexParams.c
 *
 * Parameters for the detailed control allocation of Omni hex.
 *
 * @author Yueqian Liu <yueqianliu@outlook.com>
 */

/**
 * Max step limitation for arm rotation servo
 *
 * @group Control Allocation
 */
PARAM_DEFINE_FLOAT(CA_OH_ARM_D_MAX, 0.05);

/**
 * Force threshold for arm rotation output
 *
 * @group Control Allocation
 */
PARAM_DEFINE_FLOAT(CA_OH_FORCE_THR, 5.0);

/**
 * Enable printing debug info
 *
 * @group Control Allocation
 */
PARAM_DEFINE_INT32(CA_OH_DEBUG_EN, 0);

/**
 * Angle threshold in radians (ill conditioned matrix)
 *
 * @group Control Allocation
 */
PARAM_DEFINE_FLOAT(CA_OH_RANK_D_THR, 0.175);

/**
 * Angle threshold in radians (aligned damping)
 *
 * @group Control Allocation
 */
PARAM_DEFINE_FLOAT(CA_OH_DAMP_THR, 0.175);

/**
 * Angle threshold in radians (aligned freeze)
 *
 * @group Control Allocation
 */
PARAM_DEFINE_FLOAT(CA_OH_ALGN_THR, 0.09);

/**
 * Positive direction for arm rotation
 *
 * @group Control Allocation
 */
PARAM_DEFINE_INT32(CA_OH_ROTATE_DIR, 0);


/**
 * Ct in handle_rank_singularity()
 *
 * @group Control Allocation
 */
PARAM_DEFINE_FLOAT(CA_OH_RANK_D_ADD, 0.05);

/**
 * Unwinding velocity
 *
 * @group Control Allocation
 */
PARAM_DEFINE_FLOAT(CA_OH_UNWIND_VEL, 0.1);

/**
 * Sim mode flag
 *
 * @group Control Allocation
 */
PARAM_DEFINE_INT32(CA_OH_IS_SIM, 0);

/**
 * Handle level singularity flag
 *
 * @group Control Allocation
 */
PARAM_DEFINE_INT32(CA_OH_HANDLE_LEV, 0);