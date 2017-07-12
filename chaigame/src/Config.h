#ifndef _CONFIG_H_INCLUDED_
#define _CONFIG_H_INCLUDED_

#include <string>

namespace chaigame {
	struct windowConfig {
		int width = 640;
		int height = 480;
		int bbp = 32;
		std::string title = "ChaiGame";
	};

	struct moduleConfig {
		bool sound = true;
	};

	class Config {
	public:
		Config();
		windowConfig window;
		moduleConfig modules;
	};
}

#endif
