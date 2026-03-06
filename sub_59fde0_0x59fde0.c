// 函数名称: sub_59fde0
// 虚拟地址: 0x59fde0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float* __convention("regparm")sub_59fde0(int32_t arg1, int32_t* arg2, int32_t* arg3, void* arg4, int32_t* arg5)
{
    // 第一条实际指令: uint32_t j_4
    uint32_t j_4
    int32_t eax_1 = __security_cookie ^ &j_4
    void* esi = arg4
    void* var_414 = esi
    int32_t ebx = 0
    char const* const edi = "#?RADIANCE"
    void var_410
    char* eax_3 = sub_59fb10(esi, &var_410)
    int32_t eax_5
    
    while (true)
        char ecx = *eax_3
        char const temp0_1 = *edi
        bool c_1 = ecx u< temp0_1
        
        if (ecx == temp0_1)
            if (ecx == 0)
                eax_5 = 0
                break
            
            ecx = eax_3[1]
            char temp3_1 = edi[1]
            c_1 = ecx u< temp3_1
            
            if (ecx == temp3_1)
                eax_3 = &eax_3[2]
                edi = &edi[2]
                
                if (ecx != 0)
                    continue
                
                eax_5 = 0
                break
        
        bool c_2 = unimplemented  {sbb eax, eax}
        eax_5 = sbb.d(sbb.d(eax_3, eax_3, c_1), 0xffffffff, c_2)
        break
    
    if (eax_5 != 0)
        data_273ac1c = "not HDR"
        sub_5a6aba(eax_1 ^ &j_4)
        return 0
    
    char* eax_7 = sub_59fb10(esi, &var_410)
    char* var_43c = eax_7
    
    if (*eax_7 != 0)
        while (true)
            char const* const ecx_3 = "FORMAT=32-bit_rle_rgbe"
            int32_t eax_9
            
            while (true)
                char edx = *eax_7
                char const temp4_1 = *ecx_3
                bool c_3 = edx u< temp4_1
                
                if (edx == temp4_1)
                    if (edx == 0)
                        eax_9 = 0
                        break
                    
                    edx = eax_7[1]
                    char temp7_1 = ecx_3[1]
                    c_3 = edx u< temp7_1
                    
                    if (edx == temp7_1)
                        eax_7 = &eax_7[2]
                        ecx_3 = &ecx_3[2]
                        
                        if (edx != 0)
                            continue
                        
                        eax_9 = 0
                        break
                
                bool c_4 = unimplemented  {sbb eax, eax}
                eax_9 = sbb.d(sbb.d(eax_7, eax_7, c_3), 0xffffffff, c_4)
                break
            
            if (eax_9 == 0)
                ebx = eax_9 + 1
            
            eax_7 = sub_59fb10(esi, &var_410)
            var_43c = eax_7
            
            if (*eax_7 == 0)
                break
        
        if (ebx != 0)
            char* eax_11 = sub_59fb10(esi, &var_410)
            var_43c = eax_11
            
            if (sub_5a7934(eax_11, "-Y ", 3) == 0)
                void* eax_15 = &var_43c[3]
                var_43c = eax_15
                int32_t eax_16 = sub_5a82a5(eax_15, &var_43c, 0xa)
                char* eax_17 = var_43c
                
                while (*eax_17 == 0x20)
                    eax_17 = &eax_17[1]
                    var_43c = eax_17
                
                if (sub_5a7934(eax_17, "+X ", 3) == 0)
                    void* eax_20 = &var_43c[3]
                    var_43c = eax_20
                    int32_t i_5 = sub_5a82a5(eax_20, nullptr, 0xa)
                    *arg5 = i_5
                    *arg3 = eax_16
                    int32_t ebx_1 = 3
                    int32_t i_4 = i_5
                    *arg2 = 3
                    int32_t var_41c_1 = 3
                    float* result = sub_5a881a(i_5 * eax_16 * 0xc)
                    int128_t* var_440
                    int128_t* edx_17
                    
                    if (i_5 - 8 u> 0x7ff7)
                        var_440 = nullptr
                    label_5a05a0:
                        edx_17 = var_440
                        
                        if (edx_17 s< eax_16)
                            j_4 = 0
                            goto label_5a05b6
                    else
                        char* var_434_1 = nullptr
                        var_440 = nullptr
                        
                        if (eax_16 s> 0)
                            int32_t var_418 = i_5 * 0xc
                            float* result_1 = result
                            
                            while (true)
                                char* eax_31 = *(esi + 0xa8)
                                int32_t j_3
                                
                                if (eax_31 u< *(esi + 0xac))
                                    j_3.b = *eax_31
                                    *(esi + 0xa8) = &eax_31[1]
                                    j_4 = zx.d(j_3.b)
                                else if (*(esi + 0x20) == 0)
                                    j_4 = 0
                                else
                                    int32_t eax_35 =
                                        (*(esi + 0x10))(*(esi + 0x1c), esi + 0x28, *(esi + 0x24))
                                    
                                    if (eax_35 != 0)
                                        *(esi + 0xa8) = esi + 0x28
                                        *(esi + 0xac) = esi + 0x28 + eax_35
                                    else
                                        char* eax_37 = *(esi + 0xac) - 1
                                        *(esi + 0x20) = 0
                                        *(esi + 0xa8) = eax_37
                                        *eax_37 = 0
                                    
                                    char* eax_38 = *(esi + 0xa8)
                                    j_3 = zx.d(*eax_38)
                                    *(esi + 0xa8) = &eax_38[1]
                                    j_4 = j_3
                                
                                char* eax_40 = *(esi + 0xa8)
                                uint32_t var_438_1
                                uint32_t ebx_2
                                
                                if (eax_40 u>= *(esi + 0xac))
                                    ebx_2 = 0
                                    
                                    if (*(esi + 0x20) == 0)
                                        var_438_1 = 0
                                    else
                                        int32_t eax_43
                                        eax_43, j_3 =
                                            (*(esi + 0x10))(*(esi + 0x1c), esi + 0x28, *(esi + 0x24))
                                        
                                        if (eax_43 != 0)
                                            *(esi + 0xa8) = esi + 0x28
                                            *(esi + 0xac) = esi + 0x28 + eax_43
                                        else
                                            char* eax_45 = *(esi + 0xac) - 1
                                            *(esi + 0x20) = 0
                                            *(esi + 0xa8) = eax_45
                                            *eax_45 = 0
                                        
                                        char* eax_46 = *(esi + 0xa8)
                                        j_3.b = *eax_46
                                        *(esi + 0xa8) = &eax_46[1]
                                        var_438_1 = zx.d(j_3.b)
                                else
                                    j_3.b = *eax_40
                                    *(esi + 0xa8) = &eax_40[1]
                                    var_438_1 = zx.d(j_3.b)
                                    ebx_2 = 0
                                
                                char* eax_53 = *(esi + 0xa8)
                                
                                if (eax_53 u< *(esi + 0xac))
                                label_5a0170:
                                    j_3.b = *eax_53
                                    ebx_2 = zx.d(j_3.b)
                                    *(esi + 0xa8) = &eax_53[1]
                                else if (*(esi + 0x20) != 0)
                                    int32_t eax_50
                                    eax_50, j_3 =
                                        (*(esi + 0x10))(*(esi + 0x1c), esi + 0x28, *(esi + 0x24))
                                    
                                    if (eax_50 != 0)
                                        *(esi + 0xa8) = esi + 0x28
                                        *(esi + 0xac) = esi + 0x28 + eax_50
                                    else
                                        char* eax_52 = *(esi + 0xac) - 1
                                        *(esi + 0x20) = 0
                                        *(esi + 0xa8) = eax_52
                                        *eax_52 = 0
                                    
                                    eax_53 = *(esi + 0xa8)
                                    goto label_5a0170
                                
                                uint32_t j_6 = j_4
                                
                                if (j_6 != 2 || var_438_1 != j_6 || ebx_2.b s< 0)
                                    j_3.b = var_438_1.b
                                    var_440.b = j_6.b
                                    char* eax_98 = *(esi + 0xa8)
                                    var_440:1.b = j_3.b
                                    var_440:2.b = ebx_2.b
                                    char eax_100
                                    
                                    if (eax_98 u< *(esi + 0xac))
                                        j_3.b = *eax_98
                                        *(esi + 0xa8) = &eax_98[1]
                                        eax_100 = j_3.b
                                    else if (*(esi + 0x20) == 0)
                                        eax_100 = 0
                                    else
                                        int32_t eax_102 =
                                            (*(esi + 0x10))(*(esi + 0x1c), esi + 0x28, *(esi + 0x24))
                                        
                                        if (eax_102 != 0)
                                            *(esi + 0xa8) = esi + 0x28
                                            *(esi + 0xac) = esi + eax_102 + 0x28
                                        else
                                            *(esi + 0x20) = eax_102
                                            char* eax_104 = *(esi + 0xac) - 1
                                            *(esi + 0xa8) = eax_104
                                            *eax_104 = 0
                                        
                                        char* eax_105 = *(esi + 0xa8)
                                        char ecx_25 = *eax_105
                                        *(esi + 0xa8) = &eax_105[1]
                                        eax_100 = ecx_25
                                    
                                    ebx_1 = 3
                                    var_440:3.b = eax_100
                                    sub_59fcf0(&var_440, result)
                                    j_4 = 1
                                    var_440 = nullptr
                                    edx_17 = __free_base(var_434_1)
                                    esi = var_414
                                    
                                    do
                                        int32_t* var_454_18 = &var_418
                                        sub_595930(4, esi, edx_17)
                                        edx_17 =
                                            sub_59fcf0(&var_418, &result[(var_440 * i_4 + j_4) * ebx_1])
                                        j_4 += 1
                                        ebx_1 = var_41c_1
                                        esi = var_414
                                        i_5 = i_4
                                    label_5a05b6:
                                    while (j_4 s< i_5)
                                    
                                    var_440 += 1
                                    break
                                
                                char* eax_55 = *(esi + 0xa8)
                                uint32_t eax_57
                                
                                if (eax_55 u< *(esi + 0xac))
                                    j_3.b = *eax_55
                                    *(esi + 0xa8) = &eax_55[1]
                                    eax_57 = zx.d(j_3.b)
                                else if (*(esi + 0x20) == 0)
                                    eax_57 = 0
                                else
                                    int32_t eax_59
                                    eax_59, j_3 =
                                        (*(esi + 0x10))(*(esi + 0x1c), esi + 0x28, *(esi + 0x24))
                                    
                                    if (eax_59 != 0)
                                        *(esi + 0xa8) = esi + 0x28
                                        *(esi + 0xac) = esi + 0x28 + eax_59
                                    else
                                        *(esi + 0x20) = eax_59
                                        char* eax_61 = *(esi + 0xac) - 1
                                        *(esi + 0xa8) = eax_61
                                        *eax_61 = 0
                                    
                                    char* eax_62 = *(esi + 0xa8)
                                    j_3.b = *eax_62
                                    *(esi + 0xa8) = &eax_62[1]
                                    eax_57 = zx.d(j_3.b)
                                
                                int32_t i_6 = i_4
                                
                                if ((eax_57 | ebx_2 << 8) != i_6)
                                    __free_base(result)
                                    __free_base(var_434_1)
                                    data_273ac1c = "invalid decoded scanline length"
                                    sub_5a6aba(eax_1 ^ &j_4)
                                    return 0
                                
                                if (var_434_1 == 0)
                                    char* eax_65
                                    eax_65, j_3 = sub_5a881a(i_6 << 2)
                                    var_434_1 = eax_65
                                
                                int32_t i_2 = 0
                                int32_t i
                                
                                do
                                    j_4 = 0
                                    
                                    if (i_6 s> 0)
                                        do
                                            char* eax_70 = *(esi + 0xa8)
                                            char j_8
                                            
                                            if (eax_70 u< *(esi + 0xac))
                                            label_5a02a7:
                                                j_3.b = *eax_70
                                                j_8 = j_3.b
                                                *(esi + 0xa8) = &eax_70[1]
                                                
                                                if (j_8 u<= 0x80)
                                                    goto label_5a02d3
                                                
                                                char edx_10
                                                
                                                if (&eax_70[1] u< *(esi + 0xac))
                                                    j_3.b = eax_70[1]
                                                    *(esi + 0xa8) = &eax_70[2]
                                                    edx_10 = j_3.b
                                                else if (*(esi + 0x20) == 0)
                                                    edx_10 = 0
                                                else
                                                    int32_t eax_77 = (*(esi + 0x10))(*(esi + 0x1c), 
                                                        esi + 0x28, *(esi + 0x24))
                                                    
                                                    if (eax_77 != 0)
                                                        *(esi + 0xa8) = esi + 0x28
                                                        *(esi + 0xac) = esi + 0x28 + eax_77
                                                    else
                                                        *(esi + 0x20) = eax_77
                                                        char* eax_79 = *(esi + 0xac) - 1
                                                        *(esi + 0xa8) = eax_79
                                                        *eax_79 = 0
                                                    
                                                    char* eax_80 = *(esi + 0xa8)
                                                    char ecx_17 = *eax_80
                                                    *(esi + 0xa8) = &eax_80[1]
                                                    edx_10 = ecx_17
                                                
                                                j_3 = zx.d(j_8 + 0x80)
                                                
                                                if (j_3 s> 0)
                                                    uint32_t j_9 = j_4
                                                    char* eax_84 = i_2 + (j_9 << 2) + var_434_1
                                                    j_4 = j_9 + j_3
                                                    int32_t j
                                                    
                                                    do
                                                        *eax_84 = edx_10
                                                        eax_84 = &eax_84[4]
                                                        j = j_3
                                                        j_3 -= 1
                                                    while (j != 1)
                                            else
                                                if (*(esi + 0x20) != 0)
                                                    int32_t eax_67
                                                    eax_67, j_3 = (*(esi + 0x10))(*(esi + 0x1c), 
                                                        esi + 0x28, *(esi + 0x24))
                                                    
                                                    if (eax_67 != 0)
                                                        *(esi + 0xa8) = esi + 0x28
                                                        *(esi + 0xac) = esi + 0x28 + eax_67
                                                    else
                                                        *(esi + 0x20) = eax_67
                                                        char* eax_69 = *(esi + 0xac) - 1
                                                        *(esi + 0xa8) = eax_69
                                                        *eax_69 = 0
                                                    
                                                    eax_70 = *(esi + 0xa8)
                                                    goto label_5a02a7
                                                
                                                j_8 = 0
                                            label_5a02d3:
                                                uint32_t j_5 = zx.d(j_8)
                                                
                                                if (j_5 s> 0)
                                                    uint32_t j_7 = j_4
                                                    void* ebx_5 = i_2 + (j_7 << 2) + var_434_1
                                                    uint32_t j_2 = j_5
                                                    j_4 = j_7 + j_5
                                                    uint32_t j_1
                                                    
                                                    do
                                                        char* eax_73 = *(esi + 0xa8)
                                                        char eax_75
                                                        
                                                        if (eax_73 u< *(esi + 0xac))
                                                            j_3.b = *eax_73
                                                            *(esi + 0xa8) = &eax_73[1]
                                                            eax_75 = j_3.b
                                                        else if (*(esi + 0x20) == 0)
                                                            eax_75 = 0
                                                        else
                                                            int32_t eax_86
                                                            eax_86, j_3 = (*(esi + 0x10))(
                                                                *(esi + 0x1c), esi + 0x28, 
                                                                *(esi + 0x24))
                                                            
                                                            if (eax_86 != 0)
                                                                *(esi + 0xa8) = esi + 0x28
                                                                *(esi + 0xac) = esi + 0x28 + eax_86
                                                            else
                                                                *(esi + 0x20) = eax_86
                                                                char* eax_88 = *(esi + 0xac) - 1
                                                                *(esi + 0xa8) = eax_88
                                                                *eax_88 = 0
                                                            
                                                            char* eax_89 = *(esi + 0xa8)
                                                            j_3.b = *eax_89
                                                            *(esi + 0xa8) = &eax_89[1]
                                                            eax_75 = j_3.b
                                                        
                                                        *ebx_5 = eax_75
                                                        ebx_5 += 4
                                                        j_1 = j_2
                                                        j_2 -= 1
                                                    while (j_1 != 1)
                                            i_6 = i_4
                                        while (j_4 s< i_6)
                                    
                                    i = i_2 + 1
                                    i_2 = i
                                while (i s< 4)
                                
                                if (i_6 s> 0)
                                    char* esi_1 = var_434_1
                                    float* result_2 = result_1
                                    int32_t i_3 = i_4
                                    int32_t i_1
                                    
                                    do
                                        sub_59fcf0(esi_1, result_2)
                                        result_2 = &result_2[3]
                                        esi_1 = &esi_1[4]
                                        i_1 = i_3
                                        i_3 -= 1
                                    while (i_1 != 1)
                                    esi = var_414
                                
                                result_1 = &result_1[i_5 * 3]
                                void* eax_94 = var_440 + 1
                                var_440 = eax_94
                                
                                if (eax_94 s>= eax_16)
                                    goto label_5a047e
                                
                                continue
                            
                            goto label_5a05a0
                        
                    label_5a047e:
                        __free_base(var_434_1)
                    sub_5a6aba(eax_1 ^ &j_4)
                    return result
            
            data_273ac1c = "unsupported data layout"
            sub_5a6aba(eax_1 ^ &j_4)
            return 0
    
    data_273ac1c = "unsupported format"
    sub_5a6aba(eax_1 ^ &j_4)
    return 0
}
