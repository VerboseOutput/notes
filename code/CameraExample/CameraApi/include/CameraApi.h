#include <string>

class CameraApi
{
public:
    CameraApi() = default;
    ~CameraApi() { disconnect(); }

    void connect();
    void disconnect();
    bool isConnected();

    void setExposure(int ms);
    int getExposure();

    const std::string getName();

private:
    bool m_connected = false;
    int m_exposure = 0;
    const std::string m_name = "Custom Camera";

    void verifyConnected();
};