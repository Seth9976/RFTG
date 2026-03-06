// 函数名称: sub_6876bf
// 虚拟地址: 0x6876bf
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6876bf(uint32_t arg1, int16_t* arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int16_t* esi = arg2
    int32_t edi
    int32_t var_488 = edi
    int32_t* edi_1 = arg4
    void* var_424 = edi_1
    int32_t var_448 = 0
    uint32_t var_40c = 0
    int32_t var_434 = 0
    int32_t i_7 = 0
    int32_t var_42c = 0
    int32_t var_44c = 0
    int32_t var_430 = 0
    void* var_45c
    sub_5a73dd(&var_45c, arg3)
    void* eax_3 = __errno()
    int32_t result
    void* var_454
    char var_450
    bool cond:15_1
    
    if (arg1 != 0 && esi != 0)
        uint32_t ecx_1 = zx.d(*esi)
        int32_t edx_1 = 0
        int32_t result_1 = 0
        void* i_6 = nullptr
        int16_t* var_440_1 = nullptr
        int16_t var_420_1 = ecx_1.w
        
        if (ecx_1.w != 0)
            while (true)
                void* var_444_1 = &esi[1]
                
                if (result_1 s< 0)
                    break
                
                int32_t eax_9
                
                if (ecx_1.w - 0x20 u> 0x58)
                    eax_9 = 0
                else
                    eax_9 = sx.d(data_6b0ce8[8][zx.d(ecx_1.w)]) & 0xf
                
                int32_t eax_11 = sx.d(*(edx_1 + (eax_9 << 3) + 0x6b0d10)) s>> 4
                int16_t* edx_2 = 7
                int32_t var_464_1 = eax_11
                int32_t var_46c
                
                switch (eax_11)
                    case 0
                        goto label_6879fe
                    case 1
                        i_7 = 0xffffffff
                        var_46c = 0
                        var_44c = 0
                        var_434 = 0
                        var_42c = 0
                        var_40c = 0
                        var_430 = 0
                    case 2
                        uint32_t eax_12 = zx.d(ecx_1.w)
                        
                        if (eax_12 == 0x20)
                            var_40c |= 2
                        else if (eax_12 == 0x23)
                            var_40c |= 0x80
                        else if (eax_12 == 0x2b)
                            var_40c |= 1
                        else if (eax_12 == 0x2d)
                            var_40c |= 4
                        else if (eax_12 == 0x30)
                            var_40c |= 8
                    case 3
                        if (ecx_1.w != 0x2a)
                            var_434 = var_434 * 0xa + zx.d(ecx_1.w) - 0x30
                        else
                            var_424 = &edi_1[1]
                            int32_t edi_3 = *edi_1
                            var_434 = edi_3
                            
                            if (edi_3 s< 0)
                                var_40c |= 4
                                var_434 = neg.d(var_434)
                    case 4
                        i_7 = 0
                    case 5
                        if (ecx_1.w != 0x2a)
                            i_7 = i_7 * 0xa + zx.d(ecx_1.w) - 0x30
                        else
                            var_424 = &edi_1[1]
                            int32_t i_12 = *edi_1
                            i_7 = i_12
                            
                            if (i_12 s< 0)
                                i_7 = 0xffffffff
                    case 6
                        uint32_t eax_24 = zx.d(ecx_1.w)
                        
                        if (eax_24 == 0x49)
                            uint32_t eax_25 = zx.d(esi[1])
                            
                            if (eax_25 == 0x36 && esi[2] == 0x34)
                                var_40c |= 0x8000
                                var_444_1 = &esi[3]
                            else if (eax_25 == 0x33 && esi[2] == 0x32)
                                var_40c &= 0xffff7fff
                                var_444_1 = &esi[3]
                            else if (eax_25 != 0x64 && eax_25 != 0x69 && eax_25 != 0x6f
                                    && eax_25 != 0x75 && eax_25 != 0x78 && eax_25 != 0x58)
                                var_464_1 = 0
                            label_6879fe:
                                int16_t* var_48c_1 = ecx_1
                                var_430 = 1
                                sub_687629(arg1, &result_1, 7)
                        else if (eax_24 == 0x68)
                            var_40c |= 0x20
                        else if (eax_24 == 0x6c)
                            if (esi[1] != 0x6c)
                                var_40c |= 0x10
                            else
                                var_40c |= 0x1000
                                var_444_1 = &esi[2]
                        else if (eax_24 == 0x77)
                            var_40c |= 0x800
                    case 7
                        uint32_t eax_27 = zx.d(ecx_1.w)
                        int16_t var_438
                        int32_t var_420_2
                        void* var_414
                        void* i_9
                        
                        if (eax_27 s> 0x64)
                            if (eax_27 s> 0x70)
                                if (eax_27 != 0x73)
                                    if (eax_27 == 0x75)
                                        goto label_687cf2
                                    
                                    if (eax_27 != 0x78)
                                        goto label_68802a
                                    
                                    var_448 = 0x27
                                    goto label_687e80
                                
                            label_687ac7:
                                int32_t i = i_7
                                
                                if (i == 0xffffffff)
                                    i = 0x7fffffff
                                
                                var_424 = &edi_1[1]
                                void* edi_6 = *edi_1
                                var_414 = edi_6
                                
                                if ((var_40c.b & 0x20) == 0)
                                    if (edi_6 == 0)
                                        var_414 = data_8b852c
                                    
                                    void* eax_69 = var_414
                                    var_430 = 1
                                    
                                    while (i != 0)
                                        i -= 1
                                        
                                        if (*eax_69 == 0)
                                            break
                                        
                                        eax_69 += 2
                                    
                                    i_9 = (eax_69 - var_414) s>> 1
                                    goto label_688024
                                
                                if (edi_6 == 0)
                                    var_414 = data_8b8528
                                
                                i_6 = nullptr
                                char* esi_6 = var_414
                                
                                if (i s> 0)
                                    do
                                        eax_27.b = *esi_6
                                        
                                        if (eax_27.b == 0)
                                            break
                                        
                                        void** var_48c_2 = &var_45c
                                        eax_27, edx_2 = sub_5aec60(eax_27.b, var_48c_2)
                                        ecx_1 = var_48c_2
                                        
                                        if (eax_27 != 0)
                                            esi_6 = &esi_6[1]
                                        
                                        esi_6 = &esi_6[1]
                                        i_6 += 1
                                    while (i_6 s< i)
                                
                                goto label_68802a
                            
                            if (eax_27 == 0x70)
                                i_7 = 8
                            label_687e4d:
                                var_448 = 7
                            label_687e80:
                                var_420_2 = 0x10
                                
                                if ((var_40c.b & 0x80) != 0)
                                    var_438 = 0x30
                                    int16_t var_436_1 = var_448.w + 0x51
                                    var_42c = 2
                                
                                goto label_687cfc
                            
                            if (eax_27 s< 0x65)
                                goto label_68802a
                            
                            if (eax_27 s<= 0x67)
                                goto label_687a5e
                            
                            if (eax_27 == 0x69)
                                goto label_687ceb
                            
                            if (eax_27 != 0x6e)
                                if (eax_27 != 0x6f)
                                    goto label_68802a
                                
                                var_420_2 = 8
                                
                                if ((var_40c.b & 0x80) != 0)
                                    var_40c |= 0x200
                                
                                goto label_687cfc
                            
                            int16_t* esi_7 = *edi_1
                            var_424 = &edi_1[1]
                            
                            if (sub_5a7df2() == 0)
                                *__errno() = 0x16
                                __invalid_parameter_noinfo()
                                cond:15_1 = var_450 == 0
                                goto label_68774f
                            
                            if ((var_40c.b & 0x20) == 0)
                                *esi_7 = result_1
                            else
                                int32_t eax_44
                                eax_44.w = result_1.w
                                *esi_7 = eax_44.w
                            
                            var_44c = 1
                        else
                            if (eax_27 == 0x64)
                            label_687ceb:
                                var_40c |= 0x40
                            label_687cf2:
                                var_420_2 = 0xa
                            label_687cfc:
                                ecx_1 = var_40c
                                uint32_t eax_46
                                
                                if ((ecx_1 & 0x8000) == 0 && (ecx_1 & 0x1000) == 0)
                                    void* edi_10 = &edi_1[1]
                                    
                                    if ((ecx_1.b & 0x20) == 0)
                                        eax_46 = *(edi_10 - 4)
                                        
                                        if ((ecx_1.b & 0x40) == 0)
                                            edx_2 = nullptr
                                        else
                                            edx_2:eax_46 = sx.q(eax_46)
                                        
                                        var_424 = edi_10
                                    else
                                        var_424 = edi_10
                                        int32_t eax_58
                                        
                                        if ((ecx_1.b & 0x40) == 0)
                                            eax_58 = zx.d(*(edi_10 - 4))
                                        else
                                            eax_58 = sx.d(*(edi_10 - 4))
                                        
                                        edx_2:eax_46 = sx.q(eax_58)
                                else
                                    eax_46 = *edi_1
                                    edx_2 = edi_1[1]
                                    var_424 = &edi_1[2]
                                
                                if ((ecx_1.b & 0x40) != 0 && edx_2 s<= 0 && (edx_2 s< 0 || eax_46 u< 0))
                                    uint32_t temp18_1 = eax_46
                                    eax_46 = neg.d(eax_46)
                                    edx_2 = neg.d(adc.d(edx_2, 0, temp18_1 != 0))
                                    var_40c |= 0x100
                                
                                int16_t* edi_14 = edx_2
                                uint32_t ebx_2 = eax_46
                                
                                if ((var_40c & 0x9000) == 0)
                                    edi_14 = nullptr
                                
                                if (i_7 s>= 0)
                                    var_40c &= 0xfffffff7
                                    
                                    if (i_7 s> 0x200)
                                        i_7 = 0x200
                                else
                                    i_7 = 1
                                
                                int32_t eax_60 = ebx_2 | edi_14
                                
                                if (eax_60 == 0)
                                    var_42c &= eax_60
                                
                                void var_209
                                char* esi_10 = &var_209
                                
                                while (true)
                                    int32_t i_10 = i_7
                                    i_7 -= 1
                                    
                                    if (i_10 s<= 0 && (ebx_2 | edi_14) == 0)
                                        break
                                    
                                    int32_t eax_64
                                    uint32_t edx_4
                                    edx_4:eax_64 = sx.q(var_420_2)
                                    uint32_t eax_65
                                    int32_t ecx_8
                                    eax_65, ecx_8, edx_2 = __aulldvrm(ebx_2, edi_14, eax_64, edx_4)
                                    ecx_1 = ecx_8 + 0x30
                                    uint32_t var_478_1 = ebx_2
                                    ebx_2 = eax_65
                                    edi_14 = edx_2
                                    
                                    if (ecx_1 s> 0x39)
                                        ecx_1 += var_448
                                    
                                    *esi_10 = ecx_1.b
                                    esi_10 -= 1
                                
                                void* i_11 = &var_209 - esi_10
                                i_6 = i_11
                                var_414 = &esi_10[1]
                                
                                if ((var_40c & 0x200) != 0 && (i_11 == 0 || esi_10[1] != 0x30))
                                    var_414 -= 1
                                    i_6 += 1
                                    *var_414 = 0x30
                                
                                goto label_68802a
                            
                            int16_t* var_48c_4
                            int16_t var_408
                            
                            if (eax_27 s<= 0x53)
                                if (eax_27 == 0x53)
                                    if ((var_40c & 0x830) == 0)
                                        var_40c |= 0x20
                                    
                                    goto label_687ac7
                                
                                if (eax_27 != 0x41)
                                    if (eax_27 == 0x43)
                                        if ((var_40c & 0x830) == 0)
                                            var_40c |= 0x20
                                        
                                        goto label_687b70
                                    
                                    if (eax_27 == 0x45 || eax_27 == 0x47)
                                        goto label_687a4e
                                    
                                    goto label_68802a
                                
                            label_687a4e:
                                var_46c = 1
                                var_420_1 = ecx_1.w + 0x20
                            label_687a5e:
                                var_40c |= 0x40
                                int16_t* ebx_1 = &var_408
                                var_414 = &var_408
                                uint32_t var_418_1 = 0x200
                                
                                if (i_7 s< 0)
                                    i_7 = 6
                                else if (i_7 != 0)
                                    if (i_7 s> 0x200)
                                        i_7 = 0x200
                                    
                                    if (i_7 s> 0xa3)
                                        int16_t* eax_47 = sub_5abd7c(i_7 + 0x15d)
                                        var_440_1 = eax_47
                                        
                                        if (eax_47 == 0)
                                            i_7 = 0xa3
                                        else
                                            var_414 = eax_47
                                            var_418_1 = i_7 + 0x15d
                                            ebx_1 = eax_47
                                else if (var_420_1 == 0x67)
                                    i_7 = 1
                                
                                int32_t var_474 = *edi_1
                                int32_t var_470_1 = edi_1[1]
                                var_424 = &edi_1[2]
                                DecodePointer(data_8b8de0)(&var_474, ebx_1, var_418_1, 
                                    sx.d(var_420_1.b), i_7, var_46c, &var_45c)
                                int32_t edi_13 = var_40c & 0x80
                                
                                if (edi_13 != 0 && i_7 == 0)
                                    DecodePointer(data_8b8dec)(ebx_1, &var_45c)
                                
                                if (var_420_1 == 0x67 && edi_13 == 0)
                                    DecodePointer(data_8b8de8)(ebx_1, &var_45c)
                                
                                if (*ebx_1 == 0x2d)
                                    var_40c |= 0x100
                                    ebx_1 += 1
                                    var_414 = ebx_1
                                
                                var_48c_4 = ebx_1
                                goto label_687c49
                            
                            if (eax_27 == 0x58)
                                goto label_687e4d
                            
                            uint32_t var_460
                            
                            if (eax_27 != 0x5a)
                                if (eax_27 == 0x61)
                                    goto label_687a5e
                                
                                if (eax_27 != 0x63)
                                    goto label_68802a
                                
                            label_687b70:
                                uint32_t eax_37 = zx.d(*edi_1)
                                var_430 = 1
                                var_424 = &edi_1[1]
                                var_460 = eax_37
                                
                                if ((var_40c.b & 0x20) == 0)
                                    var_408 = eax_37.w
                                else
                                    char var_43c = eax_37.b
                                    char var_43b_1 = 0
                                    int32_t eax_39
                                    eax_39, ecx_1, edx_2 =
                                        sub_5b9254(&var_408, &var_43c, *(var_45c + 0xac), &var_45c)
                                    
                                    if (eax_39 s< 0)
                                        var_44c = 1
                                
                                var_414 = &var_408
                                i_6 = 1
                                goto label_68802a
                            
                            int16_t* eax_40 = *edi_1
                            var_424 = &edi_1[1]
                            
                            if (eax_40 != 0)
                                ecx_1 = *(eax_40 + 4)
                            
                            if (eax_40 != 0 && ecx_1 != 0)
                                i_9 = sx.d(*eax_40)
                                var_414 = ecx_1
                                
                                if ((var_40c & 0x800) == 0)
                                    var_430 = 0
                                    goto label_688024
                                
                                int32_t eax_41
                                edx_2:eax_41 = sx.q(i_9)
                                var_430 = 1
                                i_9 = (eax_41 - edx_2) s>> 1
                                goto label_688024
                            
                            int16_t* eax_43 = data_8b8528
                            var_414 = eax_43
                            var_48c_4 = eax_43
                        label_687c49:
                            i_9, edx_2 = _strlen(var_48c_4)
                            ecx_1 = var_48c_4
                        label_688024:
                            i_6 = i_9
                        label_68802a:
                            
                            if (var_44c == 0)
                                if ((var_40c.b & 0x40) != 0)
                                    uint32_t var_48c_10
                                    
                                    if ((var_40c & 0x100) == 0)
                                        if ((var_40c.b & 1) != 0)
                                            var_48c_10 = 0x2b
                                            goto label_68805a
                                        
                                        if ((var_40c.b & 2) != 0)
                                            var_48c_10 = 0x20
                                            goto label_68805a
                                    else
                                        var_48c_10 = 0x2d
                                    label_68805a:
                                        ecx_1 = var_48c_10
                                        var_438 = ecx_1.w
                                        var_42c = 1
                                
                                void* i_1 = var_434 - i_6 - var_42c
                                void* i_5 = i_1
                                
                                if ((var_40c.b & 0xc) == 0)
                                    while (i_1 s> 0)
                                        i_1 -= 1
                                        edx_2 = sub_687629(arg1, &result_1, edx_2.w)
                                        ecx_1 = 0x20
                                        
                                        if (result_1 == 0xffffffff)
                                            break
                                
                                int16_t* var_490_7 = &var_438
                                int16_t* edx_5 = sub_687658(&result_1, eax_3, edx_2, ecx_1)
                                int32_t ecx_9 = var_42c
                                
                                if ((var_40c.b & 8) != 0 && (var_40c.b & 4) == 0)
                                    void* i_2 = i_5
                                    
                                    while (i_2 s> 0)
                                        i_2 -= 1
                                        edx_5 = sub_687629(arg1, &result_1, edx_5.w)
                                        ecx_9 = 0x30
                                        
                                        if (result_1 == 0xffffffff)
                                            break
                                
                                void* i_3
                                
                                if (var_430 == 0)
                                    i_3 = i_6
                                
                                int16_t edx_6
                                
                                if (var_430 != 0 || i_3 s<= 0)
                                    void* i_8 = i_6
                                    void* var_490_9 = var_414
                                    edx_6 = sub_687658(&result_1, eax_3, edx_5, ecx_9)
                                else
                                    char* edi_18 = var_414
                                    
                                    do
                                        i_3 -= 1
                                        int32_t eax_75
                                        eax_75, edx_6 =
                                            sub_5b9254(&var_460, edi_18, *(var_45c + 0xac), &var_45c)
                                        
                                        if (eax_75 s<= 0)
                                            result_1 = 0xffffffff
                                            break
                                        
                                        uint32_t var_48c_13 = var_460
                                        edx_6 = sub_687629(arg1, &result_1, edx_6)
                                        edi_18 = &edi_18[eax_75]
                                    while (i_3 s> 0)
                                
                                if (result_1 s>= 0 && (var_40c.b & 4) != 0)
                                    void* i_4 = i_5
                                    
                                    while (i_4 s> 0)
                                        i_4 -= 1
                                        edx_6 = sub_687629(arg1, &result_1, edx_6)
                                        
                                        if (result_1 == 0xffffffff)
                                            break
                        
                        if (var_440_1 != 0)
                            __free_base(var_440_1)
                            var_440_1 = nullptr
                
                esi = var_444_1
                uint32_t eax_79 = zx.d(*esi)
                var_420_1 = eax_79.w
                
                if (eax_79.w == 0)
                    break
                
                edx_1 = var_464_1
                edi_1 = var_424
                ecx_1 = eax_79
        
        if (var_450 != 0)
            *(var_454 + 0x70) &= 0xfffffffd
        
        result = result_1
    else
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        cond:15_1 = var_450 == 0
    label_68774f:
        
        if (not(cond:15_1))
            *(var_454 + 0x70) &= 0xfffffffd
        
        result = 0xffffffff
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
