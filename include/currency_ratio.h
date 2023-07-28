//
// Created by rcala on 28-07-2023.
//

#ifndef EURO_CURRENCY_CURRENCY_RATIO_H
#define EURO_CURRENCY_CURRENCY_RATIO_H

#include <curl/curl.h>
#include <tinyxml.h>
#include <iostream>


class CurrencyRatio{
private:
    const char *url = "https://www.ecb.europa.eu/stats/eurofxref/eurofxref-daily.xml";
    const char *file_name =  basename((char*)url);
    CURL *curl;
    FILE *o_file;
    TiXmlDocument doc;
public:
    CurrencyRatio();
    void download_xml();
    void read_currency_from_xml();
};


#endif //EURO_CURRENCY_CURRENCY_RATIO_H
