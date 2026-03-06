// 函数名称: sub_5dc7e0
// 虚拟地址: 0x5dc7e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5dc7e0(int32_t* arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: uint32_t ecx = 0
    uint32_t ecx = 0
    
    if (arg2 != 0)
        char* esi_1 = *arg2
        
        if (esi_1 != 0)
            if (arg4 != 0)
                int32_t* edx_1 = *arg4
                
                if (edx_1 != 0 && arg5 != 0)
                    int32_t eax_3 = *arg5
                    
                    if (eax_3 != 0)
                        char* edi = esi_1
                        int32_t var_c
                        
                        if (arg3 == 0)
                            var_c = 0
                        else
                            var_c = *arg3
                        
                        int32_t var_8 = eax_3
                        int32_t eax_5 = *arg1
                        
                        if (eax_5 == 4)
                            uint32_t ebx_4 = var_c u>> 1
                            char* esi_5 = edi
                            
                            if (ebx_4 == 0)
                            label_5dc900:
                                *arg1 = 6
                            else
                                while (true)
                                    eax_5.b = *esi_5
                                    
                                    if (eax_5.b == 0xff && esi_5[1] == 0xfe)
                                        *arg1 = 5
                                        break
                                    
                                    if (eax_5.b == 0xfe && esi_5[1] == 0xff)
                                        *arg1 = 6
                                        break
                                    
                                    esi_5 = &esi_5[2]
                                    uint32_t temp0_1 = ebx_4
                                    ebx_4 -= 1
                                    
                                    if (temp0_1 == 1)
                                        goto label_5dc900_1
                                
                                if (ebx_4 == 0)
                                label_5dc900_1:
                                    *arg1 = 6
                        else if (eax_5 == 7)
                            uint32_t ebx_2 = var_c u>> 2
                            
                            if (ebx_2 == 0)
                                *arg1 = 9
                            else
                                char* esi_4 = &edi[2]
                                
                                while (true)
                                    eax_5.b = esi_4[0xfffffffe]
                                    
                                    if (eax_5.b == 0xff && esi_4[0xffffffff] == 0xfe && *esi_4 == 0
                                            && esi_4[1] == 0)
                                        *arg1 = 8
                                        break
                                    
                                    if (eax_5.b == 0 && esi_4[0xffffffff] == 0 && *esi_4 == 0xfe
                                            && esi_4[1] == 0xff)
                                        *arg1 = 9
                                        break
                                    
                                    esi_4 = &esi_4[4]
                                    uint32_t temp1_1 = ebx_2
                                    ebx_2 -= 1
                                    
                                    if (temp1_1 == 1)
                                        *arg1 = 9
                                        goto label_5dc906
                                
                                if (ebx_2 == 0)
                                    *arg1 = 9
                        
                    label_5dc906:
                        int32_t* esi_6 = arg1
                        int32_t eax_13 = esi_6[1]
                        
                        if (eax_13 != 4)
                            if (eax_13 != 7)
                                goto label_5dc959
                            
                            if (var_8 u>= 4)
                                *edx_1 = 0xfeff
                                edx_1 = &edx_1[1]
                                var_8 -= 4
                                esi_6[1] = 9
                                goto label_5dc959
                        else if (var_8 u>= 2)
                            *edx_1 = 0xfeff
                            edx_1 += 2
                            var_8 -= 2
                            esi_6[1] = 6
                        label_5dc959:
                            int32_t ebx_5 = var_c
                            int32_t result = 0
                            
                            if (ebx_5 == 0)
                                return 0
                            
                            while (true)
                                uint16_t eax_25
                                uint32_t eax_34
                                uint32_t ecx_21
                                int32_t ebx_7
                                uint16_t esi_7
                                
                                switch (*esi_6 - 1)
                                    case 0
                                        ecx = zx.d(*edi) & 0x7f
                                        edi = &edi[1]
                                        var_c = ebx_5 - 1
                                    case 1
                                        ecx = zx.d(*edi)
                                        edi = &edi[1]
                                        var_c = ebx_5 - 1
                                    case 2
                                        int32_t eax_16
                                        eax_16.b = *edi
                                        int32_t i = 0
                                        char* var_18_1 = edi
                                        int32_t var_10_1 = 0
                                        
                                        if (eax_16.b u>= 0xfc)
                                            ecx.b = eax_16.b
                                            ecx.b &= 0xfe
                                            
                                            if (ecx.b == 0xfc)
                                                if (eax_16.b == 0xfc && var_c u> 1)
                                                    ecx.b = edi[1]
                                                    ecx.b &= eax_16.b
                                                    
                                                    if (ecx.b == 0x80)
                                                        var_10_1 = 1
                                                
                                                ecx = zx.d(eax_16.b) & 1
                                                i = 5
                                            else
                                                ecx = 0xfffd
                                        else if (eax_16.b u>= 0xf8)
                                            ecx.b = eax_16.b
                                            ecx.b &= 0xfc
                                            
                                            if (ecx.b == 0xf8)
                                                if (eax_16.b == 0xf8 && var_c u> 1)
                                                    ecx.b = edi[1]
                                                    ecx.b &= eax_16.b
                                                    
                                                    if (ecx.b == 0x80)
                                                        var_10_1 = 1
                                                
                                                ecx = zx.d(eax_16.b) & 3
                                                i = 4
                                            else
                                                ecx = 0xfffd
                                        else if (eax_16.b u>= 0xf0)
                                            ecx.b = eax_16.b
                                            ecx.b &= 0xf8
                                            
                                            if (ecx.b == 0xf0)
                                                if (eax_16.b == 0xf0 && var_c u> 1)
                                                    ecx.b = edi[1]
                                                    ecx.b &= eax_16.b
                                                    
                                                    if (ecx.b == 0x80)
                                                        var_10_1 = 1
                                                
                                                ecx = zx.d(eax_16.b) & 7
                                                i = 3
                                            else
                                                ecx = 0xfffd
                                        else if (eax_16.b u>= 0xe0)
                                            ecx.b = eax_16.b
                                            ecx.b &= 0xf0
                                            
                                            if (ecx.b == 0xe0)
                                                if (eax_16.b == 0xe0 && var_c u> 1)
                                                    ecx.b = edi[1]
                                                    ecx.b &= eax_16.b
                                                    
                                                    if (ecx.b == 0x80)
                                                        var_10_1 = 1
                                                
                                                ecx = zx.d(eax_16.b) & 0xf
                                                i = 2
                                            else
                                                ecx = 0xfffd
                                        else if (eax_16.b u< 0xc0)
                                            ecx = 0xfffd
                                            
                                            if (eax_16.b s>= 0)
                                                ecx = zx.d(eax_16.b)
                                        else
                                            ecx.b = eax_16.b
                                            ecx.b &= 0xe0
                                            
                                            if (ecx.b == 0xc0)
                                                ecx.b = eax_16.b
                                                ecx.b &= 0xde
                                                
                                                if (ecx.b == 0xc0)
                                                    var_10_1 = 1
                                                
                                                ecx = zx.d(eax_16.b) & 0x1f
                                                i = 1
                                            else
                                                ecx = 0xfffd
                                        
                                        int32_t eax_18 = var_c - 1
                                        edi = &edi[1]
                                        var_c = eax_18
                                        
                                        if (eax_18 u< i)
                                            return 0xfffffffc
                                        
                                        while (i != 0)
                                            void* eax_20 = &var_18_1[1]
                                            var_18_1 = eax_20
                                            eax_20.b = *eax_20
                                            ebx_5.b = eax_20.b
                                            ebx_5.b &= 0xc0
                                            i -= 1
                                            
                                            if (ebx_5.b != 0x80)
                                                ecx = 0xfffd
                                                break
                                            
                                            var_c -= 1
                                            ecx = ecx << 6 | (zx.d(eax_20.b) & 0x3f)
                                            edi = &edi[1]
                                        
                                        if (var_10_1 != 0)
                                            ecx = 0xfffd
                                        else if (ecx u< 0xd800)
                                            if (ecx == 0xfffe || ecx == 0xffff || ecx u> 0x10ffff)
                                                ecx = 0xfffd
                                        else if (ecx u<= 0xdfff || ecx == 0xfffe || ecx == 0xffff
                                                || ecx u> 0x10ffff)
                                            ecx = 0xfffd
                                    case 4
                                        if (ebx_5 u< 2)
                                            return 0xfffffffc
                                        
                                        ecx = zx.d(zx.w(*edi) << 8) | zx.d(edi[1])
                                        ebx_7 = ebx_5 - 2
                                        edi = &edi[2]
                                        var_c = ebx_7
                                        
                                        if (ecx.w + 0x2800 u<= 0x7ff)
                                            if (ecx.w u<= 0xdbff)
                                                if (ebx_7 u< 2)
                                                    return 0xfffffffc
                                                
                                                eax_25 = zx.w(*edi)
                                                esi_7 = zx.w(edi[1])
                                            label_5dcbd9:
                                                uint32_t eax_26 = zx.d(eax_25 << 8) | zx.d(esi_7)
                                                var_c = ebx_7 - 2
                                                edi = &edi[2]
                                                
                                                if (eax_26.w + 0x2400 u> 0x3ff)
                                                    ecx = 0xfffd
                                                else
                                                    ecx = ((ecx & 0x3ff) << 0xa | (eax_26 & 0x3ff))
                                                        + 0x10000
                                            else
                                                ecx = 0xfffd
                                    case 5
                                        if (ebx_5 u< 2)
                                            return 0xfffffffc
                                        
                                        ecx = zx.d(zx.w(edi[1]) << 8) | zx.d(*edi)
                                        ebx_7 = ebx_5 - 2
                                        edi = &edi[2]
                                        var_c = ebx_7
                                        
                                        if (ecx.w + 0x2800 u<= 0x7ff)
                                            if (ecx.w u<= 0xdbff)
                                                if (ebx_7 u< 2)
                                                    return 0xfffffffc
                                                
                                                eax_25 = zx.w(edi[1])
                                                esi_7 = zx.w(*edi)
                                                goto label_5dcbd9
                                            
                                            ecx = 0xfffd
                                    case 7, 0xb
                                        if (ebx_5 u< 4)
                                            return 0xfffffffc
                                        
                                        ecx_21 = (zx.d(*edi) << 8 | zx.d(edi[1])) << 8 | zx.d(edi[2])
                                        eax_34 = zx.d(edi[3])
                                    label_5dcced:
                                        ecx = ecx_21 << 8 | eax_34
                                        edi = &edi[4]
                                        var_c = ebx_5 - 4
                                    case 8, 0xc
                                        if (ebx_5 u< 4)
                                            return 0xfffffffc
                                        
                                        ecx_21 = (zx.d(edi[3]) << 8 | zx.d(edi[2])) << 8 | zx.d(edi[1])
                                        eax_34 = zx.d(*edi)
                                        goto label_5dcced
                                    case 9
                                        if (ebx_5 u< 2)
                                            return 0xfffffffc
                                        
                                        ecx = zx.d(*edi) << 8 | zx.d(edi[1])
                                        edi = &edi[2]
                                        var_c = ebx_5 - 2
                                    case 0xa
                                        if (ebx_5 u< 2)
                                            return 0xfffffffc
                                        
                                        ecx = zx.d(edi[1]) << 8 | zx.d(*edi)
                                        edi = &edi[2]
                                        var_c = ebx_5 - 2
                                
                                uint8_t eax_41
                                int32_t esi_9
                                
                                switch (arg1[1] - 1)
                                    case 0
                                        if (var_8 u< 1)
                                            break
                                        
                                        if (ecx u<= 0x7f)
                                        label_5dcd74:
                                            *edx_1 = ecx.b
                                            edx_1 += 1
                                            var_8 -= 1
                                        else
                                            *edx_1 = 0x3f
                                            edx_1 += 1
                                            var_8 -= 1
                                    case 1
                                        if (var_8 u< 1)
                                            break
                                        
                                        if (ecx u<= 0xff)
                                            goto label_5dcd74
                                        
                                        *edx_1 = 0x3f
                                        edx_1 += 1
                                        var_8 -= 1
                                    case 2
                                        if (ecx u<= 0x10ffff)
                                            if (ecx u<= 0x7f)
                                                if (var_8 u< 1)
                                                    break
                                                
                                                goto label_5dcd74
                                            
                                            if (ecx u<= 0x7ff)
                                                esi_9 = 2
                                                
                                                if (var_8 u< 2)
                                                    break
                                                
                                                *edx_1 = ((ecx u>> 6).b & 0x1f) | 0xc0
                                                eax_41 = (ecx.b & 0x3f) | 0x80
                                                goto label_5dd083
                                            
                                            if (ecx u<= 0xffff)
                                                goto label_5dcdb4
                                            
                                            if (ecx u<= 0x1fffff)
                                                esi_9 = 4
                                                
                                                if (var_8 u< 4)
                                                    break
                                                
                                                *edx_1 = ((ecx u>> 0x12).b & 7) | 0xf0
                                                *(edx_1 + 1) = ((ecx u>> 0xc).b & 0x3f) | 0x80
                                                *(edx_1 + 2) = ((ecx u>> 6).b & 0x3f) | 0x80
                                                *(edx_1 + 3) = (ecx.b & 0x3f) | 0x80
                                            else if (ecx u> 0x3ffffff)
                                                esi_9 = 6
                                                
                                                if (var_8 u< 6)
                                                    break
                                                
                                                *edx_1 = ((ecx u>> 0x1e).b & 1) | 0xfc
                                                *(edx_1 + 1) = ((ecx u>> 0x18).b & 0x3f) | 0x80
                                                *(edx_1 + 2) = ((ecx u>> 0x12).b & 0x3f) | 0x80
                                                *(edx_1 + 3) = ((ecx u>> 0xc).b & 0x3f) | 0x80
                                                edx_1[1].b = ((ecx u>> 6).b & 0x3f) | 0x80
                                                *(edx_1 + 5) = (ecx.b & 0x3f) | 0x80
                                            else
                                                esi_9 = 5
                                                
                                                if (var_8 u< 5)
                                                    break
                                                
                                                *edx_1 = ((ecx u>> 0x18).b & 3) | 0xf8
                                                *(edx_1 + 1) = ((ecx u>> 0x12).b & 0x3f) | 0x80
                                                *(edx_1 + 2) = ((ecx u>> 0xc).b & 0x3f) | 0x80
                                                *(edx_1 + 3) = ((ecx u>> 6).b & 0x3f) | 0x80
                                                edx_1[1].b = (ecx.b & 0x3f) | 0x80
                                            
                                            edx_1 += esi_9
                                            var_8 -= esi_9
                                        else
                                            ecx = 0xfffd
                                        label_5dcdb4:
                                            esi_9 = 3
                                            
                                            if (var_8 u< 3)
                                                break
                                            
                                            *edx_1 = ((ecx u>> 0xc).b & 0xf) | 0xe0
                                            *(edx_1 + 1) = ((ecx u>> 6).b & 0x3f) | 0x80
                                            *(edx_1 + 2) = (ecx.b & 0x3f) | 0x80
                                            edx_1 += esi_9
                                            var_8 -= esi_9
                                    case 4
                                        if (ecx u<= 0x10ffff)
                                            if (ecx u< 0x10000)
                                                goto label_5dceef
                                            
                                            esi_9 = 4
                                            
                                            if (var_8 u< 4)
                                                break
                                            
                                            ecx -= 0x10000
                                            int32_t ebx_11 = (ecx & 0x3ff) | 0xdc00
                                            int32_t eax_75 = (ecx u>> 0xa & 0x3ff) | 0xd800
                                            *(edx_1 + 1) = eax_75.b
                                            *edx_1 = (eax_75 u>> 8).b
                                            *(edx_1 + 2) = (ebx_11 u>> 8).b
                                            *(edx_1 + 3) = ebx_11.b
                                            edx_1 += esi_9
                                            var_8 -= esi_9
                                        else
                                            ecx = 0xfffd
                                        label_5dceef:
                                            esi_9 = 2
                                            
                                            if (var_8 u< 2)
                                                break
                                            
                                            *edx_1 = (ecx u>> 8).b
                                            *(edx_1 + 1) = ecx.b
                                            edx_1 += esi_9
                                            var_8 -= esi_9
                                    case 5
                                        if (ecx u<= 0x10ffff)
                                            if (ecx u< 0x10000)
                                                goto label_5dcf70
                                            
                                            esi_9 = 4
                                            
                                            if (var_8 u< 4)
                                                break
                                            
                                            ecx -= 0x10000
                                            int32_t ebx_18 = (ecx & 0x3ff) | 0xdc00
                                            int32_t eax_81 = (ecx u>> 0xa & 0x3ff) | 0xd800
                                            *edx_1 = eax_81.b
                                            *(edx_1 + 1) = (eax_81 u>> 8).b
                                            *(edx_1 + 3) = (ebx_18 u>> 8).b
                                            *(edx_1 + 2) = ebx_18.b
                                            edx_1 += esi_9
                                            var_8 -= esi_9
                                        else
                                            ecx = 0xfffd
                                        label_5dcf70:
                                            esi_9 = 2
                                            
                                            if (var_8 u< 2)
                                                break
                                            
                                        label_5dd07e:
                                            eax_41 = (ecx u>> 8).b
                                            *edx_1 = ecx.b
                                        label_5dd083:
                                            *(edx_1 + 1) = eax_41
                                            edx_1 += esi_9
                                            var_8 -= esi_9
                                    case 7
                                        if (ecx u<= 0x10ffff && ecx u<= 0x7fffffff)
                                            goto label_5dd01f
                                        
                                    label_5dd01a:
                                        ecx = 0xfffd
                                    label_5dd01f:
                                        esi_9 = 4
                                        
                                        if (var_8 u< 4)
                                            break
                                        
                                        *edx_1 = (ecx u>> 0x18).b
                                        *(edx_1 + 1) = (ecx u>> 0x10).b
                                        *(edx_1 + 2) = (ecx u>> 8).b
                                        *(edx_1 + 3) = ecx.b
                                        edx_1 += esi_9
                                        var_8 -= esi_9
                                    case 8
                                        if (ecx u<= 0x10ffff && ecx u<= 0x7fffffff)
                                            goto label_5dd05e
                                        
                                    label_5dd059:
                                        ecx = 0xfffd
                                    label_5dd05e:
                                        esi_9 = 4
                                        
                                        if (var_8 u< 4)
                                            break
                                        
                                        *(edx_1 + 3) = (ecx u>> 0x18).b
                                        *(edx_1 + 2) = (ecx u>> 0x10).b
                                        goto label_5dd07e
                                    case 9
                                        if (ecx u> 0xffff)
                                            ecx = 0xfffd
                                        
                                        goto label_5dceef
                                    case 0xa
                                        if (ecx u> 0xffff)
                                            ecx = 0xfffd
                                        
                                        esi_9 = 2
                                        
                                        if (var_8 u< 2)
                                            break
                                        
                                        goto label_5dd07e
                                    case 0xb
                                        if (ecx u<= 0x7fffffff)
                                            goto label_5dd01f
                                        
                                        goto label_5dd01a
                                    case 0xc
                                        if (ecx u<= 0x7fffffff)
                                            goto label_5dd05e
                                        
                                        goto label_5dd059
                                
                                ebx_5 = var_c
                                result += 1
                                *arg2 = edi
                                *arg3 = ebx_5
                                *arg4 = edx_1
                                *arg5 = var_8
                                
                                if (ebx_5 == 0)
                                    return result
                                
                                esi_6 = arg1
            
            return 0xfffffffe
    
    return 0
}
