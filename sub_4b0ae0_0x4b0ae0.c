// 函数名称: sub_4b0ae0
// 虚拟地址: 0x4b0ae0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4b0ae0(void* arg1 @ esi)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_410 = 0
    int16_t* var_414
    char var_40c[0x404]
    
    if (*(arg1 + 0x458) s> 0)
        int16_t* edi_1 = arg1 + 0x56
        var_414 = edi_1
        int32_t eax_22
        int32_t ecx_8
        
        do
            int32_t i = sx.d(*edi_1)
            int32_t ecx_1 = 0
            char var_418_1 = 0
            
            if (i == 0xffffffff)
            label_4b0b90:
                void var_41c
                sub_49d860(i, 0, arg1, var_410, 0, &edi_1[-0x15], &var_41c, nullptr)
                char eax_4 = *(arg1 + 0x18)
                
                if (eax_4 == 0)
                    if (*(arg1 + 0x459) == eax_4 || var_418_1 != eax_4)
                        int32_t eax_5 = *(edi_1 - 0x2a)
                        char const* const eax_6
                        
                        if (eax_5 s< 0)
                            eax_6 = "(none)"
                        else if (eax_5.b s>= 0)
                            eax_6 = (&data_8c67a8)[eax_5]
                        else
                            eax_6 = (&data_8c67cc)[eax_5 & 0x7f]
                        
                        char const* const var_428_1 = eax_6
                        int32_t var_42c_2 = *(edi_1 - 0x36)
                        sub_5a733b(&var_40c, "%s chooses %s.\n")
                        int32_t eax_9 = *(edi_1 - 0x2a)
                        
                        if (eax_9 == 0 || eax_9.b s< 0)
                            char const* const var_428_3 = "prestige"
                            char (* var_42c_3)[0x404] = &var_40c
                            sub_4c5680("%s (%s)")
                        else
                            sub_4c5680(&var_40c)
                        
                        sub_4578b0(sx.d(*(arg1 + 0x1ec2)), *(edi_1 - 0x2a), var_410)
                    else if (eax_4 == 0)
                        int32_t eax_11 = *(edi_1 - 0x26)
                        char const* const ecx_4
                        
                        if (eax_11 s< 0)
                            ecx_4 = "(none)"
                        else if (eax_11.b s>= 0)
                            ecx_4 = (&data_8c67a8)[eax_11]
                        else
                            ecx_4 = (&data_8c67cc)[eax_11 & 0x7f]
                        
                        int32_t eax_13 = *(edi_1 - 0x2a)
                        char const* const eax_14
                        
                        if (eax_13 s< 0)
                            eax_14 = "(none)"
                        else if (eax_13.b s>= 0)
                            eax_14 = (&data_8c67a8)[eax_13]
                        else
                            eax_14 = (&data_8c67cc)[eax_13 & 0x7f]
                        
                        char const* const var_428_4 = ecx_4
                        char const* const var_42c_4 = eax_14
                        int32_t var_430_2 = *(edi_1 - 0x36)
                        sub_5a733b(&var_40c, "%s chooses %s/%s.\n")
                        int32_t eax_16 = *(edi_1 - 0x2a)
                        int32_t eax_17
                        
                        if (eax_16 != 0 && eax_16.b s>= 0)
                            eax_17 = *(edi_1 - 0x26)
                        
                        if (eax_16 == 0 || eax_16.b s< 0 || eax_17 == 0 || eax_17.b s< 0)
                            char const* const var_428_6 = "prestige"
                            char (* var_42c_5)[0x404] = &var_40c
                            sub_4c5680("%s (%s)")
                        else
                            sub_4c5680(&var_40c)
                        
                        int32_t eax_18 = *(var_414 - 0x26)
                        int32_t edi_2 = sx.d(*(arg1 + 0x1ec2))
                        sub_4578b0(edi_2, *(edi_1 - 0x2a), var_410)
                        sub_4578b0(edi_2, eax_18, var_410)
                        edi_1 = var_414
            else
                do
                    int32_t eax_2 = i * 5
                    
                    if ((*(*(arg1 + (eax_2 << 2) + 0x46c) + 0x10) & 0x40000) != 0)
                        ecx_1 += 1
                    
                    i = sx.d(*(arg1 + (eax_2 << 2) + 0x476))
                while (i != 0xffffffff)
                
                var_418_1 = ecx_1.b
                
                if (ecx_1.b == 0 || *(arg1 + 0x459) != 0)
                    goto label_4b0b90
            
            ecx_8 = sx.d(*(arg1 + 0x458))
            eax_22 = var_410 + 1
            edi_1 = &edi_1[0x5a]
            var_410 = eax_22
            var_414 = edi_1
        while (eax_22 s< ecx_8)
    
    int32_t i_1 = 0
    int32_t result
    
    if (*(arg1 + 0x458) s> 0)
        void* edi_3 = arg1 + 0x2c
        
        do
            *(arg1 + 0x1ec1) = i_1.b
            int32_t j = sx.d(*(edi_3 + 0x2a))
            int32_t ecx_9 = 0
            
            if (j != 0xffffffff)
                do
                    void* eax_23 = arg1 + j * 0x14
                    
                    if ((*(*(eax_23 + 0x46c) + 0x10) & 0x40000) != 0)
                        ecx_9 += 1
                    
                    j = sx.d(*(eax_23 + 0x476))
                while (j != 0xffffffff)
                
                if (ecx_9 != 0)
                    var_414 = 2
                    sub_49d720(arg1, i_1)
                    int16_t** eax_24 = *(edi_3 + 0x9c)
                    int32_t* var_42c_6
                    
                    if (eax_24 s>= *(edi_3 + 0x98))
                        result =
                            (*(*(edi_3 - 4) + 0xc))(arg1, i_1, 0, edi_3, &var_414, 0, 0, 2, 0, 0, 0)
                        
                        if (*(arg1 + 0x1ec3) != 0)
                            goto label_4b147c
                        
                        int32_t eax_25 = *(*(edi_3 - 4) + 0x10)
                        
                        if (eax_25 != 0)
                            eax_25(arg1, i_1, 0)
                        
                        int32_t var_428_7 = 0
                        eax_24 = &var_414
                        var_42c_6 = &var_414
                    else
                        var_42c_6 = &var_414
                    
                    result = sub_49d860(eax_24, 0, arg1, i_1, 0, edi_3, var_42c_6, nullptr)
                    
                    if (*(arg1 + 0x1ec3) != 0)
                        goto label_4b147c
            
            i_1 += 1
            edi_3 += 0xb4
        while (i_1 s< sx.d(*(arg1 + 0x458)))
    
    void* ebx_3 = nullptr
    var_414 = nullptr
    
    if (*(arg1 + 0x458) s> 0)
        void* edi_4 = arg1 + 0x56
        void* var_410_1 = edi_4
        int32_t edx_25
        
        do
            int32_t i_2 = sx.d(*edi_4)
            int32_t ecx_14 = 0
            
            if (i_2 != 0xffffffff)
                do
                    void* eax_26 = arg1 + i_2 * 0x14
                    
                    if ((*(*(eax_26 + 0x46c) + 0x10) & 0x40000) != 0)
                        ecx_14 += 1
                    
                    i_2 = sx.d(*(eax_26 + 0x476))
                while (i_2 != 0xffffffff)
                
                if (ecx_14 != 0 && *(arg1 + 0x18) == 0)
                    if (*(arg1 + 0x459) == 0)
                        int32_t eax_27 = *(edi_4 - 0x2a)
                        char const* const eax_28
                        
                        if (eax_27 s< 0)
                            eax_28 = "(none)"
                        else if (eax_27.b s>= 0)
                            eax_28 = (&data_8c67a8)[eax_27]
                        else
                            eax_28 = (&data_8c67cc)[eax_27 & 0x7f]
                        
                        char const* const var_428_8 = eax_28
                        int32_t var_42c_8 = *(edi_4 - 0x36)
                        sub_5a733b(&var_40c, "%s chooses %s.\n")
                        int32_t eax_31 = *(edi_4 - 0x2a)
                        
                        if (eax_31 == 0 || eax_31.b s< 0)
                            char const* const var_428_10 = "prestige"
                            char (* var_42c_9)[0x404] = &var_40c
                            sub_4c5680("%s (%s)")
                        else
                            sub_4c5680(&var_40c)
                        
                        int32_t ecx_15 = *(edi_4 - 0x2a)
                        void* eax_34 = (ebx_3 + (sx.d(*(arg1 + 0x1ec2)) << 2)) * 0x1c0
                            + *(data_27e7a40 + 0x548) + 0x2c0c0
                        int32_t ecx_16 = ecx_15 & 0x7f
                        uint8_t edx_17 = (ecx_15 u>> 7).b & 1
                        
                        if (ecx_16 u> 9)
                            sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x5cc5, 
                                "LogActionChoice")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        switch (ecx_16)
                            case 0
                                *(eax_34 + 1) = 1
                            case 1
                                *(eax_34 + 0xd) = 1
                                *(eax_34 + 0xf) = edx_17
                            case 2
                                *(eax_34 + 0xe) = 1
                                *(eax_34 + 0xf) = edx_17
                            case 3, 4
                                *(eax_34 + 0x1d) = 1
                                *(eax_34 + 0x1e) = edx_17
                            case 5, 6
                                *(eax_34 + 0x2d) = 1
                                *(eax_34 + 0x2e) = edx_17
                            case 7
                                *(eax_34 + 0x119) = 1
                                *(eax_34 + 0x11a) = edx_17
                            case 8
                                *(eax_34 + 0x125) = 1
                                *(eax_34 + 0x126) = edx_17
                            case 9
                                *(eax_34 + 0x169) = 1
                                *(eax_34 + 0x16a) = edx_17
                    
                    if (*(arg1 + 0x18) == 0 && *(arg1 + 0x459) != 0)
                        int32_t eax_35 = *(edi_4 - 0x26)
                        char const* const ecx_17
                        
                        if (eax_35 s< 0)
                            ecx_17 = "(none)"
                        else if (eax_35.b s>= 0)
                            ecx_17 = (&data_8c67a8)[eax_35]
                        else
                            ecx_17 = (&data_8c67cc)[eax_35 & 0x7f]
                        
                        int32_t eax_37 = *(edi_4 - 0x2a)
                        char const* const eax_38
                        
                        if (eax_37 s< 0)
                            eax_38 = "(none)"
                        else if (eax_37.b s>= 0)
                            eax_38 = (&data_8c67a8)[eax_37]
                        else
                            eax_38 = (&data_8c67cc)[eax_37 & 0x7f]
                        
                        char const* const var_428_11 = ecx_17
                        char const* const var_42c_10 = eax_38
                        int32_t var_430_5 = *(edi_4 - 0x36)
                        sub_5a733b(&var_40c, "%s chooses %s/%s.\n")
                        int32_t eax_41 = *(edi_4 - 0x2a)
                        int32_t eax_42
                        
                        if (eax_41 != 0 && eax_41.b s>= 0)
                            eax_42 = *(edi_4 - 0x26)
                        
                        if (eax_41 == 0 || eax_41.b s< 0 || eax_42 == 0 || eax_42.b s< 0)
                            char const* const var_428_13 = "prestige"
                            char (* var_42c_11)[0x404] = &var_40c
                            sub_4c5680("%s (%s)")
                        else
                            sub_4c5680(&var_40c)
                        
                        int32_t ecx_18 = *(var_410_1 - 0x26)
                        int32_t edi_5 = *(var_410_1 - 0x2a)
                        int32_t ecx_20 = &var_414[sx.d(*(arg1 + 0x1ec2)) * 2] * 0x1c0
                        void* eax_46 = *(data_27e7a40 + 0x548) + ecx_20 + 0x2c0c0
                        int32_t edx_21 = edi_5 & 0x7f
                        uint8_t ebx_5 = (edi_5 u>> 7).b & 1
                        
                        if (edx_21 u> 9)
                            sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x5cc5, 
                                "LogActionChoice")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        switch (edx_21)
                            case 0
                                *(eax_46 + 1) = 1
                            case 1
                                *(eax_46 + 0xd) = 1
                                *(eax_46 + 0xf) = ebx_5
                            case 2
                                *(eax_46 + 0xe) = 1
                                *(eax_46 + 0xf) = ebx_5
                            case 3, 4
                                *(eax_46 + 0x1d) = 1
                                *(eax_46 + 0x1e) = ebx_5
                            case 5, 6
                                *(eax_46 + 0x2d) = 1
                                *(eax_46 + 0x2e) = ebx_5
                            case 7
                                *(eax_46 + 0x119) = 1
                                *(eax_46 + 0x11a) = ebx_5
                            case 8
                                *(eax_46 + 0x125) = 1
                                *(eax_46 + 0x126) = ebx_5
                            case 9
                                *(eax_46 + 0x169) = 1
                                *(eax_46 + 0x16a) = ebx_5
                        
                        void* eax_48 = *(data_27e7a40 + 0x548) + ecx_20 + 0x2c0c0
                        int32_t edx_24 = ecx_18 & 0x7f
                        uint8_t ecx_22 = (ecx_18 u>> 7).b & 1
                        
                        if (edx_24 u> 9)
                            sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x5cc5, 
                                "LogActionChoice")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        switch (edx_24)
                            case 0
                                *(eax_48 + 1) = 1
                            case 1
                                *(eax_48 + 0xd) = 1
                                *(eax_48 + 0xf) = ecx_22
                            case 2
                                *(eax_48 + 0xe) = 1
                                *(eax_48 + 0xf) = ecx_22
                            case 3, 4
                                *(eax_48 + 0x1d) = 1
                                *(eax_48 + 0x1e) = ecx_22
                            case 5, 6
                                *(eax_48 + 0x2d) = 1
                                *(eax_48 + 0x2e) = ecx_22
                            case 7
                                *(eax_48 + 0x119) = 1
                                *(eax_48 + 0x11a) = ecx_22
                            case 8
                                *(eax_48 + 0x125) = 1
                                *(eax_48 + 0x126) = ecx_22
                            case 9
                                *(eax_48 + 0x169) = 1
                                *(eax_48 + 0x16a) = ecx_22
                        
                        edi_4 = var_410_1
            
            edx_25 = sx.d(*(arg1 + 0x458))
            ebx_3 = var_414 + 1
            edi_4 += 0xb4
            var_414 = ebx_3
            var_410_1 = edi_4
        while (ebx_3 s< edx_25)
    
    sub_4b0760(arg1)
    int32_t ebx_7 = 0
    
    while (true)
        result = sx.d(*(arg1 + 0x1ec0))
        *(arg1 + 0x1ec0) = ebx_7.b
        
        if (*(arg1 + ebx_7 + 0x1eb6) != 0)
            if (*(arg1 + 0x18) == 0)
                sub_49b390(sx.d(ebx_7.b))
                int32_t var_428_15 = (&data_8c67f4)[ebx_7]
                sub_5a733b(&var_40c, "--- %s phase ---\n")
                char const* const var_428_16 = "phase"
                char (* var_42c_12)[0x404] = &var_40c
                result = sub_4c5680("%s (%s)")
            
            switch (ebx_7)
                case 0
                    result = sub_49e870(arg1)
                case 1
                    result = sub_49e910(arg1)
                case 3, 4
                    result = sub_4a0580(arg1)
                case 5, 6
                    result = sub_4a7e00(arg1)
                case 7
                    result = sub_4ab8f0(arg1)
                case 9
                    result = sub_4ad800(arg1)
            
            if (*(arg1 + 0x1ec3) != 0)
                break
        
        ebx_7 += 1
        
        if (ebx_7 s> 9)
            bool cond:1_1 = *(arg1 + 0x18) != 0
            *(arg1 + 0x1ec0) = 0xa
            
            if (not(cond:1_1))
                sub_49b390(0xa)
            
            result = sub_4adac0(arg1)
            
            if (*(arg1 + 0x1ec3) == 0)
                sub_49d660(arg1)
                result = sub_4ae980()
                
                if (*(arg1 + 0x1e04) s<= 0)
                    *(arg1 + 0x1ec3) = 1
                
                int32_t i_4 = 0
                
                if (*(arg1 + 0x458) s> 0)
                    int16_t* edx_27 = arg1 + 0x46
                    int32_t i_3
                    
                    do
                        void* eax_55 = *arg1
                        int32_t edi_6 = 0xc
                        
                        if (eax_55 != 0)
                            int32_t eax_56 = *(eax_55 + 0x14)
                            
                            if (eax_56 s> 0)
                                edi_6 = eax_56
                        
                        int32_t j_1 = sx.d(edx_27[8])
                        int32_t ecx_31 = 0
                        
                        if (j_1 != 0xffffffff)
                            do
                                int32_t eax_57 = j_1 * 5
                                
                                if ((*(*(arg1 + (eax_57 << 2) + 0x46c) + 0x10) & 0x10000) != 0)
                                    ecx_31 += 1
                                
                                j_1 = sx.d(*(arg1 + (eax_57 << 2) + 0x476))
                            while (j_1 != 0xffffffff)
                            
                            if (ecx_31 != 0)
                                edi_6 = j_1 + 0xf
                        
                        int32_t j_2
                        int32_t ecx_32
                        
                        if (i_4 s>= 0)
                            j_2 = sx.d(*edx_27)
                            ecx_32 = 0
                        
                        if (i_4 s< 0 || j_2 s< 0xffffffff)
                            sub_49b2a0()
                            noreturn
                        
                        while (j_2 != 0xffffffff)
                            j_2 = sx.d(*(arg1 + ((j_2 * 5 + 0x11d) << 2)))
                            ecx_32 += 1
                        
                        if (ecx_32 s>= edi_6)
                            *(arg1 + 0x1ec3) = 1
                        
                        if (*(edx_27 + 0x5d) s>= 0xf)
                            *(arg1 + 0x1ec3) = 1
                        
                        result = *(edx_27 - 0x16)
                        *(edx_27 - 0x12) = *(edx_27 - 0x1a)
                        *(edx_27 - 0xe) = result
                        i_3 = i_4 + 1
                        edx_27 = &edx_27[0x5a]
                        i_4 = i_3
                    while (i_3 s< sx.d(*(arg1 + 0x458)))
                
                if (*(arg1 + 0x1ec2) s>= 0x1e)
                    *(arg1 + 0x1ec3) = 1
            
            break
    
    label_4b147c:
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
