// 函数名称: sub_5b0de9
// 虚拟地址: 0x5b0de9
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b0de9(int32_t* arg1, char* arg2, int32_t* arg3, uint32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edi
    int32_t var_20c = edi
    uint32_t var_1ec = arg4
    void var_188
    void* var_1b4 = &var_188
    int32_t var_1e0 = 0x15e
    int32_t var_1d4 = 0
    int32_t var_1f0 = 0
    uint32_t i_6 = 0
    int32_t result
    
    if (arg2 == 0 || arg1 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = 0xffffffff
    else if ((arg1[3].b & 0x40) != 0)
    label_5b0ee1:
        void* var_200
        sub_5a73dd(&var_200, arg3)
        uint32_t i_2
        i_2.b = *arg2
        char var_1a9_1 = 0
        int32_t var_190 = 0
        int32_t result_1 = 0
        void* var_1f8
        char var_1f4
        
        if (i_2.b == 0)
        label_5b1dcc:
            
            if (var_1f4 != 0)
                *(var_1f8 + 0x70) &= 0xfffffffd
            
            result = result_1
        else
            char* i_9 = arg2
            
            while (true)
                uint32_t eax_9 = zx.d(i_2.b)
                
                if (sub_5a852b(eax_9) == 0)
                    int32_t eax_10
                    eax_10.b = *i_9
                    char* i_3
                    bool cond:5_1
                    
                    if (eax_10.b != 0x25)
                    label_5b1ccd:
                        var_190 += 1
                        uint32_t i_19 = sub_5b0da9(eax_9, arg1)
                        uint32_t eax_67 = zx.d(*i_9)
                        i_9 = &i_9[1]
                        i_6 = i_19
                        i_3 = i_9
                        
                        if (eax_67 != i_19)
                        label_5b1d65:
                            cond:5_1 = i_19 == 0xffffffff
                        label_5b1d68:
                            
                            if (cond:5_1)
                                break
                            
                            sub_5b9df1(i_6, arg1)
                            break
                            break
                        
                        uint32_t eax_68 = zx.d(i_19.b)
                        
                        if (__ismbcl2(eax_68.b) != 0)
                            var_190 += 1
                            i_2 = sub_5b0da9(eax_68, arg1)
                            uint32_t ecx_49 = zx.d(*i_9)
                            i_9 = &i_9[1]
                            i_3 = i_9
                            
                            if (ecx_49 != i_2)
                                if (i_2 != 0xffffffff)
                                    sub_5b9df1(i_2, arg1)
                                
                                goto label_5b1d65
                            
                            var_190 -= 1
                    else
                        if (i_9[1] == eax_10.b)
                            if (eax_10.b == 0x25 && i_9[1] == eax_10.b)
                                i_9 = &i_9[1]
                            
                            goto label_5b1ccd
                        
                        int32_t var_1e8_1 = 0
                        char var_1d5_1 = 0
                        int32_t var_1b0_1 = 0
                        int32_t* var_1bc_1 = nullptr
                        uint32_t i_4 = 0
                        char var_1ac_1 = 0
                        char var_1ab_1 = 0
                        char var_1a1_1 = 0
                        char i = 0
                        char var_1aa_1 = 0
                        char var_199_1 = 0
                        char var_189_1 = 1
                        int32_t var_1dc_1 = 0
                        int32_t var_1cc
                        uint32_t var_1c8
                        uint32_t ecx_13
                        
                        do
                            i_9 = &i_9[1]
                            uint32_t ebx_3 = zx.d(*i_9)
                            uint32_t eax_13 = zx.d(ebx_3.b)
                            i_2 = sub_5a8426(eax_13)
                            ecx_13 = eax_13
                            
                            if (i_2 != 0)
                                var_1bc_1 += 1
                                i_4 = i_4 * 0xa + ebx_3 - 0x30
                            else if (ebx_3 s> 0x4e)
                                if (ebx_3 == 0x68)
                                    var_189_1 -= 1
                                    var_199_1 -= 1
                                else if (ebx_3 == 0x6c)
                                    i_2 = &i_9[1]
                                    
                                    if (*i_2 == 0x6c)
                                    label_5b102a:
                                        var_1dc_1 += 1
                                        i_9 = i_2
                                        var_1cc = 0
                                        var_1c8 = 0
                                    else
                                        var_189_1 += 1
                                        var_199_1 += 1
                                else if (ebx_3 == 0x77)
                                    var_199_1 += 1
                                else
                                    i += 1
                            else if (ebx_3 != 0x4e)
                                if (ebx_3 == 0x2a)
                                    var_1a1_1 += 1
                                else if (ebx_3 != 0x46)
                                    if (ebx_3 == 0x49)
                                        ecx_13.b = i_9[1]
                                        
                                        if (ecx_13.b == 0x36)
                                            i_2 = &i_9[2]
                                        
                                        if (ecx_13.b == 0x36 && *i_2 == 0x34)
                                            goto label_5b102a
                                        
                                        if (ecx_13.b == 0x33 && i_9[2] == 0x32)
                                            i_9 = &i_9[2]
                                        else if (ecx_13.b != 0x64 && ecx_13.b != 0x69
                                                && ecx_13.b != 0x6f && ecx_13.b != 0x78
                                                && ecx_13.b != 0x58)
                                            i += 1
                                    else if (ebx_3 != 0x4c)
                                        i += 1
                                    else
                                        var_189_1 += 1
                        while (i == 0)
                        
                        void* i_12 = i_9
                        int32_t* var_204
                        int32_t* esi_2
                        
                        if (var_1a1_1 != 0)
                            esi_2 = nullptr
                        else
                            int32_t* eax_16 = var_1ec
                            esi_2 = *eax_16
                            var_204 = eax_16
                            var_1ec = &eax_16[1]
                        
                        int32_t* var_1c4_1 = esi_2
                        char var_191_1 = 0
                        
                        if (var_199_1 == 0)
                            i_2.b = *i_9
                            
                            if (i_2.b != 0x53)
                                var_199_1 = 0xff
                            
                            if (i_2.b == 0x53 || i_2.b == 0x43)
                                var_199_1 = 1
                        
                        int32_t ebx_5 = zx.d(*i_9) | 0x20
                        int32_t var_1b8_1 = ebx_5
                        
                        if (ebx_5 != 0x6e)
                            if (ebx_5 == 0x63 || ebx_5 == 0x7b)
                                var_190 += 1
                                i_2 = sub_5b0da9(ecx_13, arg1)
                            else
                                i_2 = sub_5b0dbf(&var_190, arg1)
                            
                            i_6 = i_2
                            
                            if (i_2 == 0xffffffff)
                                break
                            
                            esi_2 = var_1c4_1
                            i_9 = i_12
                        
                        int32_t* ecx_26 = var_1bc_1
                        
                        if (ecx_26 != 0 && i_4 == 0)
                        label_5b1d49:
                            cond:5_1 = i_6 == 0xffffffff
                            goto label_5b1d68
                        
                        uint32_t i_8
                        int32_t edi_1
                        
                        if (ebx_5 s<= 0x6f)
                            if (ebx_5 == 0x6f)
                                goto label_5b19f2
                            
                            if (ebx_5 == 0x63)
                                if (ecx_26 == 0)
                                    i_4 += 1
                                    var_1bc_1 = 1
                                
                                goto label_5b15c5
                            
                            if (ebx_5 == 0x64)
                                goto label_5b19f2
                            
                            if (ebx_5 s<= 0x64)
                            label_5b173e:
                                
                                if (zx.d(*i_9) != i_6)
                                    goto label_5b1d49
                                
                                var_1a9_1 -= 1
                                
                                if (var_1a1_1 == 0)
                                    var_1ec = var_204
                            else
                                if (ebx_5 s<= 0x67)
                                    char* ebx_6 = nullptr
                                    
                                    if (i_6 == 0x2d)
                                        *var_1b4 = 0x2d
                                        ebx_6 = 1
                                    label_5b1219:
                                        i_4 -= 1
                                        var_190 += 1
                                        i_6 = sub_5b0da9(ecx_26, arg1)
                                    else if (i_6 == 0x2b)
                                        goto label_5b1219
                                    
                                    if (var_1bc_1 == 0)
                                        i_4 = 0xffffffff
                                    
                                    uint32_t eax_19 = zx.d(i_6.b)
                                    
                                    while (true)
                                        if (sub_5a8426(eax_19) != 0)
                                            uint32_t i_13 = i_4
                                            i_4 -= 1
                                            
                                            if (i_13 != 0)
                                                i_13.b = i_6.b
                                                var_1b0_1 += 1
                                                *(ebx_6 + var_1b4) = i_13.b
                                                ebx_6 = &ebx_6[1]
                                                int32_t eax_20
                                                int32_t ecx_16
                                                eax_20, ecx_16 = sub_5b0d32(&var_1e0, &var_1b4, ebx_6, 
                                                    &var_188, &var_1d4)
                                                
                                                if (eax_20 == 0)
                                                    break
                                                
                                                var_190 += 1
                                                uint32_t i_14 = sub_5b0da9(ecx_16, arg1)
                                                i_6 = i_14
                                                eax_19 = zx.d(i_14.b)
                                                continue
                                        
                                        i_2.b = ***(var_200 + 0xbc)
                                        char var_1ac_2 = i_2.b
                                        
                                        if (i_2.b == i_6.b)
                                            i_2 = i_4
                                            i_4 -= 1
                                            
                                            if (i_2 != 0)
                                                var_190 += 1
                                                i_6 = sub_5b0da9(eax_19, arg1)
                                                uint32_t eax_24
                                                eax_24.b = var_1ac_2
                                                *(ebx_6 + var_1b4) = eax_24.b
                                                ebx_6 = &ebx_6[1]
                                                
                                                if (sub_5b0d32(&var_1e0, &var_1b4, ebx_6, &var_188, 
                                                        &var_1d4) == 0)
                                                    goto label_5b1d7d
                                                
                                                uint32_t eax_26 = zx.d(i_6.b)
                                                
                                                while (sub_5a8426(eax_26) != 0)
                                                    i_2 = i_4
                                                    i_4 -= 1
                                                    
                                                    if (i_2 == 0)
                                                        break
                                                    
                                                    var_1b0_1 += 1
                                                    *(ebx_6 + var_1b4) = i_6.b
                                                    ebx_6 = &ebx_6[1]
                                                    int32_t eax_28
                                                    int32_t ecx_20
                                                    eax_28, ecx_20 = sub_5b0d32(&var_1e0, &var_1b4, 
                                                        ebx_6, &var_188, &var_1d4)
                                                    
                                                    if (eax_28 == 0)
                                                        goto label_5b1d7d
                                                    
                                                    var_190 += 1
                                                    uint32_t i_15 = sub_5b0da9(ecx_20, arg1)
                                                    i_6 = i_15
                                                    eax_26 = zx.d(i_15.b)
                                        
                                        if (var_1b0_1 != 0 && (i_6 == 0x65 || i_6 == 0x45))
                                            uint32_t i_5 = i_4 - 1
                                            
                                            if (i_4 != 0)
                                                *(ebx_6 + var_1b4) = 0x65
                                                ebx_6 = &ebx_6[1]
                                                int32_t* edi_5 = &var_1b4
                                                int32_t* esi_7 = &var_1e0
                                                int32_t eax_30
                                                int32_t ecx_21
                                                eax_30, ecx_21 =
                                                    sub_5b0d32(esi_7, edi_5, ebx_6, &var_188, &var_1d4)
                                                
                                                if (eax_30 != 0)
                                                    var_190 += 1
                                                    uint32_t i_16
                                                    int32_t ecx_22
                                                    i_16, ecx_22 = sub_5b0da9(ecx_21, arg1)
                                                    i_6 = i_16
                                                    
                                                    if (i_16 != 0x2d)
                                                        if (i_6 == 0x2b)
                                                        label_5b148a:
                                                            uint32_t i_17 = i_5
                                                            i_5 -= 1
                                                            
                                                            if (i_17 != 0)
                                                                var_190 += 1
                                                                i_6 = sub_5b0da9(ecx_22, arg1)
                                                            else
                                                                i_5 &= i_17
                                                            
                                                            goto label_5b14b9
                                                        
                                                    label_5b14b9:
                                                        uint32_t eax_36 = zx.d(i_6.b)
                                                        
                                                        while (true)
                                                            if (sub_5a8426(eax_36) == 0)
                                                                goto label_5b1538
                                                            
                                                            i_2 = i_5
                                                            i_5 -= 1
                                                            
                                                            if (i_2 == 0)
                                                                goto label_5b1538
                                                            
                                                            var_1b0_1 += 1
                                                            *(ebx_6 + var_1b4) = i_6.b
                                                            ebx_6 = &ebx_6[1]
                                                            int32_t eax_35
                                                            int32_t ecx_24
                                                            eax_35, ecx_24 = sub_5b0d32(&var_1e0, 
                                                                &var_1b4, ebx_6, &var_188, &var_1d4)
                                                            
                                                            if (eax_35 == 0)
                                                                break
                                                            
                                                            var_190 += 1
                                                            uint32_t i_18 = sub_5b0da9(ecx_24, arg1)
                                                            i_6 = i_18
                                                            eax_36 = zx.d(i_18.b)
                                                    else
                                                        *(ebx_6 + var_1b4) = 0x2d
                                                        ebx_6 = &ebx_6[1]
                                                        int32_t eax_32
                                                        eax_32, ecx_22 = sub_5b0d32(esi_7, edi_5, 
                                                            ebx_6, &var_188, &var_1d4)
                                                        
                                                        if (eax_32 != 0)
                                                            goto label_5b148a
                                                
                                                goto label_5b1d7d
                                        
                                    label_5b1538:
                                        var_190 -= 1
                                        
                                        if (i_6 != 0xffffffff)
                                            sub_5b9df1(i_6, arg1)
                                        
                                        if (var_1b0_1 == 0)
                                            goto label_5b1d7d
                                        
                                        if (var_1a1_1 == 0)
                                            void* eax_37 = var_1b4
                                            result_1 += 1
                                            *(ebx_6 + eax_37) = 0
                                            DecodePointer(data_8b8de4)(sx.d(var_189_1) - 1, var_1c4_1, 
                                                eax_37, &var_200)
                                        
                                        goto label_5b1cae
                                    
                                    break
                                    break
                                    break
                                
                                if (ebx_5 == 0x69)
                                    var_1b8_1 = 0x64
                                label_5b11de:
                                    i_8 = i_6
                                    
                                    if (i_8 == 0x2d)
                                        var_1ab_1 = 1
                                    label_5b1878:
                                        uint32_t i_21 = i_4
                                        i_4 -= 1
                                        
                                        if (i_21 != 1 || ecx_26 == 0)
                                            var_190 += 1
                                            i_2, ecx_26 = sub_5b0da9(ecx_26, arg1)
                                            i_8 = i_2
                                            i_6 = i_8
                                        else
                                            var_191_1 = 1
                                    else if (i_8 == 0x2b)
                                        goto label_5b1878
                                    
                                    if (i_8 != 0x30)
                                        goto label_5b1a40
                                    
                                    var_190 += 1
                                    int32_t ecx_37
                                    i_2, ecx_37 = sub_5b0da9(ecx_26, arg1)
                                    i_8 = i_2
                                    i_6 = i_8
                                    
                                    if (i_8.b == 0x78 || i_8.b == 0x58)
                                        var_190 += 1
                                        i_8 = sub_5b0da9(ecx_37, arg1)
                                        i_6 = i_8
                                        
                                        if (var_1bc_1 != 0)
                                            i_4 -= 2
                                            
                                            if (i_4 s< 1)
                                                var_191_1 += 1
                                        
                                        var_1b8_1 = 0x78
                                        goto label_5b1a40
                                    
                                    var_1b0_1 = 1
                                    
                                    if (var_1b8_1 == 0x78)
                                        var_190 -= 1
                                        
                                        if (i_8 != 0xffffffff)
                                            sub_5b9df1(i_8, arg1)
                                        
                                        i_8 = 0x30
                                        goto label_5b1a33
                                    
                                    if (var_1bc_1 != 0)
                                        uint32_t i_24 = i_4
                                        i_4 -= 1
                                        
                                        if (i_24 == 1)
                                            var_191_1 += 1
                                    
                                    var_1b8_1 = 0x6f
                                    goto label_5b1a40
                                
                                if (ebx_5 != 0x6e)
                                    goto label_5b173e
                                
                                edi_1 = var_190
                                
                                if (var_1a1_1 == 0)
                                    goto label_5b1c7c
                        else if (ebx_5 == 0x70)
                            var_189_1 = 1
                        label_5b19f2:
                            i_8 = i_6
                            
                            if (i_8 != 0x2d)
                                if (i_8 != 0x2b)
                                    goto label_5b1a40
                                
                                goto label_5b1a0b
                            
                            var_1ab_1 = 1
                        label_5b1a0b:
                            uint32_t i_20 = i_4
                            i_4 -= 1
                            
                            if (i_20 != 1 || ecx_26 == 0)
                                var_190 += 1
                                i_8 = sub_5b0da9(ecx_26, arg1)
                            label_5b1a33:
                                i_6 = i_8
                                goto label_5b1a40
                            
                            var_191_1 = 1
                        label_5b1a40:
                            
                            if (var_1dc_1 == 0)
                                edi_1 = var_1e8_1
                                
                                if (var_191_1 == 0)
                                    while (true)
                                        uint32_t i_26
                                        int32_t edi_13
                                        
                                        if (var_1b8_1 != 0x78 && var_1b8_1 != 0x70)
                                            uint32_t i_29 = zx.d(i_8.b)
                                            i_26 = i_29
                                            
                                            if (sub_5a8426(i_29) == 0)
                                                goto label_5b1c26
                                            
                                            if (var_1b8_1 != 0x6f)
                                                edi_13 = edi_1 * 0xa
                                                goto label_5b1bed
                                            
                                            if (i_8 s>= 0x38)
                                                goto label_5b1c26
                                            
                                            edi_13 = edi_1 << 3
                                            goto label_5b1bed
                                        
                                        if (sub_5a84aa(zx.d(i_8.b)) == 0)
                                        label_5b1c26:
                                            var_190 -= 1
                                            
                                            if (i_8 != 0xffffffff)
                                                sub_5b9df1(i_8, arg1)
                                            
                                            break
                                        
                                        uint32_t i_11 = i_8
                                        edi_13 = edi_1 << 4
                                        i_8 = sub_5b0d89(i_11.b)
                                        i_26 = i_11
                                        i_6 = i_8
                                    label_5b1bed:
                                        var_1b0_1 += 1
                                        edi_1 = edi_13 + i_8 - 0x30
                                        
                                        if (var_1bc_1 != 0)
                                            uint32_t i_22 = i_4
                                            i_4 -= 1
                                            
                                            if (i_22 == 1)
                                                break
                                        
                                        var_190 += 1
                                        i_8 = sub_5b0da9(i_26, arg1)
                                        i_6 = i_8
                                
                                if (var_1ab_1 != 0)
                                    edi_1 = neg.d(edi_1)
                            else
                                if (var_191_1 == 0)
                                    while (true)
                                        uint32_t i_25
                                        int32_t esi_10
                                        uint32_t edi_10
                                        
                                        if (var_1b8_1 != 0x78 && var_1b8_1 != 0x70)
                                            uint32_t i_28 = zx.d(i_8.b)
                                            i_25 = i_28
                                            
                                            if (sub_5a8426(i_28) == 0)
                                                goto label_5b1b32
                                            
                                            if (var_1b8_1 != 0x6f)
                                                int32_t eax_58
                                                uint32_t edx_16
                                                eax_58, i_25, edx_16 =
                                                    __allmul(var_1cc, var_1c8, 0xa, 0)
                                                esi_10 = eax_58
                                                edi_10 = edx_16
                                                goto label_5b1ae9
                                            
                                            if (i_8 s>= 0x38)
                                                goto label_5b1b32
                                            
                                            edi_10 = var_1c8 << 3 | var_1cc u>> 0xffffffe3
                                            esi_10 = var_1cc << 3
                                            goto label_5b1ae9
                                        
                                        if (sub_5a84aa(zx.d(i_8.b)) == 0)
                                        label_5b1b32:
                                            var_190 -= 1
                                            
                                            if (i_8 != 0xffffffff)
                                                sub_5b9df1(i_8, arg1)
                                            
                                            break
                                        
                                        edi_10 = var_1c8 << 4 | var_1cc u>> 0xffffffe4
                                        uint32_t i_10 = i_8
                                        esi_10 = var_1cc << 4
                                        i_8 = sub_5b0d89(i_10.b)
                                        i_25 = i_10
                                        i_6 = i_8
                                    label_5b1ae9:
                                        var_1b0_1 += 1
                                        int32_t edx_17
                                        edx_17:i_2 = sx.q(i_8 - 0x30)
                                        var_1cc = esi_10 + i_2
                                        var_1c8 = adc.d(edi_10, edx_17, esi_10 + i_2 u< esi_10)
                                        
                                        if (var_1bc_1 != 0)
                                            uint32_t i_23 = i_4
                                            i_4 -= 1
                                            
                                            if (i_23 == 1)
                                                break
                                        
                                        var_190 += 1
                                        i_8 = sub_5b0da9(i_25, arg1)
                                        i_6 = i_8
                                
                                edi_1 = var_1e8_1
                                
                                if (var_1ab_1 != 0)
                                    uint32_t ecx_45 = neg.d(adc.d(var_1c8, 0, var_1cc != 0))
                                    var_1cc = neg.d(var_1cc)
                                    var_1c8 = ecx_45
                            
                            if (var_1b8_1 == 0x46)
                                var_1b0_1 = 0
                            
                            if (var_1b0_1 == 0)
                                break
                            
                            if (var_1a1_1 == 0)
                                result_1 += 1
                                esi_2 = var_1c4_1
                            label_5b1c7c:
                                
                                if (var_1dc_1 != 0)
                                    *esi_2 = var_1cc
                                    esi_2[1] = var_1c8
                                else if (var_189_1 == 0)
                                    *esi_2 = edi_1.w
                                else
                                    *esi_2 = edi_1
                        else
                            char var_28[0xb]
                            
                            if (ebx_5 == 0x73)
                            label_5b15c5:
                                
                                if (var_199_1 s> 0)
                                    var_1aa_1 = 1
                            else
                                if (ebx_5 == 0x75)
                                    goto label_5b19f2
                                
                                if (ebx_5 == 0x78)
                                    goto label_5b11de
                                
                                if (ebx_5 != 0x7b)
                                    goto label_5b173e
                                
                                if (var_199_1 s> 0)
                                    var_1aa_1 = 1
                                
                                void* i_27 = &i_9[1]
                                
                                if (i_9[1] == 0x5e)
                                    i_27 = &i_9[2]
                                    var_1ac_1 = 0xff
                                
                                int128_t* eax_50
                                uint32_t i_7
                                eax_50, ecx_26, i_7 = sub_5abfc0(&var_28, 0, 0x20)
                                
                                if (*i_27 != 0x5d)
                                    i_7.b = var_1d5_1
                                else
                                    i_7.b = 0x5d
                                    i_27 += 1
                                    char var_1d_1 = 0x20
                                
                                while (true)
                                    eax_50.b = *i_27
                                    
                                    if (eax_50.b == 0x5d)
                                        break
                                    
                                    i_27 += 1
                                    
                                    if (eax_50.b == 0x2d && i_7.b != 0)
                                        ecx_26.b = *i_27
                                        
                                        if (ecx_26.b != 0x5d)
                                            i_27 += 1
                                            char var_189_2
                                            
                                            if (i_7.b u>= ecx_26.b)
                                                var_189_2 = i_7.b
                                                i_7.b = ecx_26.b
                                            else
                                                var_189_2 = ecx_26.b
                                            
                                            if (i_7.b u< var_189_2)
                                                eax_50.b = var_189_2
                                                eax_50.b -= i_7.b
                                                uint32_t edi_8 = zx.d(i_7.b)
                                                i_7 = zx.d(eax_50.b)
                                                uint32_t i_1
                                                
                                                do
                                                    ebx_5.b = 1
                                                    ebx_5.b = 1 << (edi_8.b & 7)
                                                    *(&__saved_ebp + (edi_8 u>> 3) - 0x24) |= ebx_5.b
                                                    edi_8 += 1
                                                    i_1 = i_7
                                                    i_7 -= 1
                                                while (i_1 != 1)
                                                ebx_5 = var_1b8_1
                                            
                                            uint32_t ecx_35 = zx.d(var_189_2)
                                            ecx_26 = ecx_35 & 7
                                            i_7.b = 1
                                            i_7.b = 1 << ecx_26.b
                                            *(&__saved_ebp + (ecx_35 u>> 3) - 0x24) |= i_7.b
                                            i_7.b = 0
                                            continue
                                    
                                    uint32_t ecx_36 = zx.d(eax_50.b)
                                    i_7.b = eax_50.b
                                    ecx_26 = ecx_36 & 7
                                    ebx_5.b = 1
                                    ebx_5.b = 1 << ecx_26.b
                                    *(&__saved_ebp + (ecx_36 u>> 3) - 0x24) |= ebx_5.b
                                    ebx_5 = var_1b8_1
                                
                                if (eax_50.b == 0)
                                    break
                                
                                i_12 = i_27
                                esi_2 = var_1c4_1
                            
                            var_190 -= 1
                            int32_t* edi_7 = esi_2
                            
                            if (i_6 != 0xffffffff)
                                sub_5b9df1(i_6, arg1)
                                ecx_26 = arg1
                            
                            while (true)
                                if (var_1bc_1 != 0)
                                    i_2 = i_4
                                    i_4 -= 1
                                    
                                    if (i_2 == 0)
                                        break
                                
                                var_190 += 1
                                i_2, ecx_26 = sub_5b0da9(ecx_26, arg1)
                                i_6 = i_2
                                
                                if (i_2 != 0xffffffff)
                                    if (ebx_5 == 0x63)
                                    label_5b1687:
                                        
                                        if (var_1a1_1 != 0)
                                            edi_7 += 1
                                            continue
                                        else
                                            if (var_1aa_1 == 0)
                                                *esi_2 = i_2.b
                                                esi_2 += 1
                                            else
                                                char var_1e4 = i_2.b
                                                uint32_t eax_41 = zx.d(i_2.b)
                                                
                                                if (__ismbcl2(eax_41.b) != 0)
                                                    var_190 += 1
                                                    char var_1e3_1 = sub_5b0da9(eax_41, arg1)
                                                
                                                void* eax_44 = var_200
                                                var_1f0 = 0x3f
                                                ecx_26 = sub_5b9254(&var_1f0, &var_1e4, 
                                                    *(eax_44 + 0xac), &var_200)
                                                *esi_2 = var_1f0.w
                                                esi_2 += 2
                                            
                                            var_1c4_1 = esi_2
                                            continue
                                    else if (ebx_5 != 0x73)
                                    label_5b1653:
                                        
                                        if (ebx_5 == 0x7b)
                                            ecx_26 = sx.d(var_28[i_2 s>> 3]) ^ sx.d(var_1ac_1)
                                            ebx_5 = var_1b8_1
                                            
                                            if ((ecx_26 & 1 << (i_2.b & 7)) != 0)
                                                goto label_5b1687
                                    else if (i_2 s< 9 || i_2 s> 0xd)
                                        if (i_2 != 0x20)
                                            goto label_5b1687
                                        
                                        goto label_5b1653
                                
                                var_190 -= 1
                                
                                if (i_2 != 0xffffffff)
                                    sub_5b9df1(i_2, arg1)
                                
                                break
                            
                            if (edi_7 == esi_2)
                                break
                            
                            if (var_1a1_1 == 0)
                                result_1 += 1
                                
                                if (ebx_5 != 0x63)
                                    if (var_1aa_1 == 0)
                                        *var_1c4_1 = 0
                                    else
                                        *var_1c4_1 = 0
                    label_5b1cae:
                        var_1a9_1 += 1
                        i_9 = i_12 + 1
                        i_3 = i_9
                    
                    if (i_6 == 0xffffffff)
                        if (*i_9 != 0x25)
                            break
                        
                        i_2 = i_3
                        
                        if (*(i_2 + 1) != 0x6e)
                            break
                        
                        i_9 = i_2
                else
                    var_190 -= 1
                    uint32_t eax_11 = sub_5b0dbf(&var_190, arg1)
                    
                    if (eax_11 != 0xffffffff)
                        sub_5b9df1(eax_11, arg1)
                    
                    do
                        i_9 = &i_9[1]
                        i_2 = sub_5a852b(zx.d(*i_9))
                    while (i_2 != 0)
                
                i_2.b = *i_9
                
                if (i_2.b == 0)
                    break
            
        label_5b1d7d:
            
            if (var_1d4 == 1)
                __free_base(var_1b4)
            
            if (i_6 != 0xffffffff)
                goto label_5b1dcc
            
            result = result_1
            
            if (result == 0 && var_1a9_1 == result.b)
                result = 0xffffffff
            
            if (var_1f4 != 0)
                *(var_1f8 + 0x70) &= 0xfffffffd
    else
        int32_t eax_4 = __fileno(arg1)
        void* ecx_5
        
        if (eax_4 == 0xffffffff || eax_4 == 0xfffffffe)
            ecx_5 = &data_8b8ea8
        else
            ecx_5 = ((eax_4 & 0x1f) << 6) + (&data_3166ee0)[eax_4 s>> 5]
        
        void* eax_7
        
        if ((*(ecx_5 + 0x24) & 0x7f) == 0)
            if (eax_4 == 0xffffffff || eax_4 == 0xfffffffe)
                eax_7 = &data_8b8ea8
            else
                eax_7 = ((eax_4 & 0x1f) << 6) + (&data_3166ee0)[eax_4 s>> 5]
        
        if ((*(ecx_5 + 0x24) & 0x7f) == 0 && (*(eax_7 + 0x24) & 0x80) == 0)
            goto label_5b0ee1
        
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = 0xffffffff
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
