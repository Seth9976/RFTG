// 函数名称: sub_6754d0
// 虚拟地址: 0x6754d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6754d0(char** arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* edx = arg1
    int32_t* edx = arg1
    
    if (edx != 0)
        int32_t* esi_1 = edx[7]
        
        if (esi_1 != 0 && edx[3] != 0 && (*edx != 0 || edx[1] == 0))
            if (*esi_1 == 0xb)
                *esi_1 = 0xc
            
            uint32_t var_14 = edx[4]
            uint32_t ecx_1 = edx[1]
            uint32_t var_8 = ecx_1
            uint32_t ebx = esi_1[0xe]
            uint32_t var_24 = var_14
            void* ecx_3 = *esi_1
            int128_t* var_1c = edx[3]
            char* eax_1 = *edx
            int32_t i = esi_1[0xf]
            char* var_c = eax_1
            int32_t result = 0
            
            if (ecx_3 u> 0x1e)
                return 0xfffffffe
            
            while (true)
                char var_18
                
                switch (ecx_3)
                    case nullptr
                        if (esi_1[2] == 0)
                            *esi_1 = 0xc
                        label_6767f7:
                            ecx_3 = *esi_1
                            
                            if (ecx_3 u> 0x1e)
                                return 0xfffffffe
                            
                            edx = arg1
                            continue
                        
                        while (i u< 0x10)
                            if (var_8 == 0)
                                goto label_676854
                            
                            var_8 -= 1
                            uint32_t edx_2 = zx.d(*eax_1) << i.b
                            eax_1 = &eax_1[1]
                            i += 8
                            var_c = eax_1
                            ebx += edx_2
                        
                        if ((esi_1[2].b & 2) != 0 && ebx == 0x8b1f)
                            esi_1[6] = sub_673170(0, nullptr, 0)
                            var_18.w = ebx.w
                            esi_1[6] = sub_673170(esi_1[6], &var_18, 2)
                            eax_1 = var_c
                            ebx = 0
                            i = 0
                            *esi_1 = 1
                            goto label_6767f7
                        
                        void* eax_5 = esi_1[8]
                        esi_1[4] = 0
                        
                        if (eax_5 != 0)
                            *(eax_5 + 0x30) = 0xffffffff
                        
                        if ((esi_1[2].b & 1) == 0
                                || modu.dp.d(0:((zx.d(ebx.b) << 8) + (ebx u>> 8)), 0x1f) != 0)
                            eax_1 = var_c
                            arg1[6] = "incorrect header check"
                            goto label_6767f1
                        
                        if ((ebx.b & 0xf) != 8)
                            arg1[6] = "unknown compression method"
                            eax_1 = var_c
                            goto label_6767f1
                        
                        int32_t eax_11 = esi_1[9]
                        ebx u>>= 4
                        i -= 4
                        
                        if (eax_11 == 0)
                            esi_1[9] = (ebx & 0xf) + 8
                        else if ((ebx & 0xf) + 8 u> eax_11)
                            eax_1 = var_c
                            arg1[6] = "invalid window size"
                            goto label_6767f1
                        
                        esi_1[5] = 1 << ((ebx & 0xf) + 8).b
                        void* eax_12 = sub_6783e0(0, nullptr, 0)
                        esi_1[6] = eax_12
                        arg1[0xc] = eax_12
                        eax_1 = var_c
                        *esi_1 = (not.d(ebx u>> 8) & 2) | 9
                        ebx = 0
                        i = 0
                        goto label_6767f7
                    case 1
                        while (i u< 0x10)
                            if (var_8 == 0)
                                goto label_676854
                            
                            var_8 -= 1
                            uint32_t edx_11 = zx.d(*eax_1) << i.b
                            eax_1 = &eax_1[1]
                            i += 8
                            var_c = eax_1
                            ebx += edx_11
                        
                        esi_1[4] = ebx
                        
                        if (ebx.b != 8)
                            arg1[6] = "unknown compression method"
                        label_6767f1:
                            *esi_1 = 0x1d
                            goto label_6767f7
                        
                        if ((ebx & 0xe000) != 0)
                            arg1[6] = "unknown header flags set"
                            goto label_6767f1
                        
                        int32_t* ecx_13 = esi_1[8]
                        
                        if (ecx_13 != 0)
                            *ecx_13 = ebx u>> 8 & 1
                        
                        if ((esi_1[4] & 0x200) != 0)
                            var_18 = ebx.b
                            uint8_t var_17_1 = (ebx u>> 8).b
                            esi_1[6] = sub_673170(esi_1[6], &var_18, 2)
                            eax_1 = var_c
                        
                        ebx = 0
                        i = 0
                        *esi_1 = 2
                        goto label_675770
                    case 2
                        if (i u< 0x20)
                        label_675770:
                            
                            do
                                if (var_8 == 0)
                                    goto label_676854
                                
                                var_8 -= 1
                                uint32_t edx_17 = zx.d(*eax_1) << i.b
                                eax_1 = &eax_1[1]
                                i += 8
                                var_c = eax_1
                                ebx += edx_17
                            while (i u< 0x20)
                        
                        void* ecx_16 = esi_1[8]
                        
                        if (ecx_16 != 0)
                            *(ecx_16 + 4) = ebx
                        
                        if ((esi_1[4] & 0x200) != 0)
                            var_18 = ebx.b
                            uint8_t var_17_2 = (ebx u>> 8).b
                            uint8_t var_16_1 = (ebx u>> 0x10).b
                            uint8_t var_15_1 = (ebx u>> 0x18).b
                            esi_1[6] = sub_673170(esi_1[6], &var_18, 4)
                            eax_1 = var_c
                        
                        ebx = 0
                        i = 0
                        *esi_1 = 3
                        goto label_6757f0
                    case 3
                        if (i u< 0x10)
                        label_6757f0:
                            
                            do
                                if (var_8 == 0)
                                    goto label_676854
                                
                                var_8 -= 1
                                uint32_t edx_19 = zx.d(*eax_1) << i.b
                                eax_1 = &eax_1[1]
                                i += 8
                                var_c = eax_1
                                ebx += edx_19
                            while (i u< 0x10)
                        
                        void* ecx_20 = esi_1[8]
                        
                        if (ecx_20 != 0)
                            *(ecx_20 + 8) = zx.d(ebx.b)
                            *(esi_1[8] + 0xc) = ebx u>> 8
                        
                        if ((esi_1[4] & 0x200) != 0)
                            var_18 = ebx.b
                            uint8_t var_17_3 = (ebx u>> 8).b
                            esi_1[6] = sub_673170(esi_1[6], &var_18, 2)
                            eax_1 = var_c
                        
                        ebx = 0
                        i = 0
                        *esi_1 = 4
                        goto label_67584a
                    case 4
                    label_67584a:
                        
                        if ((esi_1[4] & 0x400) == 0)
                            void* ecx_27 = esi_1[8]
                            
                            if (ecx_27 != 0)
                                *(ecx_27 + 0x10) = 0
                        else
                            while (i u< 0x10)
                                if (var_8 == 0)
                                    goto label_676854
                                
                                var_8 -= 1
                                uint32_t edx_24 = zx.d(*eax_1) << i.b
                                eax_1 = &eax_1[1]
                                i += 8
                                var_c = eax_1
                                ebx += edx_24
                            
                            void* ecx_25 = esi_1[8]
                            esi_1[0x10] = ebx
                            
                            if (ecx_25 != 0)
                                *(ecx_25 + 0x14) = ebx
                            
                            if ((esi_1[4] & 0x200) != 0)
                                var_18 = ebx.b
                                uint8_t var_17_4 = (ebx u>> 8).b
                                esi_1[6] = sub_673170(esi_1[6], &var_18, 2)
                                eax_1 = var_c
                            
                            ebx = 0
                            i = 0
                        
                        *esi_1 = 5
                    label_6758cb:
                        
                        if ((esi_1[4] & 0x400) != 0)
                            uint32_t ecx_28 = esi_1[0x10]
                            uint32_t var_10_1 = ecx_28
                            
                            if (ecx_28 u> var_8)
                                ecx_28 = var_8
                                var_10_1 = var_8
                            
                            if (ecx_28 != 0)
                                void* edx_26 = esi_1[8]
                                
                                if (edx_26 != 0)
                                    void* edx_27 = *(edx_26 + 0x10)
                                    
                                    if (edx_27 != 0)
                                        void* edx_28 = esi_1[8]
                                        int32_t eax_21 = *(edx_28 + 0x14) - esi_1[0x10]
                                        int32_t edx_29 = *(edx_28 + 0x18)
                                        
                                        if (eax_21 + ecx_28 u> edx_29)
                                            ecx_28 = edx_29 - eax_21
                                        
                                        sub_5ab990(edx_27 + eax_21, var_c, ecx_28)
                                        ecx_28 = var_10_1
                                        eax_1 = var_c
                                
                                if ((esi_1[4] & 0x200) != 0)
                                    ecx_28 = var_10_1
                                    esi_1[6] = sub_673170(esi_1[6], var_c, var_10_1)
                                    eax_1 = var_c
                                
                                var_8 -= ecx_28
                                eax_1 = &eax_1[ecx_28]
                                esi_1[0x10] -= ecx_28
                                var_c = eax_1
                        
                        if ((esi_1[4] & 0x400) != 0 && esi_1[0x10] != 0)
                            goto label_676854
                        
                        esi_1[0x10] = 0
                        *esi_1 = 6
                    label_675974:
                        
                        if ((esi_1[4] & 0x800) == 0)
                            void* ecx_36 = esi_1[8]
                            
                            if (ecx_36 != 0)
                                *(ecx_36 + 0x1c) = 0
                            
                            goto label_675a19
                        
                        if (var_8 == 0)
                            goto label_676854
                        
                        void* ecx_31 = nullptr
                        void* ecx_32
                        uint32_t edx_34
                        
                        do
                            edx_34 = zx.d(*(ecx_31 + eax_1))
                            ecx_32 = ecx_31 + 1
                            void* ecx_33 = esi_1[8]
                            
                            if (ecx_33 != 0)
                                char* edx_35 = *(ecx_33 + 0x1c)
                                
                                if (edx_35 != 0)
                                    int32_t edx_36 = esi_1[0x10]
                                    
                                    if (edx_36 u< *(ecx_33 + 0x20))
                                        ecx_33.b = edx_34.b
                                        edx_35[edx_36] = ecx_33.b
                                        esi_1[0x10] += 1
                                        eax_1 = var_c
                            
                            if (edx_34 == 0)
                                break
                            
                            ecx_31 = ecx_32
                        while (ecx_31 u< var_8)
                        
                        if ((esi_1[4] & 0x200) != 0)
                            esi_1[6] = sub_673170(esi_1[6], var_c, ecx_32)
                            eax_1 = var_c
                        
                        var_8 -= ecx_32
                        eax_1 += ecx_32
                        var_c = eax_1
                        
                        if (edx_34 != 0)
                            goto label_676854
                        
                    label_675a19:
                        esi_1[0x10] = 0
                        *esi_1 = 7
                    label_675a26:
                        
                        if ((esi_1[4] & 0x1000) == 0)
                            ecx_3 = esi_1[8]
                            
                            if (ecx_3 != 0)
                                *(ecx_3 + 0x24) = 0
                            
                            goto label_675ac9
                        
                        if (var_8 == 0)
                            goto label_676854
                        
                        void* ecx_37 = nullptr
                        void* ecx_38
                        uint32_t edx_38
                        
                        do
                            edx_38 = zx.d(*(ecx_37 + eax_1))
                            ecx_38 = ecx_37 + 1
                            void* ecx_39 = esi_1[8]
                            
                            if (ecx_39 != 0)
                                char* edx_39 = *(ecx_39 + 0x24)
                                
                                if (edx_39 != 0)
                                    int32_t edx_40 = esi_1[0x10]
                                    
                                    if (edx_40 u< *(ecx_39 + 0x28))
                                        ecx_39.b = edx_38.b
                                        edx_39[edx_40] = ecx_39.b
                                        esi_1[0x10] += 1
                                        eax_1 = var_c
                            
                            if (edx_38 == 0)
                                break
                            
                            ecx_37 = ecx_38
                        while (ecx_37 u< var_8)
                        
                        if ((esi_1[4] & 0x200) != 0)
                            esi_1[6] = sub_673170(esi_1[6], var_c, ecx_38)
                            eax_1 = var_c
                        
                        var_8 -= ecx_38
                        eax_1 += ecx_38
                        var_c = eax_1
                        
                        if (edx_38 != 0)
                            goto label_676854
                        
                    label_675ac9:
                        *esi_1 = 8
                    label_675ad6:
                        
                        if ((esi_1[4] & 0x200) != 0)
                            while (i u< 0x10)
                                if (var_8 == 0)
                                    goto label_676854
                                
                                var_8 -= 1
                                uint32_t edx_43 = zx.d(*eax_1) << i.b
                                eax_1 = &eax_1[1]
                                i += 8
                                var_c = eax_1
                                ebx += edx_43
                            
                            if (ebx != zx.d(esi_1[6].w))
                                arg1[6] = "header crc mismatch"
                                goto label_6767f1
                            
                            ebx = 0
                            i = 0
                        
                        void* eax_31 = esi_1[8]
                        
                        if (eax_31 != 0)
                            *(eax_31 + 0x2c) = esi_1[4] s>> 9 & 1
                            *(esi_1[8] + 0x30) = 1
                        
                        int32_t eax_32 = sub_673170(0, nullptr, 0)
                        esi_1[6] = eax_32
                        arg1[0xc] = eax_32
                        eax_1 = var_c
                        *esi_1 = 0xb
                        goto label_6767f7
                    case 5
                        goto label_6758cb
                    case 6
                        goto label_675974
                    case 7
                        goto label_675a26
                    case 8
                        goto label_675ad6
                    case 9
                        while (i u< 0x20)
                            if (var_8 == 0)
                                goto label_676854
                            
                            var_8 -= 1
                            uint32_t edx_47 = zx.d(*eax_1) << i.b
                            eax_1 = &eax_1[1]
                            i += 8
                            var_c = eax_1
                            ebx += edx_47
                        
                        edx = arg1
                        int32_t ecx_54 = (((ebx & 0xff00) + (ebx << 0x10)) << 8) + (ebx u>> 8 & 0xff00)
                            + (ebx u>> 0x18)
                        esi_1[6] = ecx_54
                        edx[0xc] = ecx_54
                        ebx = 0
                        i = 0
                        *esi_1 = 0xa
                        goto label_675bbd
                    case 0xa
                    label_675bbd:
                        
                        if (esi_1[3] == 0)
                            *edx = eax_1
                            edx[3] = var_1c
                            edx[1] = var_8
                            edx[4] = var_14
                            esi_1[0xf] = i
                            esi_1[0xe] = ebx
                            return 2
                        
                        void* eax_33 = sub_6783e0(0, nullptr, 0)
                        esi_1[6] = eax_33
                        arg1[0xc] = eax_33
                        eax_1 = var_c
                        *esi_1 = 0xb
                    label_675bea:
                        
                        if (arg2 == 5 || arg2 == 6)
                            goto label_676854
                        
                        goto label_675bfc
                    case 0xb
                        goto label_675bea
                    case 0xc
                    label_675bfc:
                        
                        if (esi_1[1] != 0)
                            int32_t ecx_58 = i & 7
                            ebx u>>= ecx_58.b
                            i -= ecx_58
                            *esi_1 = 0x1a
                            goto label_6767f7
                        
                        while (i u< 3)
                            if (var_8 == 0)
                                goto label_676854
                            
                            var_8 -= 1
                            uint32_t edx_54 = zx.d(*eax_1) << i.b
                            eax_1 = &eax_1[1]
                            i += 8
                            var_c = eax_1
                            ebx += edx_54
                        
                        uint32_t ebx_10 = ebx u>> 1
                        esi_1[1] = ebx & 1
                        int32_t ecx_63 = ebx_10 & 3
                        
                        if (ecx_63 u> 3)
                            goto label_675cc2
                        
                        switch (ecx_63)
                            case 0
                                ebx = ebx_10 u>> 2
                                *esi_1 = 0xd
                                i -= 3
                                goto label_6767f7
                            case 1
                                esi_1[0x13] = 0x832ed0
                                esi_1[0x15] = 9
                                esi_1[0x14] = 0x8336d0
                                esi_1[0x16] = 5
                                *esi_1 = 0x13
                                
                                if (arg2 != 6)
                                    goto label_675cc2
                                
                                ebx = ebx_10 u>> 2
                                i -= 3
                                goto label_676854
                            case 2
                                ebx = ebx_10 u>> 2
                                *esi_1 = 0x10
                                i -= 3
                                goto label_6767f7
                            case 3
                                arg1[6] = "invalid block type"
                                *esi_1 = 0x1d
                            label_675cc2:
                                ebx = ebx_10 u>> 2
                                i -= 3
                                goto label_6767f7
                    case 0xd
                        int32_t ecx_65 = i & 7
                        i -= ecx_65
                        ebx u>>= ecx_65.b
                        
                        while (i u< 0x20)
                            if (var_8 == 0)
                                goto label_676854
                            
                            var_8 -= 1
                            uint32_t edx_57 = zx.d(*eax_1) << i.b
                            eax_1 = &eax_1[1]
                            i += 8
                            var_c = eax_1
                            ebx += edx_57
                        
                        uint32_t ecx_68 = zx.d(ebx.w)
                        
                        if (ecx_68 != not.d(ebx) u>> 0x10)
                            arg1[6] = "invalid stored block lengths"
                            goto label_6767f1
                        
                        ebx = 0
                        i = 0
                        esi_1[0x10] = ecx_68
                        *esi_1 = 0xe
                        
                        if (arg2 == 6)
                            goto label_676854
                        
                        goto label_675d3b
                    case 0xe
                    label_675d3b:
                        *esi_1 = 0xf
                    label_675d41:
                        uint32_t ecx_70 = esi_1[0x10]
                        uint32_t var_10_4 = ecx_70
                        
                        if (ecx_70 == 0)
                            goto label_6763c2
                        
                        if (ecx_70 u> var_8)
                            ecx_70 = var_8
                            var_10_4 = var_8
                        
                        if (ecx_70 u> var_14)
                            ecx_70 = var_14
                            var_10_4 = ecx_70
                        
                        if (ecx_70 == 0)
                            goto label_676854
                        
                        sub_5ab990(var_1c, var_c, var_10_4)
                        var_8 -= var_10_4
                        var_c = &var_c[var_10_4]
                        var_14 -= var_10_4
                        var_1c += var_10_4
                        esi_1[0x10] -= var_10_4
                        eax_1 = var_c
                        goto label_6767f7
                    case 0xf
                        goto label_675d41
                    case 0x10
                        while (i u< 0xe)
                            if (var_8 == 0)
                                goto label_676854
                            
                            var_8 -= 1
                            uint32_t edx_65 = zx.d(*eax_1) << i.b
                            eax_1 = &eax_1[1]
                            i += 8
                            var_c = eax_1
                            ebx += edx_65
                        
                        uint32_t ebx_11 = ebx u>> 5
                        esi_1[0x18] = (ebx & 0x1f) + 0x101
                        uint32_t ebx_12 = ebx_11 u>> 5
                        ebx = ebx_12 u>> 4
                        i -= 0xe
                        bool cond:1_1 = esi_1[0x18] u> 0x11e
                        esi_1[0x19] = (ebx_11 & 0x1f) + 1
                        esi_1[0x17] = (ebx_12 & 0xf) + 4
                        
                        if (cond:1_1 || (ebx_11 & 0x1f) + 1 u> 0x1e)
                            arg1[6] = "too many length or distance symbols"
                            goto label_6767f1
                        
                        esi_1[0x1a] = 0
                        *esi_1 = 0x11
                    label_675e1b:
                        
                        while (esi_1[0x1a] u< esi_1[0x17])
                            while (i u< 3)
                                if (var_8 == 0)
                                    goto label_676854
                                
                                var_8 -= 1
                                uint32_t edx_70 = zx.d(*eax_1) << i.b
                                eax_1 = &eax_1[1]
                                i += 8
                                var_c = eax_1
                                ebx += edx_70
                            
                            *(esi_1 + (zx.d(*((esi_1[0x1a] << 1) + &data_833750)) << 1) + 0x70) =
                                ebx.w & 7
                            esi_1[0x1a] += 1
                            ebx u>>= 3
                            i -= 3
                        
                        while (esi_1[0x1a] u< 0x13)
                            *(esi_1 + (zx.d(*((esi_1[0x1a] << 1) + &data_833750)) << 1) + 0x70) = 0
                            esi_1[0x1a] += 1
                        
                        esi_1[0x1b] = &esi_1[0x14c]
                        esi_1[0x13] = &esi_1[0x14c]
                        esi_1[0x15] = 7
                        int32_t result_1 =
                            sub_678a80(0, &esi_1[0x1c], 0x13, &esi_1[0x1b], &esi_1[0x15], &esi_1[0xbc])
                        result = result_1
                        eax_1 = var_c
                        
                        if (result_1 != 0)
                            arg1[6] = "invalid code lengths set"
                            goto label_6767f1
                        
                        esi_1[0x1a] = 0
                        *esi_1 = 0x12
                    label_675f08:
                        
                        while (esi_1[0x1a] u< esi_1[0x19] + esi_1[0x18])
                            int32_t ecx_90 =
                                *(esi_1[0x13] + ((((1 << (esi_1[0x15]).b) - 1) & ebx) << 2))
                            int32_t var_10_5 = ecx_90
                            
                            while (zx.d((ecx_90 u>> 8).b) u> i)
                                if (var_8 == 0)
                                    goto label_676854
                                
                                var_8 -= 1
                                uint32_t edx_85 = zx.d(*eax_1) << i.b
                                eax_1 = &eax_1[1]
                                i += 8
                                ebx += edx_85
                                var_c = eax_1
                                ecx_90 = *(esi_1[0x13] + ((((1 << (esi_1[0x15]).b) - 1) & ebx) << 2))
                                var_10_5 = ecx_90
                            
                            uint32_t edx_93 = ecx_90 u>> 0x10
                            uint32_t var_30_4 = edx_93
                            
                            if (edx_93.w u>= 0x10)
                                int16_t var_20_4
                                int32_t i_1
                                int32_t i_2
                                
                                if (edx_93.w != 0x10)
                                    uint32_t ecx_103 = zx.d(ecx_90:1.b)
                                    uint32_t var_28_1 = ecx_103
                                    int32_t edx_109
                                    
                                    if (var_10_5:2.w != 0x11)
                                        while (i u< ecx_103 + 7)
                                            if (var_8 == 0)
                                                goto label_676854
                                            
                                            var_8 -= 1
                                            uint32_t edx_112 = zx.d(*eax_1) << i.b
                                            ecx_103 = var_28_1
                                            eax_1 = &eax_1[1]
                                            i += 8
                                            ebx += edx_112
                                            var_c = eax_1
                                        
                                        uint32_t ebx_14 = ebx u>> ecx_103.b
                                        i_1 = (ebx_14 & 0x7f) + 0xb
                                        ebx = ebx_14 u>> 7
                                        edx_109 = 0xfffffff9
                                    else
                                        while (i u< ecx_103 + 3)
                                            if (var_8 == 0)
                                                goto label_676854
                                            
                                            var_8 -= 1
                                            uint32_t edx_104 = zx.d(*eax_1) << i.b
                                            ecx_103 = var_28_1
                                            eax_1 = &eax_1[1]
                                            i += 8
                                            ebx += edx_104
                                            var_c = eax_1
                                        
                                        uint32_t ebx_13 = ebx u>> ecx_103.b
                                        i_1 = (ebx_13 & 7) + 3
                                        ebx = ebx_13 u>> 3
                                        edx_109 = 0xfffffffd
                                    
                                    i_2 = i_1
                                    i += edx_109 - ecx_103
                                    var_20_4 = 0
                                else
                                    if (i u< zx.d((ecx_90 u>> 8).b) + 2)
                                        do
                                            if (var_8 == 0)
                                                goto label_676854
                                            
                                            var_8 -= 1
                                            uint32_t edx_99 = zx.d(*eax_1) << i.b
                                            ecx_90 = var_10_5
                                            eax_1 = &eax_1[1]
                                            i += 8
                                            ebx += edx_99
                                            var_c = eax_1
                                        while (i u< zx.d(ecx_90:1.b) + 2)
                                    
                                    uint32_t ecx_98 = zx.d(ecx_90:1.b)
                                    ebx u>>= ecx_98.b
                                    i -= ecx_98
                                    int32_t ecx_99 = esi_1[0x1a]
                                    
                                    if (ecx_99 == 0)
                                        arg1[6] = "invalid bit length repeat"
                                        goto label_6767f1
                                    
                                    var_20_4 = *(esi_1 + (ecx_99 << 1) + 0x6e)
                                    i_2 = (ebx & 3) + 3
                                    ebx u>>= 2
                                    i_1 = i_2
                                    i -= 2
                                
                                if (esi_1[0x1a] + i_2 u> esi_1[0x19] + esi_1[0x18])
                                    arg1[6] = "invalid bit length repeat"
                                    goto label_6767f1
                                
                                while (i_1 != 0)
                                    i_1 -= 1
                                    *(esi_1 + (esi_1[0x1a] << 1) + 0x70) = var_20_4
                                    esi_1[0x1a] += 1
                            else
                                uint32_t ecx_95 = zx.d((ecx_90 u>> 8).b)
                                ebx u>>= ecx_95.b
                                i -= ecx_95
                                *(esi_1 + (esi_1[0x1a] << 1) + 0x70) = edx_93.w
                                esi_1[0x1a] += 1
                        
                        if (*esi_1 == 0x1d)
                            goto label_6767f7
                        
                        if (esi_1[0x9c].w == 0)
                            arg1[6] = "invalid code -- missing end-of-block"
                            goto label_6767f1
                        
                        esi_1[0x1b] = &esi_1[0x14c]
                        esi_1[0x13] = &esi_1[0x14c]
                        esi_1[0x15] = 9
                        int32_t result_2 = sub_678a80(1, &esi_1[0x1c], esi_1[0x18], &esi_1[0x1b], 
                            &esi_1[0x15], &esi_1[0xbc])
                        result = result_2
                        
                        if (result_2 != 0)
                            eax_1 = var_c
                            arg1[6] = "invalid literal/lengths set"
                            goto label_6767f1
                        
                        esi_1[0x14] = esi_1[0x1b]
                        int32_t edx_126 = esi_1[0x18]
                        int32_t ecx_115 = esi_1[0x19]
                        esi_1[0x16] = 6
                        int32_t result_3 = sub_678a80(2, esi_1 + (edx_126 << 1) + 0x70, ecx_115, 
                            &esi_1[0x1b], &esi_1[0x16], &esi_1[0xbc])
                        result = result_3
                        eax_1 = var_c
                        
                        if (result_3 != 0)
                            arg1[6] = "invalid distances set"
                            goto label_6767f1
                        
                        *esi_1 = 0x13
                        
                        if (arg2 == 6)
                            goto label_676854
                        
                        goto label_6761d8
                    case 0x11
                        goto label_675e1b
                    case 0x12
                        goto label_675f08
                    case 0x13
                    label_6761d8:
                        *esi_1 = 0x14
                    label_6761de:
                        
                        if (var_8 u>= 6 && var_14 u>= 0x102)
                            arg1[3] = var_1c
                            *arg1 = var_c
                            arg1[4] = var_14
                            arg1[1] = var_8
                            esi_1[0xe] = ebx
                            esi_1[0xf] = i
                            sub_678670(arg1, var_24)
                            ebx = esi_1[0xe]
                            i = esi_1[0xf]
                            var_1c = arg1[3]
                            char* ecx_120 = *arg1
                            var_14 = arg1[4]
                            var_c = ecx_120
                            var_8 = arg1[1]
                            eax_1 = ecx_120
                            
                            if (*esi_1 == 0xb)
                                esi_1[0x6f1] = 0xffffffff
                            
                            goto label_6767f7
                        
                        int32_t edx_132 = 1 << (esi_1[0x15]).b
                        int32_t ecx_122 = esi_1[0x13]
                        esi_1[0x6f1] = 0
                        int32_t edx_135 = *(ecx_122 + (((edx_132 - 1) & ebx) << 2))
                        int32_t var_10_6 = edx_135
                        
                        while (zx.d((edx_135 u>> 8).b) u> i)
                            if (var_8 == 0)
                                goto label_676854
                            
                            var_8 -= 1
                            uint32_t edx_137 = zx.d(*eax_1) << i.b
                            eax_1 = &eax_1[1]
                            i += 8
                            ebx += edx_137
                            var_c = eax_1
                            edx_135 = *(esi_1[0x13] + ((((1 << (esi_1[0x15]).b) - 1) & ebx) << 2))
                            var_10_6 = edx_135
                        
                        if (edx_135.b != 0 && (edx_135.b & 0xf0) == 0)
                            uint8_t ecx_133 = (edx_135 u>> 8).b
                            int32_t ecx_141 = *(esi_1[0x13] + ((((((1 << (edx_135.b + ecx_133)) - 1)
                                & ebx) u>> ecx_133) + (var_10_6 u>> 0x10)) << 2))
                            int32_t var_10_7 = ecx_141
                            
                            if (zx.d((ecx_141 u>> 8).b) + zx.d(ecx_133) u> i)
                                int32_t ecx_151
                                uint32_t edx_150
                                
                                do
                                    if (var_8 == 0)
                                        goto label_676854
                                    
                                    uint32_t edx_149 = zx.d(*eax_1) << i.b
                                    int16_t ecx_145 = edx_135.w
                                    var_8 -= 1
                                    eax_1 = &eax_1[1]
                                    ebx += edx_149
                                    edx_150 = zx.d(ecx_145:1.b)
                                    i += 8
                                    var_c = eax_1
                                    ecx_151 = *(esi_1[0x13] + ((((((1 << (ecx_145.b + edx_150.b)) - 1)
                                        & ebx) u>> edx_150.b) + zx.d(edx_135:2.w)) << 2))
                                    var_10_7 = ecx_151
                                while (zx.d((ecx_151 u>> 8).b) + edx_150 u> i)
                            
                            uint32_t ecx_153 = zx.d(edx_135:1.b)
                            edx_135 = var_10_7
                            ebx u>>= ecx_153.b
                            i -= ecx_153
                            esi_1[0x6f1] = ecx_153
                        
                        uint32_t ecx_156 = zx.d((edx_135 u>> 8).b)
                        esi_1[0x6f1] += ecx_156
                        ebx u>>= ecx_156.b
                        i -= ecx_156
                        uint32_t var_20_7 = ecx_156
                        esi_1[0x10] = edx_135 u>> 0x10
                        
                        if (edx_135.b == 0)
                            *esi_1 = 0x19
                            goto label_6767f7
                        
                        if ((edx_135.b & 0x20) != 0)
                            esi_1[0x6f1] = 0xffffffff
                        label_6763c2:
                            *esi_1 = 0xb
                            goto label_6767f7
                        
                        if ((edx_135.b & 0x40) != 0)
                            arg1[6] = "invalid literal/length code"
                            goto label_6767f1
                        
                        esi_1[0x12] = zx.d(edx_135.b) & 0xf
                        *esi_1 = 0x15
                    label_6763f0:
                        int32_t ecx_161 = esi_1[0x12]
                        
                        if (ecx_161 != 0)
                            if (i u< ecx_161)
                                do
                                    if (var_8 == 0)
                                        goto label_676854
                                    
                                    var_8 -= 1
                                    uint32_t edx_160 = zx.d(*eax_1) << i.b
                                    eax_1 = &eax_1[1]
                                    i += 8
                                    var_c = eax_1
                                    ebx += edx_160
                                while (i u< esi_1[0x12])
                            
                            int32_t ecx_163 = esi_1[0x12]
                            i -= ecx_163
                            esi_1[0x10] += ((1 << ecx_163.b) - 1) & ebx
                            ebx u>>= ecx_163.b
                            esi_1[0x6f1] += ecx_163
                        
                        esi_1[0x6f2] = esi_1[0x10]
                        *esi_1 = 0x16
                        goto label_67645b
                    case 0x14
                        goto label_6761de
                    case 0x15
                        goto label_6763f0
                    case 0x16
                    label_67645b:
                        int32_t edx_167 = *(esi_1[0x14] + ((((1 << (esi_1[0x16]).b) - 1) & ebx) << 2))
                        int32_t var_10_8 = edx_167
                        
                        while (zx.d((edx_167 u>> 8).b) u> i)
                            if (var_8 == 0)
                                goto label_676854
                            
                            var_8 -= 1
                            uint32_t edx_169 = zx.d(*eax_1) << i.b
                            eax_1 = &eax_1[1]
                            i += 8
                            ebx += edx_169
                            var_c = eax_1
                            edx_167 = *(esi_1[0x14] + ((((1 << (esi_1[0x16]).b) - 1) & ebx) << 2))
                            var_10_8 = edx_167
                        
                        if ((edx_167.b & 0xf0) == 0)
                            uint8_t ecx_178 = (edx_167 u>> 8).b
                            int32_t ecx_186 = *(esi_1[0x14] + ((((((1 << (edx_167.b + ecx_178)) - 1)
                                & ebx) u>> ecx_178) + (var_10_8 u>> 0x10)) << 2))
                            int32_t var_10_9 = ecx_186
                            
                            if (zx.d((ecx_186 u>> 8).b) + zx.d(ecx_178) u> i)
                                int32_t ecx_196
                                uint32_t edx_182
                                
                                do
                                    if (var_8 == 0)
                                        goto label_676854
                                    
                                    uint32_t edx_181 = zx.d(*eax_1) << i.b
                                    int16_t ecx_190 = edx_167.w
                                    var_8 -= 1
                                    eax_1 = &eax_1[1]
                                    ebx += edx_181
                                    edx_182 = zx.d(ecx_190:1.b)
                                    i += 8
                                    var_c = eax_1
                                    ecx_196 = *(esi_1[0x14] + ((((((1 << (ecx_190.b + edx_182.b)) - 1)
                                        & ebx) u>> edx_182.b) + zx.d(edx_167:2.w)) << 2))
                                    var_10_9 = ecx_196
                                while (zx.d((ecx_196 u>> 8).b) + edx_182 u> i)
                            
                            uint32_t ecx_198 = zx.d(edx_167:1.b)
                            edx_167 = var_10_9
                            ebx u>>= ecx_198.b
                            i -= ecx_198
                            esi_1[0x6f1] += ecx_198
                        
                        uint32_t ecx_201 = zx.d((edx_167 u>> 8).b)
                        esi_1[0x6f1] += ecx_201
                        ebx u>>= ecx_201.b
                        i -= ecx_201
                        uint32_t var_20_10 = ecx_201
                        
                        if ((edx_167.b & 0x40) != 0)
                            arg1[6] = "invalid distance code"
                            goto label_6767f1
                        
                        esi_1[0x11] = edx_167 u>> 0x10
                        esi_1[0x12] = zx.d(edx_167.b) & 0xf
                        *esi_1 = 0x17
                    label_6765a7:
                        int32_t ecx_204 = esi_1[0x12]
                        
                        if (ecx_204 != 0)
                            if (i u< ecx_204)
                                do
                                    if (var_8 == 0)
                                        goto label_676854
                                    
                                    var_8 -= 1
                                    uint32_t edx_194 = zx.d(*eax_1) << i.b
                                    eax_1 = &eax_1[1]
                                    i += 8
                                    var_c = eax_1
                                    ebx += edx_194
                                while (i u< esi_1[0x12])
                            
                            int32_t ecx_206 = esi_1[0x12]
                            i -= ecx_206
                            esi_1[0x11] += ((1 << ecx_206.b) - 1) & ebx
                            ebx u>>= ecx_206.b
                            esi_1[0x6f1] += ecx_206
                        
                        *esi_1 = 0x18
                        goto label_6765f4
                    case 0x17
                        goto label_6765a7
                    case 0x18
                    label_6765f4:
                        
                        if (var_14 == 0)
                            goto label_676854
                        
                        uint32_t edx_199 = var_24 - var_14
                        int32_t ecx_207 = esi_1[0x11]
                        void* var_30_7
                        uint32_t var_28_4
                        uint32_t var_10_10
                        uint32_t ecx_210
                        
                        if (ecx_207 u<= edx_199)
                            ecx_210 = esi_1[0x10]
                            var_30_7 = var_1c - ecx_207
                            var_28_4 = ecx_210
                        label_67666d:
                            var_10_10 = ecx_210
                        else
                            uint32_t ecx_208 = ecx_207 - edx_199
                            var_10_10 = ecx_208
                            
                            if (ecx_208 u> esi_1[0xb] && esi_1[0x6f0] != 0)
                                arg1[6] = "invalid distance too far back"
                                goto label_6767f1
                            
                            int32_t edx_200 = esi_1[0xc]
                            void* edx_203
                            
                            if (ecx_208 u<= edx_200)
                                edx_203 = esi_1[0xd] - ecx_208 + esi_1[0xc]
                                ecx_210 = var_10_10
                            else
                                ecx_210 = ecx_208 - edx_200
                                var_10_10 = ecx_210
                                edx_203 = esi_1[0xd] + esi_1[0xa] - ecx_210
                            
                            var_30_7 = edx_203
                            uint32_t edx_206 = esi_1[0x10]
                            var_28_4 = edx_206
                            
                            if (ecx_210 u> edx_206)
                                ecx_210 = edx_206
                                goto label_67666d
                        
                        if (ecx_210 u> var_14)
                            ecx_210 = var_14
                            var_10_10 = ecx_210
                        
                        var_14 -= ecx_210
                        char* ecx_212 = var_30_7 - var_1c
                        esi_1[0x10] = var_28_4 - ecx_210
                        char* var_30_8 = ecx_212
                        
                        while (true)
                            int128_t* edx_213
                            edx_213.b = *(ecx_212 + var_1c)
                            *var_1c = edx_213.b
                            uint32_t temp4_1 = var_10_10
                            var_10_10 -= 1
                            var_1c += 1
                            
                            if (temp4_1 == 1)
                                break
                            
                            ecx_212 = var_30_8
                        
                        if (esi_1[0x10] == 0)
                            *esi_1 = 0x14
                        
                        goto label_6767f7
                    case 0x19
                        if (var_14 == 0)
                            goto label_676854
                        
                        edx.b = esi_1[0x10].b
                        *var_1c = edx.b
                        var_14 -= 1
                        var_1c += 1
                        *esi_1 = 0x14
                        goto label_6767f7
                    case 0x1a
                        if (esi_1[2] == 0)
                            goto label_6767a0
                        
                        while (i u< 0x20)
                            if (var_8 == 0)
                                goto label_676854
                            
                            var_8 -= 1
                            uint32_t edx_215 = zx.d(*eax_1) << i.b
                            eax_1 = &eax_1[1]
                            i += 8
                            var_c = eax_1
                            ebx += edx_215
                        
                        uint32_t ecx_219 = var_24 - var_14
                        arg1[5] = &arg1[5][ecx_219]
                        esi_1[7] += ecx_219
                        uint32_t var_24_1 = ecx_219
                        
                        if (ecx_219 != 0)
                            uint32_t edx_217 = esi_1[6]
                            char* ecx_221 = var_1c - ecx_219
                            void* eax_48
                            
                            if (esi_1[4] == 0)
                                eax_48 = sub_6783e0(edx_217, ecx_221, ecx_219)
                            else
                                eax_48 = sub_673170(edx_217, ecx_221, ecx_219)
                            
                            esi_1[6] = eax_48
                            arg1[0xc] = eax_48
                            eax_1 = var_c
                        
                        var_24 = var_14
                        uint32_t ecx_223 = ebx
                        
                        if (esi_1[4] == 0)
                            ecx_223 = (((ecx_223 & 0xff00) + (ebx << 0x10)) << 8) + (ebx u>> 8 & 0xff00)
                                + (ebx u>> 0x18)
                        
                        if (ecx_223 != esi_1[6])
                            arg1[6] = "incorrect data check"
                            goto label_6767f1
                        
                        ebx = 0
                        i = 0
                    label_6767a0:
                        *esi_1 = 0x1b
                    label_6767a6:
                        
                        if (esi_1[2] == 0 || esi_1[4] == 0)
                            goto label_676838
                        
                        while (i u< 0x20)
                            if (var_8 == 0)
                                goto label_676854
                            
                            var_8 -= 1
                            uint32_t edx_227 = zx.d(*eax_1) << i.b
                            eax_1 = &eax_1[1]
                            i += 8
                            var_c = eax_1
                            ebx += edx_227
                        
                        if (ebx != esi_1[7])
                            arg1[6] = "incorrect length check"
                            goto label_6767f1
                        
                        ebx = 0
                        i = 0
                    label_676838:
                        *esi_1 = 0x1c
                    label_67683e:
                        result = 1
                    label_676854:
                        arg1[3] = var_1c
                        *arg1 = eax_1
                        arg1[4] = var_14
                        arg1[1] = var_8
                        bool cond:0_1 = esi_1[0xa] != 0
                        esi_1[0xe] = ebx
                        esi_1[0xf] = i
                        
                        if (cond:0_1)
                        label_676890:
                            
                            if (sub_6753d0(var_24) == 0)
                                goto label_6768ab
                            
                            *esi_1 = 0x1e
                            break
                        
                        if (var_24 != arg1[4])
                            int32_t eax_53 = *esi_1
                            
                            if (eax_53 s>= 0x1d || (eax_53 s>= 0x1a && arg2 == 4))
                                goto label_6768ab
                            
                            goto label_676890
                        
                    label_6768ab:
                        char** edi = arg1
                        int32_t eax_58 = ecx_1 - edi[1]
                        int32_t ebx_17 = var_24 - edi[4]
                        edi[2] = &edi[2][eax_58]
                        edi[5] = &edi[5][ebx_17]
                        esi_1[7] += ebx_17
                        
                        if (esi_1[2] != 0 && ebx_17 != 0)
                            void* eax_61
                            
                            if (esi_1[4] == 0)
                                eax_61 = sub_6783e0(esi_1[6], edi[3] - ebx_17, ebx_17)
                            else
                                eax_61 = sub_673170(esi_1[6], edi[3] - ebx_17, ebx_17)
                            
                            esi_1[6] = eax_61
                            edi[0xc] = eax_61
                        
                        int32_t eax_63 = *esi_1
                        
                        if (eax_63 != 0x13)
                            arg1 = nullptr
                        
                        if (eax_63 == 0x13 || eax_63 == 0xe)
                            arg1 = 0x100
                        
                        int32_t ecx_235 = esi_1[1]
                        int32_t ecx_236 = neg.d(ecx_235)
                        int32_t edx_233
                        edx_233.b = eax_63 != 0xb
                        edi[0xb] = ((edx_233 - 1) & 0x80)
                            + (sbb.d(ecx_236, ecx_236, ecx_235 != 0) & 0x40) + arg1 + esi_1[0xf]
                        
                        if ((eax_58 != 0 || ebx_17 != 0) && arg2 != 4)
                            return result
                        
                        if (result != 0)
                            return result
                        
                        return 0xfffffffb
                    case 0x1b
                        goto label_6767a6
                    case 0x1c
                        goto label_67683e
                    case 0x1d
                        result = 0xfffffffd
                        goto label_676854
                    case 0x1e
                        break
            
            return 0xfffffffc
    
    return 0xfffffffe
}
