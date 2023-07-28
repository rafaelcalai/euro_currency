//
// Created by rcala on 28-07-2023.
//

#include "../include/currency_ratio.h"

CurrencyRatio::CurrencyRatio() {
    curl = curl_easy_init();
    if(curl)
    {
        download_xml();
    }
    else
    {
        std::cout << "Unable to start an section with curl!" << std::endl;
    }
}

void CurrencyRatio::download_xml() {
    o_file = fopen(file_name, "wb");
    if(o_file)
    {
        curl_easy_setopt(curl, CURLOPT_URL, url);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, o_file);
        curl_easy_perform(curl);
        fclose(o_file);
    }
    else
    {
        std::cout << "Unable to open the file" << std::endl;
    }
}

void CurrencyRatio::read_currency_from_xml()
{
    doc.LoadFile(file_name);
    TiXmlElement *root = doc.FirstChildElement();

}
