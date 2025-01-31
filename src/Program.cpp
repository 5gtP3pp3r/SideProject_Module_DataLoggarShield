#include "Program.h"
int loopTime = 0;
Program::Program() 
  : 
    m_SD(nullptr),
    m_clock(nullptr),
    m_CSV_Logger(nullptr)
     {
    this->m_clock = new DS1307Clock(); 
    this->m_SD = new SD_Shield();
    this->m_CSV_Logger = new CSV_TelemetryLogger(m_SD, m_clock );   
    this->m_CSV_Logger->init(); 

    
}

void Program::loop() {
    while (loopTime < 11) {
        delay(2000);
        String time = m_clock->getActualDateTime();
        this->m_CSV_Logger->logData(time);
        ++loopTime;
    }
}