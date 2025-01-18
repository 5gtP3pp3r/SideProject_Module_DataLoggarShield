#pragma once
#include <SD.h>
#include <SPI.h>
#include <Arduino.h>
#include "const.h"

class SD_Shield {
private:
    File m_dataFile;
public:
    SD_Shield();
    void writeFile(String p_fileName, String p_datas);
    // Montage en cours. Je vais surement ajouter une classe pour le type de document à sauvegarder et contenu.
    // Voir comment retourner un fichier complet avec plusieur lignes. Exemple .csv recherche à faire...  
};