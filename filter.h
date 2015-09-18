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

#ifndef _FILTER_H_
#define _FILTER_H_

typedef long real;
typedef long long real_64;

/* coeff Q27 */
#define DOUBLE_TO_REAL(x) (int)((x)*134217728)
#define REAL_MULT(x, y) (long long)((long long)(x)*(long long)(y))
#define RESULT_SHIFT_Q27(x) (int)((x)>>27)
#define IIR_REAL_MULT(x, y) REAL_MULT(x, y)
#define RESULT_SHIFT_IIR(x) RESULT_SHIFT_Q27(x)

#define N		3

typedef struct
{
    real xd[N];
    real_64 yd[N];
    int Order;

} iir_filter_t;

void iir_filter(iir_filter_t* filter, real* x, real* y, real* b/*iir_hf_b[1][][]*/, real* a/*iir_hf_a[1][][]*/, int length);

#endif // _FILTER_H_