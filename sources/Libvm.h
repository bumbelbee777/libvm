#pragma once

#include <cstddef>

using namespace std;

namespace libvm {
    namespace CPU {
        void SetDreg1Data(uint8_t Value);
        void SetDreg2Data(uint8_t Value);
        void GetDreg1Data(void);
        void GetDreg2Data(void);
        void StartCPU(uint8_t RamSize);
        void HaltCPU(void);
    }

    namespace Flags {
        void DebugPrint(string Message);
    }

    namespace RAM {
       uint8_t ReadIndex(uint8_t Index); 
    }
}