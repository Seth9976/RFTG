// 函数名称: sub_4b2c00
// 虚拟地址: 0x4b2c00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4b2c00()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* i = nullptr
    char const* const var_41c = "N:Tutorial\nO:0:2:0:0:0\nD:This is the tutorial\nR:ACT_EXPLORE_5_0\nR:"
    "ACT_CONSUME_X2\nR:ACT_PRODUCE\nS:Farming World\nS:Jump Point Green\nS:Jump Point Yellow\nS:Mining "
    "Robots\nS:Mining World\nS:Export Duties\nS:Artist Colony\nS:Spice World\nS:Space Port\nS:Destro"
    void* i_6 = nullptr
    int32_t var_418 = 0
    
    while (true)
        void* i_5 = i
        
        while (true)
            char const* const ecx_1 = var_41c
            int32_t edi_1 = 0
            char var_40c
            char* esi_1 = &var_40c
            void* ebx_1 = 1 - ecx_1
            
            do
                i.b = *ecx_1
                
                if (i.b == 0)
                    break
                
                int32_t edx_1
                edx_1.b = i.b == 0xa
                *esi_1 = i.b
                esi_1 = &esi_1[1]
                ecx_1 = &ecx_1[1]
                edi_1 += 1
                
                if (edx_1 != 0)
                    break
                
                i = ebx_1 + ecx_1
            while (i s< 0x400)
            
            if (edi_1 == 0)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return i
            
            char* eax_2 = &var_40c
            *esi_1 = 0
            var_41c = ecx_1
            
            do
                ecx_1.b = *eax_2
                eax_2 = &eax_2[1]
            while (ecx_1.b != 0)
            
            void var_40b
            *(&i_6:3 + eax_2 - &var_40b) = ecx_1.b
            i.b = var_40c
            char var_40a
            char const edx_2
            
            if (i.b != 0 && i.b != 0x23 && sx.d(i.b) - 0x43 u<= 0x10)
                switch (zx.d(*(sx.d(i.b) + 0x4b338d)))
                    case 0
                        void* const ecx_16 = &data_876a80
                        char* eax_34 = &var_40a
                        
                        while (true)
                            edx_2 = *eax_34
                            char temp1_1 = *ecx_16
                            bool c_11 = edx_2 u< temp1_1
                            
                            if (edx_2 == temp1_1)
                                if (edx_2 == 0)
                                    i = nullptr
                                    break
                                
                                edx_2 = eax_34[1]
                                char temp12_1 = *(ecx_16 + 1)
                                c_11 = edx_2 u< temp12_1
                                
                                if (edx_2 == temp12_1)
                                    eax_34 = &eax_34[2]
                                    ecx_16 += 2
                                    
                                    if (edx_2 != 0)
                                        continue
                                    
                                    i = nullptr
                                    break
                            
                            bool c_12 = unimplemented  {sbb eax, eax}
                            i = sbb.d(sbb.d(eax_34, eax_34, c_11), 0xffffffff, c_12)
                            break
                        
                        if (i != 0)
                            char const* const ecx_17 = "RANDOM"
                            char* eax_36 = &var_40a
                            int32_t eax_38
                            
                            while (true)
                                edx_2 = *eax_36
                                char const temp19_1 = *ecx_17
                                bool c_13 = edx_2 u< temp19_1
                                
                                if (edx_2 == temp19_1)
                                    if (edx_2 == 0)
                                        eax_38 = 0
                                        break
                                    
                                    edx_2 = eax_36[1]
                                    char temp28_1 = ecx_17[1]
                                    c_13 = edx_2 u< temp28_1
                                    
                                    if (edx_2 == temp28_1)
                                        eax_36 = &eax_36[2]
                                        ecx_17 = &ecx_17[2]
                                        
                                        if (edx_2 != 0)
                                            continue
                                        
                                        eax_38 = 0
                                        break
                                
                                bool c_14 = unimplemented  {sbb eax, eax}
                                eax_38 = sbb.d(sbb.d(eax_36, eax_36, c_13), 0xffffffff, c_14)
                                break
                            
                            if (eax_38 == 0)
                                void* i_8 = i_6
                                i = i_5 + 1
                                *(i_8 + ((var_418 * 0x148 + i_5) << 2) + 0x544) = 0
                                *(i_8 + (var_418 << 2) + 0x2404) = i
                                break
                            
                            int32_t edi_9 = 0
                            void* esi_14 = &data_2691ca8
                            
                            while (true)
                                char* ecx_19 = *esi_14
                                char* eax_40 = &var_40a
                                
                                while (true)
                                    edx_2 = *eax_40
                                    char temp32_1 = *ecx_19
                                    bool c_15 = edx_2 u< temp32_1
                                    
                                    if (edx_2 == temp32_1)
                                        if (edx_2 == 0)
                                            i = nullptr
                                            break
                                        
                                        edx_2 = eax_40[1]
                                        char temp36_1 = ecx_19[1]
                                        c_15 = edx_2 u< temp36_1
                                        
                                        if (edx_2 == temp36_1)
                                            eax_40 = &eax_40[2]
                                            ecx_19 = &ecx_19[2]
                                            
                                            if (edx_2 != 0)
                                                continue
                                            
                                            i = nullptr
                                            break
                                    
                                    bool c_16 = unimplemented  {sbb eax, eax}
                                    i = sbb.d(sbb.d(eax_40, eax_40, c_15), 0xffffffff, c_16)
                                    break
                                
                                if (i == 0)
                                    void* i_9 = i_6
                                    i = i_5 + 1
                                    *(i_9 + ((var_418 * 0x148 + i_5) << 2) + 0x544) =
                                        edi_9 * 0x128 + &data_2691ca8
                                    i_5 = i
                                    *(i_9 + (var_418 << 2) + 0x2404) = i
                                    break
                                
                                esi_14 += 0x128
                                edi_9 += 1
                                
                                if (esi_14 s>= 0x26a3350)
                                    break
                            
                            if (edi_9 != 0xf1)
                                continue
                            
                            char* var_430_4 = &var_40a
                            sub_5a8559(&data_8b80d0, "Could not find card %s!\n")
                            sub_4c5870("Halt", &data_83f3d3, "..\code\rftg\init.cpp", 0x3b7, 
                                "read_campaign")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        else
                            var_418 += 1
                            i_5 = nullptr
                            continue
                    case 1
                        char* edi_2 = *(i_6 + 0x540)
                        char* eax_16 = edi_2
                        void* edx_5 = &eax_16[1]
                        uint32_t ecx_2
                        
                        do
                            ecx_2.b = *eax_16
                            eax_16 = &eax_16[1]
                        while (ecx_2.b != 0)
                        
                        void* esi_6 = eax_16 - edx_5
                        
                        if (eax_16 != edx_5)
                            esi_6 += 1
                        
                        char* eax_18 = &var_40a
                        
                        do
                            ecx_2.b = *eax_18
                            eax_18 = &eax_18[1]
                        while (ecx_2.b != 0)
                        
                        void var_409
                        int32_t eax_21 = _realloc(edi_2, eax_18 - &var_409 + esi_6 + 1)
                        void* i_10 = i_6
                        *(i_10 + 0x540) = eax_21
                        
                        if (esi_6 + 1 s> 1)
                            void* eax_22 = eax_21 - 1
                            char i_1
                            
                            do
                                i_1 = *(eax_22 + 1)
                                eax_22 += 1
                            while (i_1 != 0)
                            *eax_22 = 0xa
                        
                        char* eax_23 = &var_40a
                        char i_2
                        
                        do
                            i_2 = *eax_23
                            eax_23 = &eax_23[1]
                        while (i_2 != 0)
                        i = eax_23 - &var_40a
                        void* edi_5 = *(i_10 + 0x540) - 1
                        char i_3
                        
                        do
                            i_3 = *(edi_5 + 1)
                            edi_5 += 1
                        while (i_3 != 0)
                        int32_t esi_8
                        int32_t edi_6
                        edi_6, esi_8 = __builtin_memcpy(edi_5, &var_40a, i u>> 2 << 2)
                        __builtin_memcpy(edi_6, esi_8, i & 3)
                        continue
                    case 2
                        *(i_6 + 0x14) = sub_5a82a5(&var_40a, nullptr, 0)
                        continue
                    case 3
                        int32_t ecx_7
                        i, ecx_7 = sub_5a7fbd(&var_40a, " |")
                        
                        if (i == 0)
                            continue
                        else
                            void* i_11 = i_6
                            
                            while (true)
                                char const (* esi_9)[0xb] = data_8c5d24
                                int32_t edi_7 = 0
                                
                                if (esi_9 != 0)
                                    while (true)
                                        void* i_7 = i
                                        
                                        while (true)
                                            ecx_7.b = *i_7
                                            char const temp17_1 = *esi_9
                                            bool c_1 = ecx_7.b u< temp17_1
                                            
                                            if (ecx_7.b == temp17_1)
                                                if (ecx_7.b == 0)
                                                    ecx_7 = 0
                                                    break
                                                
                                                ecx_7.b = *(i_7 + 1)
                                                char const temp26_1 = (*esi_9)[1]
                                                c_1 = ecx_7.b u< temp26_1
                                                
                                                if (ecx_7.b == temp26_1)
                                                    i_7 += 2
                                                    esi_9 = &(*esi_9)[2]
                                                    
                                                    if (ecx_7.b != 0)
                                                        continue
                                                    
                                                    ecx_7 = 0
                                                    break
                                            
                                            bool c_2 = unimplemented  {sbb ecx, ecx}
                                            ecx_7 = sbb.d(sbb.d(ecx_7, ecx_7, c_1), 0xffffffff, c_2)
                                            break
                                        
                                        if (ecx_7 == 0)
                                            *(i_11 + 0x241c) |= 1 << edi_7.b
                                            break
                                        
                                        esi_9 = (&data_8c5d28)[edi_7]
                                        edi_7 += 1
                                        
                                        if (esi_9 == 0)
                                            break
                                
                                if ((&data_8c5d24)[edi_7] == 0)
                                    void* i_4 = i
                                    sub_5a7d4b("Unknown flag '%s'!\n")
                                    sub_4c5870("Halt", &data_83f3d3, "..\code\rftg\init.cpp", 0x341, 
                                        "read_campaign")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                i, ecx_7 = sub_5a7fbd(nullptr, " |")
                                
                                if (i == 0)
                                    break
                            
                            continue
                    case 4
                        int32_t esi_18 = 0
                        
                        while (true)
                            char* eax_45 = &var_40a
                            char* ecx_22 = (&data_8c6758)[esi_18]
                            
                            while (true)
                                edx_2 = *eax_45
                                char temp8_1 = *ecx_22
                                bool c_17 = edx_2 u< temp8_1
                                
                                if (edx_2 == temp8_1)
                                    if (edx_2 == 0)
                                        i = nullptr
                                        break
                                    
                                    edx_2 = eax_45[1]
                                    char temp16_1 = ecx_22[1]
                                    c_17 = edx_2 u< temp16_1
                                    
                                    if (edx_2 == temp16_1)
                                        eax_45 = &eax_45[2]
                                        ecx_22 = &ecx_22[2]
                                        
                                        if (edx_2 != 0)
                                            continue
                                        
                                        i = nullptr
                                        break
                                
                                bool c_18 = unimplemented  {sbb eax, eax}
                                i = sbb.d(sbb.d(eax_45, eax_45, c_17), 0xffffffff, c_18)
                                break
                            
                            if (i == 0)
                                i = i_6
                                *(i + (*(i_6 + 0x2420) << 2) + 0x2424) = esi_18
                                *(i + 0x2420) += 1
                                break
                            
                            esi_18 += 1
                            
                            if (esi_18 s>= 0x14)
                                break
                        
                        if (esi_18 != 0x14)
                            continue
                        
                        char* var_430_5 = &var_40a
                        sub_5a8559(&data_8b80d0, "Could not find goal %s!\n")
                        sub_4c5870("Halt", &data_83f3d3, "..\code\rftg\init.cpp", 0x3dc, 
                            "read_campaign")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    case 5
                        int32_t edx_3 = data_2691ca4
                        int32_t esi_3 = data_2691ca0 + 1
                        data_2691ca0 = esi_3
                        uint32_t esi_4 = esi_3 * 0x2480
                        int32_t eax_4 = _realloc(edx_3, esi_4)
                        data_2691ca4 = eax_4
                        __builtin_memset(esi_4 + eax_4 - 0x7c, 0, 0x20)
                        i_6 = esi_4 + eax_4 - 0x2480
                        i_5 = nullptr
                        var_418 = 0
                        *(esi_4 + eax_4 - 0x1f44) = sub_5a7f6b(&var_40a)
                        *(esi_4 + eax_4 - 0x1f40) = sub_5a7f6b(&data_83f3d3)
                        *(esi_4 + eax_4 - 0x246c) = 0
                        *(esi_4 + eax_4 - 0x2468) = 0
                        *(esi_4 + eax_4 - 0xc) = 0
                        *(esi_4 + eax_4 - 8) = 0
                        *(esi_4 + eax_4 - 4) = 0
                        continue
                    case 6
                        int32_t eax_8 = sub_5a82a5(sub_5a7fbd(&var_40a, U":"), nullptr, 0)
                        int32_t* i_12 = i_6
                        *i_12 = eax_8
                        i_12[1] = sub_5a82a5(sub_5a7fbd(nullptr, U":"), nullptr, 0)
                        i_12[2] = sub_5a82a5(sub_5a7fbd(nullptr, U":"), nullptr, 0)
                        i_12[3] = sub_5a82a5(sub_5a7fbd(nullptr, U":"), nullptr, 0)
                        i_12[4] = sub_5a82a5(sub_5a7fbd(nullptr, U":"), nullptr, 0)
                        continue
                    case 7
                        char* ecx_12 = &var_40a
                        char const* const eax_27 = "ACT_EXPLORE_5_0"
                        int32_t eax_29
                        
                        while (true)
                            edx_2 = *eax_27
                            char temp0_1 = *ecx_12
                            bool c_5 = edx_2 u< temp0_1
                            
                            if (edx_2 == temp0_1)
                                if (edx_2 == 0)
                                    eax_29 = 0
                                    break
                                
                                edx_2 = eax_27[1]
                                char temp11_1 = ecx_12[1]
                                c_5 = edx_2 u< temp11_1
                                
                                if (edx_2 == temp11_1)
                                    eax_27 = &eax_27[2]
                                    ecx_12 = &ecx_12[2]
                                    
                                    if (edx_2 != 0)
                                        continue
                                    
                                    eax_29 = 0
                                    break
                            
                            bool c_6 = unimplemented  {sbb eax, eax}
                            eax_29 = sbb.d(sbb.d(eax_27, eax_27, c_5), 0xffffffff, c_6)
                            break
                        
                        if (eax_29 != 0)
                            char* ecx_13 = &var_40a
                            void* eax_30 = "ACT_CONSUME_X2"
                            
                            while (true)
                                edx_2 = *eax_30
                                char temp18_1 = *ecx_13
                                bool c_7 = edx_2 u< temp18_1
                                
                                if (edx_2 == temp18_1)
                                    if (edx_2 == 0)
                                        i = nullptr
                                        break
                                    
                                    edx_2 = *(eax_30 + 1)
                                    char temp27_1 = ecx_13[1]
                                    c_7 = edx_2 u< temp27_1
                                    
                                    if (edx_2 == temp27_1)
                                        eax_30 += 2
                                        ecx_13 = &ecx_13[2]
                                        
                                        if (edx_2 != 0)
                                            continue
                                        
                                        i = nullptr
                                        break
                                
                                bool c_8 = unimplemented  {sbb eax, eax}
                                i = sbb.d(sbb.d(eax_30, eax_30, c_7), 0xffffffff, c_8)
                                break
                            
                            if (i != 0)
                                char* ecx_15 = &var_40a
                                void* eax_32 = "ACT_PRODUCE"
                                
                                while (true)
                                    edx_2 = *eax_32
                                    char temp29_1 = *ecx_15
                                    bool c_9 = edx_2 u< temp29_1
                                    
                                    if (edx_2 == temp29_1)
                                        if (edx_2 == 0)
                                            i = nullptr
                                            break
                                        
                                        edx_2 = *(eax_32 + 1)
                                        char temp33_1 = ecx_15[1]
                                        c_9 = edx_2 u< temp33_1
                                        
                                        if (edx_2 == temp33_1)
                                            eax_32 += 2
                                            ecx_15 = &ecx_15[2]
                                            
                                            if (edx_2 != 0)
                                                continue
                                            
                                            i = nullptr
                                            break
                                    
                                    bool c_10 = unimplemented  {sbb eax, eax}
                                    i = sbb.d(sbb.d(eax_32, eax_32, c_9), 0xffffffff, c_10)
                                    break
                                
                                if (i != 0)
                                    continue
                                else
                                    *(i_6 + 0x247d) = 1
                                    continue
                            else
                                *(i_6 + 0x247c) = 1
                                continue
                        else
                            *(i_6 + 0x2475) = 1
                            continue
                    case 8
                        int32_t edi_8 = 0
                        void* esi_10 = &data_2691ca8
                        
                        while (true)
                            char* ecx_11 = *esi_10
                            void* eax_24 = &var_40a
                            
                            while (true)
                                edx_2 = *eax_24
                                char temp3_1 = *ecx_11
                                bool c_3 = edx_2 u< temp3_1
                                
                                if (edx_2 == temp3_1)
                                    if (edx_2 == 0)
                                        i = nullptr
                                        break
                                    
                                    edx_2 = *(eax_24 + 1)
                                    char temp15_1 = ecx_11[1]
                                    c_3 = edx_2 u< temp15_1
                                    
                                    if (edx_2 == temp15_1)
                                        eax_24 += 2
                                        ecx_11 = &ecx_11[2]
                                        
                                        if (edx_2 != 0)
                                            continue
                                        
                                        i = nullptr
                                        break
                                
                                bool c_4 = unimplemented  {sbb eax, eax}
                                i = sbb.d(sbb.d(eax_24, eax_24, c_3), 0xffffffff, c_4)
                                break
                            
                            if (i == 0)
                                i = i_6
                                *(i + (*(i + 0x18) << 2) + 0x1c) = edi_8
                                *(i + 0x18) += 1
                                break
                            
                            esi_10 += 0x128
                            edi_8 += 1
                            
                            if (esi_10 s>= 0x26a3350)
                                break
                        
                        if (edi_8 != 0xf1)
                            continue
                        
                        char* var_430_3 = &var_40a
                        sub_5a8559(&data_8b80d0, "Could not find card for custom deck %s!\n")
                        sub_4c5870("Halt", &data_83f3d3, "..\code\rftg\init.cpp", 0x36a, 
                            "read_campaign")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    case 9
                        continue
}
