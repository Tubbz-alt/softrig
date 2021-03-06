/*
 * SDR device I/O base class
 *
 * This file is part of softrig, a simple software defined radio transceiver.
 *
 * Copyright 2018-2019 Alexandru Csete OZ9AEC
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
 */
#include <QString>

#include "sdr_device.h"

SdrDevice *sdr_device_create_rtlsdr(void);
SdrDevice *sdr_device_create_airspy(void);
SdrDevice *sdr_device_create_airspymini(void);
SdrDevice *sdr_device_create_bladerf(void);
SdrDevice *sdr_device_create_limesdr(void);
SdrDevice *sdr_device_create_sdrplay(void);

SdrDevice *sdr_device_create(const QString &device_type)
{
    if (QString::compare(device_type, "rtlsdr", Qt::CaseInsensitive) == 0)
        return sdr_device_create_rtlsdr();
    else if (QString::compare(device_type, "airspy", Qt::CaseInsensitive) == 0)
        return sdr_device_create_airspy();
    else if (QString::compare(device_type, "airspymini", Qt::CaseInsensitive) == 0)
        return sdr_device_create_airspymini();
    else if (QString::compare(device_type, "bladerf", Qt::CaseInsensitive) == 0)
        return sdr_device_create_bladerf();
    else if (QString::compare(device_type, "limesdr", Qt::CaseInsensitive) == 0)
        return sdr_device_create_limesdr();
    else if (QString::compare(device_type, "sdrplay", Qt::CaseInsensitive) == 0)
        return sdr_device_create_sdrplay();

    return nullptr;
}

SdrDevice::SdrDevice(QObject *parent) : QObject(parent)
{

}

int SdrDevice::startRx(void)
{
    return SDR_DEVICE_ENOTAVAIL;
}

int SdrDevice::stopRx(void)
{
    return SDR_DEVICE_ENOTAVAIL;
}

quint32 SdrDevice::getRxSamples(complex_t * buffer, quint32 count)
{
    Q_UNUSED(buffer);
    Q_UNUSED(count);
    return 0;
}

QWidget *SdrDevice::getRxControls(void)
{
    return nullptr;
}

int SdrDevice::setRxFrequency(quint64 freq)
{
    Q_UNUSED(freq);
    return SDR_DEVICE_ENOTAVAIL;
}

int SdrDevice::setRxSampleRate(quint32 rate)
{
    Q_UNUSED(rate);
    return SDR_DEVICE_ENOTAVAIL;
}

int SdrDevice::setRxBandwidth(quint32 bw)
{
    Q_UNUSED(bw);
    return SDR_DEVICE_ENOTAVAIL;
}

void SdrDevice::clearStatus(sdr_device_status_t &status)
{
    status.driver_is_loaded = false;
    status.device_is_open = false;
    status.rx_is_running = false;
}

void SdrDevice::clearStats(sdr_device_stats_t &stats)
{
    stats.rx_samples = 0;
    stats.rx_overruns = 0;
}
