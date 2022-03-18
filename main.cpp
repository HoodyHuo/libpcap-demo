#include <iostream>
#include <pcap/pcap.h>

int main() {
    std::cout << "Hello, World!" << std::endl;
    char ebuf[PCAP_ERRBUF_SIZE];

    int init =  pcap_init(PCAP_CHAR_ENC_UTF_8,ebuf);
    if(init){
        std::cout << "OK!" << std::endl;
    } else{
        std::cout << ebuf << std::endl;
    }
    return 0;
}
