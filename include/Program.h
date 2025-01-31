#include "CSV_TelemetryLogger.h"
#include "Modules/SD_Shield.h"
#include "Modules/DS1307Clock.h"

class Program {
private:
    DS1307Clock* m_clock;
    SD_Shield* m_SD;
    CSV_TelemetryLogger* m_CSV_Logger;
public:
    Program();
    void loop();
};



// Rien de spécifié pour l'instant, Je veux assembler les modules ADXL345 et mon SD_Shield. Les borniers ne sont pas soudés ;)
// À ajouter à ce Program de test: l'objet BMP280Sensor pour tester l'éciture de données dans un .csv d'une carte SD
