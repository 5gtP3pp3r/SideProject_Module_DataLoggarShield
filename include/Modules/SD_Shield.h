#pragma once
#include <SD.h>
#include <SPI.h>
#include <Arduino.h>
#include "const.h"

class SD_Shield {
private:
    uint8_t m_CSPin;
public:
    SD_Shield(uint8_t p_CSPin);
    void writeFile(
        const String& p_fileName, 
        const String& p_data
        );
    // Montage en cours. Je vais surement ajouter une classe pour le type de document à sauvegarder et contenu.
    
    String readFile(const String& p_fileName) {
        // Voir comment retourner un fichier complet avec plusieur lignes. Exemple .csv recherche à faire...  
    }
};
