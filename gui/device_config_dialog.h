/*
 * SDR device configuration dialog
 */
#pragma once

#include <QDialog>

#include "app/app_config.h"

namespace Ui {
class DeviceConfigDialog;
}

class DeviceConfigDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DeviceConfigDialog(QWidget *parent = nullptr);
    ~DeviceConfigDialog();

    void    readSettings(const device_config_t * input);
    void    saveSettings(device_config_t * input);

private slots:
    void    sdrTypeChanged(int);
    void    inputRateChanged(const QString &);
    void    decimationChanged(int);

private:
    void    selectSdrType(const QString &);
    void    selectSampleRate(unsigned int);
    void    selectDecimation(unsigned int);
    void    setBandwidth(quint32 bw);

private:
    Ui::DeviceConfigDialog *ui;
};
