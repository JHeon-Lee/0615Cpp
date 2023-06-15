#include <iostream>

using namespace std;

// ���� ��� --> ��ȣ���� ���� �� ����

class USBDevice
{
public:
	// �ڽ� Ŭ�������� �θ�Ŭ���� �����ڷ� �����ڰ� ��������Ƿ� ����صδ°� ����
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

class USBNetworkDevice : public USBDevice, public NetworkDevice // ���� ���
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

	// device.GetID(); ��ȣ�� �߻�(ambiguous) �׷���..

	cout << device.USBDevice::GetID() << endl;
	cout << device.NetworkDevice::GetID() << endl;

	return 0;
}