/*
 * Half-band filter coefficients with 100 dB stop band attenuation.
 *
 * Copyright 2015  Alexandru Csete OZ9AEC
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */
#pragma once

#include "common/datatypes.h"

// Normalized 100 dB alias free bandwidths
#define HBF_100_11_BW       0.10f
#define HBF_100_19_BW       0.20f
#define HBF_100_59_BW       0.40f

/*
 * Discrete-Time FIR Filter (real)
 * -------------------------------
 * Filter Structure  : Direct-Form FIR
 * Filter Length     : 11
 * Stable            : Yes
 * Linear Phase      : Yes (Type 1)
 * Alias free BW     : 0.1
 * Passband ripple   : +/- 4e-5 dB
 * Stop band         : -106 dB
 */
#define HBF_100_11_LENGTH        11
const real_t HBF_100_11[HBF_100_11_LENGTH] =
{
    0.006633419280515,
    0.0,
    -0.05103572995383,
    0.0,
    0.2944047777616,
    0.5,
    0.2944047777616,
    0.0,
    -0.05103572995383,
    0.0,
    0.006633419280515
};

/*
 * Discrete-Time FIR Filter (real)
 * -------------------------------
 * Filter Structure  : Direct-Form FIR
 * Filter Length     : 19
 * Stable            : Yes
 * Linear Phase      : Yes (Type 1)
 * Alias free BW     : 0.2
 * Passband ripple   : +/- 3e-5 dB
 * Stop band         : -110 dB
 */
#define HBF_100_19_LENGTH    19
const real_t HBF_100_19[HBF_100_19_LENGTH] =
{
    0.0006617102188732,
    0.0,
    -0.005279598620593,
    0.0,
    0.02264160210385,
    0.0,
    -0.07405775919395,
    0.0,
    0.3060356661387,
    0.5,
    0.3060356661387,
    0.0,
    -0.07405775919395,
    0.0,
    0.02264160210385,
    0.0,
    -0.005279598620593,
    0.0,
    0.0006617102188732
};

/*
 * Discrete-Time FIR Filter (real)
 * -------------------------------
 * Filter Structure  : Direct-Form FIR
 * Filter Length     : 59
 * Stable            : Yes
 * Linear Phase      : Yes (Type 1)
 * Alias free BW     : 0.4
 * Passband ripple   : +/- 1e-4 dB
 * Stop band         : -99 dB
 */
#define HBF_100_59_LENGTH    59
const real_t HBF_100_59[HBF_100_59_LENGTH] =
{
    3.501888525991e-005,
    0.0,
    -0.0001214332078977,
    0.0,
    0.000317104911172,
    0.0,
    -0.0006982363724448,
    0.0,
    0.001372073862195,
    0.0,
    -0.002480664366365,
    0.0,
    0.004207318621822,
    0.0,
    -0.006789354746327,
    0.0,
    0.01054794795195,
    0.0,
    -0.01596102646845,
    0.0,
    0.02384893442861,
    0.0,
    -0.03589869172827,
    0.0,
    0.05646939759171,
    0.0,
    -0.1016387706686,
    0.0,
    0.3167960996293,
    0.5,
    0.3167960996293,
    0.0,
    -0.1016387706686,
    0.0,
    0.05646939759171,
    0.0,
    -0.03589869172827,
    0.0,
    0.02384893442861,
    0.0,
    -0.01596102646845,
    0.0,
    0.01054794795195,
    0.0,
    -0.006789354746327,
    0.0,
    0.004207318621822,
    0.0,
    -0.002480664366365,
    0.0,
    0.001372073862195,
    0.0,
    -0.0006982363724448,
    0.0,
    0.000317104911172,
    0.0,
    -0.0001214332078977,
    0.0,
    3.501888525991e-005
};
