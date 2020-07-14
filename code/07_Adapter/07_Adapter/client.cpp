#include "HeadsetJack.h"
#include "TypecJackAdapter.h"

class Mi8Phone {
public:
	void setJack(TypecJack* jack) {
		this->m_jack = jack;
	}
	void playSound() {
		if (m_jack) {
			m_jack->outputtypec();
		}
	}
private:
	TypecJack* m_jack = nullptr;
};

class OldHeadSet {
public:
	void setJack(TraditionJack* jack) {
		this->m_jack = jack;
	}
	void listenSound() {
		if (m_jack) {
			m_jack->output35mm();
		}
	}
private:
	TraditionJack* m_jack = nullptr;
};

int main() {
	TypecJackAdapter* adapterJack = new TypecJackAdapter();

	Mi8Phone phone;
	OldHeadSet headset;

	phone.setJack(adapterJack);
	headset.setJack(adapterJack);
	phone.playSound();
	headset.listenSound();
	return 0;
}