// 函数名称: sub_439050
// 虚拟地址: 0x439050
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_439050(int32_t* arg1)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    
    if (esi[0xd] s>= esi[2])
        sub_4c5870("action.countCreated < action.paramCount", &data_83f3d3, "..\code\RFTGClient.cpp", 
            0x3462, "UIActionUpdate")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edi = esi[1]
    int32_t var_14
    
    if (edi != 0xffffffff)
        var_14 = sub_46b360(edi)
    else
        var_14 = edi
    
    void* eax_3 = *esi
    void* edx
    
    if (eax_3 == 6 || eax_3 == 7)
        int32_t edi_1 = esi[1]
        
        if (edi_1 != 0xffffffff)
            eax_3 = sub_46b360(edi_1)
        else
            eax_3 |= edi_1
        
        edx = data_27e7a40
        
        if (eax_3 == *(edx + 0x74))
            goto label_4390f3
    else
        edx = data_27e7a40
    label_4390f3:
        
        if (esi[0xe] == 0 && *esi != 0x27 && esi[0xf].b == 0)
            if (*(*(edx + 0x548) + 0x2c0b8) != 0)
                return 1
            
            char eax_6 = sub_438c70(eax_3, esi)
            void* edx_1 = data_27e7a40
            int32_t eax_7
            
            if (eax_6 != 0)
            label_439153:
                int32_t eax_8 = *esi
                int32_t ecx_2 = 0x64
                
                if (eax_8 == 0x26)
                    ecx_2 = eax_8 + 0xc
                
                if (eax_8 == 0x23 || eax_8 == 0x24 || eax_8 == 0x25)
                    ecx_2 = 0x3e8
                else if ((eax_8 == 0x1c || eax_8 == 0x19) && var_14 != *(edx_1 + 0x74))
                    ecx_2 = 0x3e8
                
                eax_7 = sub_438b50(ecx_2)
                
                if (eax_7.b == 0)
                    return 1
            else
                eax_7 = *esi
                
                if (eax_7 == 0x26 || eax_7 == 0x24 || eax_7 == 0x25 || eax_7 == 0x23)
                    goto label_439153
                
                if (eax_7 == 0x1c || eax_7 == 0x19)
                    eax_7 = var_14
                    
                    if (eax_7 != *(edx_1 + 0x74))
                        goto label_439153
            
            char eax_10 = sub_438ca0(eax_7, esi)
            char eax_11
            
            if (eax_10 != 0)
                eax_11 = sub_438be0()
            
            if (eax_10 != 0 && eax_11 == 0)
                return 1
            
            if (sub_438ef0(var_14) == 0)
                return 1
            
            void* eax_15
            int32_t ecx_3
            int32_t edx_2
            eax_15, ecx_3, edx_2 = sub_438fa0(esi[0xc])
            
            if (eax_15.b == 0)
                return 1
            
            eax_3 = sub_445d50(eax_15, edx_2, ecx_3, esi)
            
            if (eax_3.b != 0)
                return 1
            
            edx = data_27e7a40
    
    int32_t edi_2 = esi[1]
    void* eax_4
    
    if (edi_2 != 0xffffffff)
        eax_4 = sub_46b360(edi_2)
        edx = data_27e7a40
    else
        eax_4 = eax_3 | edi_2
    
    int32_t ecx_4 = *esi
    
    if (ecx_4 u> 0x27)
        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x3294, "ActionDestDestroy")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    char var_9
    
    switch (ecx_4)
        case 0, 1, 2, 7, 9, 0xb, 0x10, 0x12, 0x13, 0x14, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x25, 0x26
            var_9 = 1
        case 3, 4, 5, 6, 8, 0xc, 0xd, 0xe, 0xf, 0x11, 0x15, 0x16, 0x19, 0x1a, 0x1b, 0x1c, 0x24, 0x27
            var_9 = 0
        case 0xa, 0x17, 0x18, 0x23
            if (eax_4 == *(edx + 0x74))
                var_9 = 0
            else
                eax_4 = data_27e7fd0
                
                if (*(eax_4 + 0x27) != 0)
                    var_9 = 0
                else
                    var_9 = 1
    
    if (ecx_4 != 0x1b)
        if (ecx_4 != 0x1c && ecx_4 != 0xe)
            if (ecx_4 != 0x27)
                int32_t eax_19
                
                if (ecx_4 == 6)
                    int32_t edi_4 = esi[1]
                    
                    if (edi_4 != 0xffffffff)
                        eax_19 = sub_46b360(edi_4)
                        edx = data_27e7a40
                    else
                        eax_19 = eax_4 | edi_4
                
                if (ecx_4 != 6 || eax_19 == *(edx + 0x74))
                    int32_t* ebx_1 = sub_438770(esi)
                    int32_t eax_22 = ebx_1[0x1a]
                    int32_t var_2c_1 = ebx_1[0x19]
                    int32_t var_24_1 = ebx_1[0x1b]
                    void var_80
                    void var_60
                    __builtin_memcpy(&var_60, sub_437da0(eax_22, ebx_1, esi, &var_80), 0x20)
                    __builtin_memcpy(&ebx_1[0xb], &var_60, 0x20)
                    int32_t* eax_25 = sub_438d50(arg1)
                    int32_t edx_6 = eax_25[1]
                    int32_t eax_26 = eax_25[2]
                    ebx_1[0x13] = *eax_25
                    ebx_1[0x14] = edx_6
                    ebx_1[0x15] = eax_26
                    void var_40
                    int32_t* eax_27 = sub_4383a0(&var_40)
                    int32_t esi_3 = eax_27[1]
                    int32_t edx_7 = *eax_27
                    int32_t eax_28 = eax_27[2]
                    ebx_1[0x19] = edx_7
                    ebx_1[0x1a] = esi_3
                    ebx_1[0x16] = edx_7
                    ebx_1[0x17] = esi_3
                    ebx_1[0x1b] = eax_28
                    ebx_1[0x18] = eax_28
                    bool cond:1_1 = ebx_1[0x19] != 0
                    __builtin_memcpy(&ebx_1[3], &ebx_1[0xb], 0x20)
                    
                    if (not(cond:1_1) && ebx_1[0x1f] s>= 0x3e8)
                        sub_4c5870("item.cidx < 1000", &data_83f3d3, "..\code\RFTGClient.cpp", 0x3521, 
                            "UIActionUpdate")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t* edx_8 = ebx_1
                    int32_t* eax_29
                    eax_29.b = var_9
                    int32_t* esi_5 = arg1
                    edx_8[0x1c].b = eax_29.b
                    
                    if (*esi_5 == 0x14)
                        if (esi_5[0xe] == 0)
                            data_307bf68
                            edx_8 = sub_4d6980()
                        
                        esi_5[0xe] = 1
                    
                    int32_t edi_10
                    
                    if (*esi_5 != 0x16)
                        edi_10 = eax_22
                    else
                        void* eax_32
                        eax_32, edx_8 = sub_418870(esi_5[5])
                        int32_t edi_8 = data_315fba4
                        data_315fba4 = edi_8 + 1
                        edi_10 = eax_22
                        *(eax_32 + 0x58) = 0xffffffff
                        *(eax_32 + 0x5c) = 1
                        *(eax_32 + 0x60) = edi_8
                        *(eax_32 + 0x70) = 1
                        
                        if (edi_10 == 2)
                            edx_8 = sub_424840(var_14)
                    
                    int32_t eax_34 = *esi_5
                    
                    if (eax_34 == 6)
                        *(*(data_27e7a40 + 0x548) + 0x43884) = 1
                        data_c020d0 -= 1
                    else if (eax_34 == 0x13)
                        esi_5[8]
                        int128_t* eax_35 = sub_418700(esi_5[9])
                        void* ecx_21 = *(data_27e7a40 + 0x548)
                        int32_t edx_10 = *(ecx_21 + 0x4396c)
                        *(ecx_21 + 0x4396c) = zx.d(*(eax_35 + 0xac))
                        *(eax_35 + 0xac) = edx_10
                        *(ecx_21 + 0x43970) -= 1
                    else if (eax_34 == 0xd || eax_34 == 0xf)
                        if (esi_5[0xe] == 0)
                            data_307bf18
                            sub_4d6980()
                    else if (eax_34 != 0x10)
                        if (eax_34 == 0x15)
                            void* eax_36 = sub_418690(ebx_1[0x1f])
                            
                            if (eax_36 != 0)
                                *(eax_36 + 0x64) = ebx_1[0x19]
                                *(eax_36 + 0x68) = ebx_1[0x1a]
                                *(eax_36 + 0x6c) = ebx_1[0x1b]
                                *(eax_36 + 0x68) = 4
                                int32_t edx_13 = *(eax_36 + 0x68)
                                *(eax_36 + 0x58) = *(eax_36 + 0x64)
                                int32_t ecx_25 = *(eax_36 + 0x6c)
                                *(eax_36 + 0x5c) = edx_13
                                *(eax_36 + 0x60) = ecx_25
                                
                                if (esi_5[0xe] == 0)
                                    *(eax_36 + 0x98) = 0
                                    *(eax_36 + 0x78) = fconvert.s(float.t(0))
                                else
                                    *(eax_36 + 0x78) = fconvert.s(float.t(1))
                                    void* eax_40 = data_27e7a40
                                    long double x87_r7_2 = float.t(0)
                                    __builtin_memcpy(&var_60, 
                                        sub_436c20(eax_40, eax_36, *(eax_40 + 0x74), &var_80, 
                                            eax_36 + 0x58, 0), 
                                        0x20)
                                    __builtin_memcpy(eax_36 + 0xc, &var_60, 0x20)
                                    long double temp1_1 = fconvert.t(*(eax_36 + 0xc))
                                    x87_r7_2 - temp1_1
                                    int32_t eax_41
                                    eax_41.w = (x87_r7_2 < temp1_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_2, temp1_1) ? 1 : 0) << 0xa
                                        | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe
                                    bool p_1 = unimplemented  {test ah, 0x41}
                                    
                                    if (p_1)
                                        sub_4c5870("gfxGood.transform.s >= 0.0f", &data_83f3d3, 
                                            "..\code\RFTGClient.cpp", 0x3572, "UIActionUpdate")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_4c5a30()
                                        noreturn
                                    
                                    esi_5 = arg1
                                    *(eax_36 + 0x98) = 1
                                    *(eax_36 + 0x9a) = 0x101
                        else if (eax_34 == 0x26)
                            sub_424c30(esi_5)
                        else if (eax_34 == 0x24)
                            data_c020d0 -= 1
                        else if (eax_34 == 0x25)
                        label_43982e:
                            
                            if (esi_5[0xe] != 0)
                                data_c020d4 += 1
                        else if (eax_34 == 0x1a)
                            data_c020d0 -= 1
                        else if (eax_34 == 0x23)
                            sub_424b90(esi_5)
                        else if (eax_34 == 0x18)
                            sub_424b90(esi_5)
                        else if (eax_34 == 0x1e)
                            sub_424c30(esi_5)
                        else if (eax_34 == 0x19)
                            *(*(data_27e7a40 + 0x548) + 0x43888) =
                                sx.d(*(*(sub_418a10() + ebx_1[0x1f] * 0x14 + 0x46c) + 7))
                            sub_4249d0(esi_5)
                        else if (eax_34 == 0x17)
                            sub_424be0(esi_5)
                        else if (eax_34 != 5)
                            if (eax_34 == 2)
                                goto label_43982e
                            
                            if (eax_34 != 8)
                                switch (eax_34)
                                    case 0, 1
                                        int32_t* var_94_6 = ebx_1
                                        sub_424c50(ebx_1, edx_8)
                                    case 4
                                        uint32_t edx_18 = edi_10 == 3
                                        uint32_t var_94_5 = edx_18
                                        sub_424960(eax_34, esi_5, edx_18.b)
                                    case 7, 0x1d
                                        goto label_43982e
                                    case 9
                                        int32_t edi_16
                                        
                                        if (edi_10 == 2)
                                            edi_16 = esi_5[1]
                                            
                                            if (edi_16 != 0xffffffff)
                                                sub_424840(sub_46b360(edi_16))
                                            else
                                                sub_424840(eax_34 | edi_16)
                                        else if (ebx_1[0x1d] == 3)
                                            edi_16 = esi_5[1]
                                            
                                            if (edi_16 != 0xffffffff)
                                                sub_424840(sub_46b360(edi_16))
                                            else
                                                sub_424840(ebx_1 | edi_16)
                                        
                                        if (esi_5[0xe] != 0)
                                            data_c02120 += 1
                                        
                                        if (ebx_1[0x1d] == 4)
                                            esi_5[0xe] = 1
                                    case 0xa
                                        sub_424af0(esi_5)
                                    case 0xb
                                        data_c02120 -= 1
                                        
                                        if (esi_5[0xe] != 0)
                                            data_c020d4 += 1
                                    case 0x1f
                                        int32_t* var_94_4 = ebx_1
                                        sub_424a10(ebx_1, edx_8)
                                    case 0x20
                                        sub_424b40(esi_5)
                                    case 0x21
                                        sub_424ab0(esi_5)
                                    case 0x22
                                        sub_424a60(esi_5)
                            else
                                data_c020d0 -= 1
                        else if (*(*(data_27e7a40 + 0x548) + 0x43884) == 0)
                            sub_424910(esi_5)
                    
                    *(ebx_1 + 0x9b) = 0
                    *(ebx_1 + 0x99) = 0
                    int32_t esi_7 = esi_5[0xe]
                    
                    if (esi_7 == 0)
                        ebx_1[0x26].b = 0
                        ebx_1[0x1e] = fconvert.s(float.t(0))
                    else
                        int32_t eax_58
                        
                        if (var_9 != 0)
                            eax_58 = *ebx_1
                        
                        if (var_9 != 0 && (eax_58 == 1 || eax_58 == 4))
                            void* eax_59 = *(data_27e7a40 + 0x548)
                            int32_t ecx_35 = *(eax_59 + 0x4396c)
                            *(eax_59 + 0x4396c) = zx.d(ebx_1[0x2b].w)
                            ebx_1[0x2b] = ecx_35
                            *(eax_59 + 0x43970) -= 1
                        else if (esi_7 == 0)
                            ebx_1[0x26].b = 0
                            ebx_1[0x1e] = fconvert.s(float.t(0))
                        else
                            ebx_1[0x1e] = fconvert.s(float.t(1))
                            void* eax_61 = data_27e7a40
                            long double x87_r7_5 = float.t(0)
                            __builtin_memcpy(&var_60, 
                                sub_436c20(eax_61, ebx_1, *(eax_61 + 0x74), &var_80, &ebx_1[0x16], 0), 
                                0x20)
                            __builtin_memcpy(&ebx_1[3], &var_60, 0x20)
                            long double temp0_1 = fconvert.t(ebx_1[3])
                            x87_r7_5 - temp0_1
                            void* eax_63
                            eax_63.w = (x87_r7_5 < temp0_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_5, temp0_1) ? 1 : 0) << 0xa
                                | (x87_r7_5 == temp0_1 ? 1 : 0) << 0xe
                            bool p_2 = unimplemented  {test ah, 0x41}
                            
                            if (p_2)
                                sub_4c5870("item.transform.s >= 0.0f", &data_83f3d3, 
                                    "..\code\RFTGClient.cpp", 0x3608, "UIActionUpdate")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            ebx_1[0x26].b = 1
                            *(ebx_1 + 0x9a) = 0x101
                    
                    esi = arg1
                else
                    data_c020d0 -= 1
            else
                *(*(edx + 0x548) + 0xbfa8) = esi[0xc]
                
                if (esi[0xe] == 0)
                    switch (esi[0xc])
                        case 0
                            data_307bf14
                            sub_4d6980()
                        case 1
                            data_307bf30
                            sub_4d6980()
                        case 2
                            data_307bf20
                            sub_4d6980()
                        case 3
                            data_307bf5c
                            sub_4d6980()
                        case 4
                            data_307bf1c
                            sub_4d6980()
                        case 5
                            data_307bf50
                            sub_4d6980()
    else if (esi[0xe] == 0 && var_14 == *(edx + 0x74))
        *(*(edx + 0x548) + 0x2c0b8) = 1
        *(*(edx + 0x548) + 0x2c0bc) = var_14
    
    int32_t eax_66 = esi[0xd]
    int32_t ecx_37 = esi[2]
    
    if (eax_66 s>= ecx_37)
        sub_4c5870("action.countCreated < action.paramCount", &data_83f3d3, "..\code\RFTGClient.cpp", 
            0x3616, "UIActionUpdate")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    esi[0xd] = eax_66 + 1
    
    if (eax_66 + 1 == ecx_37)
        return 2
    
    if (eax_66 + 1 s< ecx_37)
        return 0
    
    sub_4c5870("action.countCreated < action.paramCount", &data_83f3d3, "..\code\RFTGClient.cpp", 
        0x361f, "UIActionUpdate")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
