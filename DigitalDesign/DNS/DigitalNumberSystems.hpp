# ifndef Q_DDCSAS_DIGITAL_NUMBER_SYSTEMS
    /**
     * @file DigitalNumberSystems.hpp
     * @author Ramtin Kosari (ramtinkosari@gmail.com)
     * @brief Q-DDCSAS Digital Number System Header
     * @note Currently Supports These Number Systems
     * @note 1- Binary
     * @note 2- Octal
     * @note 3- Decimal
     * @note 4- Hexadecimal
     * @date 2023-10-24
     */
    # define Q_DDCSAS_DIGITAL_NUMBER_SYSTEMS
    //-- Inclue Binary Number System
    # ifndef Q_DDCSAS_BINARY
        # include "Binary.hpp"
    # endif // Q_DDCSAS_BINARY
    //-- Include Octal Number System
    # ifndef Q_DDCSAS_OCTAL
        # include "Octal.hpp"
    # endif // Q_DDCSAS_OCTAL
    //-- Include Decimal Number System
    # ifndef Q_DDCSAS_DECIMAL
        # include "Decimal.hpp"
    # endif // Q_DDCSAS_DECIMAL
    //-- Include Hexadecimal Number System
    # ifndef Q_DDCSAS_HEXADECIMAL
        # include "Hexadecimal.hpp"
    # endif // Q_DDCSAS_HEXADECIMAL
# endif // Q_DDCSAS_DIGITAL_NUMBER_SYSTEMS