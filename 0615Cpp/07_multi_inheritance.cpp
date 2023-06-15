#include <iostream>

using namespace std;

// 다중 상속 --> 모호성이 생길 수 있음

class USBDevice
{
public:
	// 자식 클래스에선 부모클래스 생성자로 생성자가 만들어지므로 명시해두는게 좋음
	USBDevice() = default;
	USBDevice(int id) : id(id) {}

	auto GetID() const { return id; }
	void PlugAndPlay(){}

private:
	int id;
};

class NetworkDevice
{
public:
	NetworkDevice() = default;
	NetworkDevice(int id) : id(id){}

	auto GetID() const { return id; }
	void Networking(){}

private:
	int id;
};

class USBNetworkDevice : public USBDevice, public NetworkDevice // 다중 상속
{
public:
	USBNetworkDevice(int usbId, int netId)
		: USBDevice(usbId)
		, NetworkDevice(netId)
	{}

	USBNetworkDevice(int id)
		: USBDevice(id)
		, NetworkDevice(id)
	{}
};

int main()
{
	USBNetworkDevice device(1, 2);
	device.PlugAndPlay();
	device.Networking();

	// device.GetID(); 모호성 발생(ambiguous) 그래서..

	cout << device.USBDevice::GetID() << endl;
	cout << device.NetworkDevice::GetID() << endl;

	return 0;
}