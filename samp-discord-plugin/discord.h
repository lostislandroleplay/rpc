#pragma once

#include "discord-rpc\discord_rpc.h"
#include <ctime>
#include <string>

namespace Discord
{
	void initialize();
	void update(const time_t time, const char* state, const char* details, const char* image, const char* imageDetails, const char* infoDetails, const char* button1Label, const char* button1Url, const char* button2Label, const char* button2Url);
	inline void update(const time_t time, const std::string& state, const std::string& details, const std::string& image, const std::string& imageDetails, const std::string& infoDetails, const std::string& button1Label, const std::string& button1Url, const std::string& button2Label, const std::string&button2Url)
	{
		return update(time, state.c_str(), details.c_str(), image.c_str(), imageDetails.c_str(), infoDetails.c_str(), button1Label.c_str(), button1Url.c_str(), button2Label.c_str(), button2Url.c_str());
	}
}
