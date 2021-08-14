#include <CameraApi.h>

#include <stdexcept>

void CameraApi::connect()
{
    m_connected = true;
}

void CameraApi::disconnect()
{
    m_connected = false;
}

bool CameraApi::isConnected()
{
    return m_connected;
}

void CameraApi::setExposure(int ms)
{
    verifyConnected();

    m_exposure = ms;
}

int CameraApi::getExposure()
{
    verifyConnected();

    return m_exposure;
}

const std::string CameraApi::getName()
{
    verifyConnected();

    return m_name;
}

void CameraApi::verifyConnected()
{
    if(!m_connected)
    {
        throw std::runtime_error("tried to set exposure for a camera that's not connected");
    }
}