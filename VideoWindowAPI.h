#include <string>
#include <sstream>
#include "JSAPIAuto.h"
#include "BrowserHostWrapper.h"
#include "linphone.h"
#include "types.h"
#include <stdio.h>

#ifndef H_VideoWindowAPI
#define H_VideoWindowAPI


class VideoWindowAPI : public FB::JSAPIAuto
{
public:
    VideoWindowAPI(const linphonePtr& plugin, const FB::BrowserHostPtr& host);
    virtual ~VideoWindowAPI();

    linphonePtr getPlugin();

    // Exported methods
    bool call_test(std::string uri);
    unsigned long get_pluginWindowId(void);

    // Property manipulation methods
    std::string get_x(void);
    void set_x(std::string);

private:
    linphoneWeakPtr m_plugin;
    FB::BrowserHostPtr m_host;
    std::string _x;

};

#endif // H_VideoWindowAPI

