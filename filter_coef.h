/*
 **
 ** Copyright 2007, The Android Open Source Project
 ** Copyright (C) 2013 Actions-Semi, Inc.
 **
 ** Licensed under the Apache License, Version 2.0 (the "License");
 ** you may not use this file except in compliance with the License.
 ** You may obtain a copy of the License at
 **
 **     http://www.apache.org/licenses/LICENSE-2.0
 **
 ** Unless required by applicable law or agreed to in writing, software
 ** distributed under the License is distributed on an "AS IS" BASIS,
 ** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 ** See the License for the specific language governing permissions and
 ** limitations under the License.
 */

#ifndef _FILTER_COEF_H_
#define _FILTER_COEF_H_
#include "filter.h"

#define COEF 	1

/* use ellip to create coef, eg: [b,a]=ellip(3, 1, 60, 300*2/44100, 'high') */

static real iir_hp_b[3][4] = 
{
	// 300Hz
	{DOUBLE_TO_REAL(0.9487), DOUBLE_TO_REAL(-2.8462), DOUBLE_TO_REAL(2.8462), DOUBLE_TO_REAL(-0.9487)},
	// 500Hz
	{DOUBLE_TO_REAL(0.9165), DOUBLE_TO_REAL(-2.7493), DOUBLE_TO_REAL(2.7493), DOUBLE_TO_REAL(-0.9165)},
	// 700Hz
	{DOUBLE_TO_REAL(0.8856), DOUBLE_TO_REAL(-2.6566), DOUBLE_TO_REAL(2.6566), DOUBLE_TO_REAL(-0.8856)},
};

static real iir_hp_a[3][4] = 
{
	// 300Hz
	{DOUBLE_TO_REAL(1.0000), DOUBLE_TO_REAL(-2.8957), DOUBLE_TO_REAL(2.7950), DOUBLE_TO_REAL(-0.8992)},
	// 500Hz
	{DOUBLE_TO_REAL(1.0000), DOUBLE_TO_REAL(-2.8280), DOUBLE_TO_REAL(2.6661), DOUBLE_TO_REAL(-0.8375)},
	// 700Hz
	{DOUBLE_TO_REAL(1.0000), DOUBLE_TO_REAL(-2.7615), DOUBLE_TO_REAL(2.5432), DOUBLE_TO_REAL(-0.7799)},
};

static real iir_bp_b0[1][4] = 
{
	{DOUBLE_TO_REAL(0.8707 * COEF), DOUBLE_TO_REAL(-2.6118 * COEF), DOUBLE_TO_REAL(2.6118 * COEF), DOUBLE_TO_REAL(-0.8707 * COEF)},
};

static real iir_bp_b1[1][4] = 
{
	{DOUBLE_TO_REAL(0.0447 * COEF), DOUBLE_TO_REAL(0.1176 * COEF), DOUBLE_TO_REAL(0.1176 * COEF), DOUBLE_TO_REAL(0.0447 * COEF)},
};

static real iir_bp_a0[1][4] = 
{
	{DOUBLE_TO_REAL(1.0000), DOUBLE_TO_REAL(-2.7287), DOUBLE_TO_REAL(2.4838), DOUBLE_TO_REAL(-0.7524)},
};

static real iir_bp_a1[1][4] = 
{
	{DOUBLE_TO_REAL(1.0000), DOUBLE_TO_REAL(-1.4748), DOUBLE_TO_REAL(1.1773), DOUBLE_TO_REAL(-0.3779)},
};

#endif