#include <iostream>

using namespace std;

/*

  ��� ���� ������      �θ� Ŭ����         �ڽ�Ŭ����
   public             public             public
                      protected          protected
                      private            ���� �Ұ�

   protected          public             protected
                      protected          protected
                      private            ���� �Ұ�

   private            public             private
                      protected          private
                      private            ���� �Ұ�

*/

class Base
{
public:
    void Test() {};
    int publicData;

protected:
    int protectedData;

private:
    int privateData;
};

class Derived : private Base
{
public:
    Derived()
    {
        Test();
        publicData;
        protectedData;
        //privateData; �Ұ�
    }
};

class A : public Derived
{
public:
    A()
    {
        //Test();
        //publicData;
        //protectedData; ��� �Ұ� --> private Base �� �켱�õǼ�
    }
};

int main()
{
    Base base;
    base.publicData;
    
    A a;
    // a. --> �ƹ��͵� �ȶ�

	return 0;
}