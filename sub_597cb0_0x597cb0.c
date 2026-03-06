// 函数名称: sub_597cb0
// 虚拟地址: 0x597cb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_597cb0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: uint32_t* esi = *arg1
    uint32_t* esi = *arg1
    int32_t var_c = 1
    int32_t var_10 = 1
    uint32_t eax_1
    void* ecx
    eax_1, ecx = sub_5959c0(esi)
    
    if (eax_1 s< 0xb)
        data_273ac1c = "bad SOF len"
        return 0
    
    char* eax_3 = esi[0x2a]
    
    if (eax_3 u< esi[0x2b])
    label_597d3e:
        ecx.b = *eax_3
        esi[0x2a] = &eax_3[1]
        
        if (zx.d(ecx.b) == 8)
            uint32_t eax_11 = sub_5959c0(esi)
            esi[1] = eax_11
            
            if (eax_11 == 0)
                data_273ac1c = "no header height"
                return 0
            
            uint32_t eax_13 = sub_5959c0(esi)
            *esi = eax_13
            
            if (eax_13 == 0)
                data_273ac1c = "0 width"
                return 0
            
            char* eax_15 = esi[0x2a]
            
            if (eax_15 u< esi[0x2b])
            label_597df6:
                uint32_t i_5 = zx.d(*eax_15)
                esi[0x2a] = &eax_15[1]
                
                if (i_5 == 3 || i_5 == 1)
                    esi[2] = i_5
                    
                    if (i_5 s> 0)
                        void* eax_23 = &arg1[0xd74]
                        uint32_t i
                        
                        do
                            *(eax_23 - 8) = 0
                            *eax_23 = 0
                            eax_23 += 0x38
                            i = i_5
                            i_5 -= 1
                        while (i != 1)
                    
                    int32_t eax_24 = esi[2]
                    
                    if (eax_1 != eax_24 * 3 + 8)
                        data_273ac1c = "bad SOF len"
                        return 0
                    
                    int32_t i_1 = 0
                    
                    if (eax_24 s> 0)
                        void* edx_5 = &arg1[0xd68]
                        void* var_8_1 = edx_5
                        
                        do
                            char* eax_26 = esi[0x2a]
                            uint32_t eax_28
                            int32_t ecx_4
                            
                            if (eax_26 u< esi[0x2b])
                                ecx_4.b = *eax_26
                                esi[0x2a] = &eax_26[1]
                                eax_28 = zx.d(ecx_4.b)
                            else if (esi[8] == 0)
                                eax_28 = 0
                            else
                                int32_t eax_30 = esi[4](esi[7], &esi[0xa], esi[9])
                                
                                if (eax_30 != 0)
                                    esi[0x2a] = &esi[0xa]
                                    esi[0x2b] = &esi[0xa] + eax_30
                                else
                                    esi[8] = eax_30
                                    char* eax_32 = esi[0x2b] - 1
                                    esi[0x2a] = eax_32
                                    *eax_32 = 0
                                
                                char* eax_33 = esi[0x2a]
                                char ecx_6 = *eax_33
                                edx_5 = var_8_1
                                esi[0x2a] = &eax_33[1]
                                eax_28 = zx.d(ecx_6)
                            
                            *(edx_5 - 4) = eax_28
                            
                            if (eax_28 != i_1 + 1 && eax_28 != i_1)
                                data_273ac1c = "bad component ID"
                                return 0
                            
                            char* eax_35 = esi[0x2a]
                            uint32_t ecx_8
                            
                            if (eax_35 u< esi[0x2b])
                                int32_t ecx_7
                                ecx_7.b = *eax_35
                                esi[0x2a] = &eax_35[1]
                                ecx_8 = zx.d(ecx_7.b)
                            else if (esi[8] == 0)
                                ecx_8 = 0
                            else
                                int32_t eax_38 = esi[4](esi[7], &esi[0xa], esi[9])
                                
                                if (eax_38 != 0)
                                    esi[0x2a] = &esi[0xa]
                                    esi[0x2b] = &esi[0xa] + eax_38
                                else
                                    esi[8] = eax_38
                                    char* eax_40 = esi[0x2b] - 1
                                    esi[0x2a] = eax_40
                                    *eax_40 = 0
                                
                                char* eax_41 = esi[0x2a]
                                char ecx_10 = *eax_41
                                edx_5 = var_8_1
                                esi[0x2a] = &eax_41[1]
                                ecx_8 = zx.d(ecx_10)
                            
                            int32_t eax_44 = ecx_8 s>> 4
                            *edx_5 = eax_44
                            
                            if (eax_44 == 0 || eax_44 s> 4)
                                data_273ac1c = "bad H"
                                return 0
                            
                            ecx_4 = ecx_8 & 0xf
                            *(edx_5 + 4) = ecx_4
                            
                            if (ecx_4 == 0 || ecx_4 s> 4)
                                data_273ac1c = "bad V"
                                return 0
                            
                            char* eax_45 = esi[0x2a]
                            uint32_t eax_47
                            
                            if (eax_45 u< esi[0x2b])
                                ecx_4.b = *eax_45
                                esi[0x2a] = &eax_45[1]
                                eax_47 = zx.d(ecx_4.b)
                            else if (esi[8] == 0)
                                eax_47 = 0
                            else
                                int32_t eax_49
                                eax_49, ecx_4 = esi[4](esi[7], &esi[0xa], esi[9])
                                
                                if (eax_49 != 0)
                                    esi[0x2a] = &esi[0xa]
                                    esi[0x2b] = &esi[0xa] + eax_49
                                else
                                    esi[8] = eax_49
                                    char* eax_51 = esi[0x2b] - 1
                                    esi[0x2a] = eax_51
                                    *eax_51 = 0
                                
                                char* eax_52 = esi[0x2a]
                                ecx_4.b = *eax_52
                                edx_5 = var_8_1
                                esi[0x2a] = &eax_52[1]
                                eax_47 = zx.d(ecx_4.b)
                            
                            *(edx_5 + 8) = eax_47
                            
                            if (eax_47 s> 3)
                                data_273ac1c = "bad TQ"
                                return 0
                            
                            i_1 += 1
                            edx_5 += 0x38
                            var_8_1 = edx_5
                        while (i_1 s< esi[2])
                    
                    if (arg2 == 0)
                        int32_t ecx_12 = esi[2]
                        
                        if (divu.dp.d(0:(divu.dp.d(0:0x40000000, *esi)), ecx_12) u< esi[1])
                            data_273ac1c = "too large"
                            return 0
                        
                        if (ecx_12 s> 0)
                            int32_t ebx = 1
                            int32_t i_6 = esi[2]
                            void* eax_63 = &arg1[0xd69]
                            int32_t edi_9 = 1
                            int32_t i_2
                            
                            do
                                int32_t ecx_13 = *(eax_63 - 4)
                                
                                if (ecx_13 s> ebx)
                                    ebx = ecx_13
                                
                                int32_t ecx_14 = *eax_63
                                
                                if (ecx_14 s> edi_9)
                                    edi_9 = ecx_14
                                
                                eax_63 += 0x38
                                i_2 = i_6
                                i_6 -= 1
                            while (i_2 != 1)
                            var_10 = edi_9
                            var_c = ebx
                        
                        arg1[0xd61] = var_c
                        int32_t edi_10 = var_10 << 3
                        arg1[0xd62] = var_10
                        int32_t ecx_18 = var_c * 8
                        arg1[0xd65] = ecx_18
                        arg1[0xd66] = edi_10
                        int32_t i_4 = 0
                        arg1[0xd63] = divu.dp.d(0:(ecx_18 + *esi - 1), ecx_18)
                        arg1[0xd64] = divu.dp.d(0:(edi_10 + esi[1] - 1), edi_10)
                        
                        if (esi[2] s> 0)
                            void* edi_11 = &arg1[0xd68]
                            int32_t i_3
                            
                            do
                                int32_t ecx_19 = *edi_11
                                *(edi_11 + 0x18) = divu.dp.d(0:(*esi * ecx_19 + var_c - 1), var_c)
                                *(edi_11 + 0x1c) =
                                    divu.dp.d(0:(esi[1] * *(edi_11 + 4) + var_10 - 1), var_10)
                                *(edi_11 + 0x20) = arg1[0xd63] * ecx_19 * 8
                                int32_t eax_83 = arg1[0xd64] * *(edi_11 + 4) * 8
                                uint32_t ecx_22 = *(edi_11 + 0x20) * eax_83 + 0xf
                                *(edi_11 + 0x24) = eax_83
                                int32_t eax_84 = sub_5a881a(ecx_22)
                                *(edi_11 + 0x2c) = eax_84
                                
                                if (eax_84 == 0)
                                    int32_t edi_13 = i_4 - 1
                                    
                                    if (i_4 - 1 s>= 0)
                                        void* esi_1 = &arg1[edi_13 * 0xe + 0xd72]
                                        int32_t temp6_1
                                        
                                        do
                                            __free_base(*(esi_1 + 4))
                                            *esi_1 = 0
                                            esi_1 -= 0x38
                                            temp6_1 = edi_13
                                            edi_13 -= 1
                                        while (temp6_1 - 1 s>= 0)
                                    
                                    data_273ac1c = "outofmem"
                                    return 0
                                
                                *(edi_11 + 0x28) = (eax_84 + 0xf) & 0xfffffff0
                                *(edi_11 + 0x30) = 0
                                i_3 = i_4 + 1
                                edi_11 += 0x38
                                i_4 = i_3
                            while (i_3 s< esi[2])
                    
                    return 1
            else if (esi[8] != 0)
                int32_t eax_17 = esi[4](esi[7], &esi[0xa], esi[9])
                
                if (eax_17 != 0)
                    esi[0x2a] = &esi[0xa]
                    esi[0x2b] = eax_17 + esi + 0x28
                else
                    char* eax_19 = esi[0x2b] - 1
                    esi[8] = 0
                    esi[0x2a] = eax_19
                    *eax_19 = 0
                
                eax_15 = esi[0x2a]
                goto label_597df6
            
            data_273ac1c = "bad component count"
            return 0
    else if (esi[8] != 0)
        int32_t eax_5
        eax_5, ecx = esi[4](esi[7], &esi[0xa], esi[9])
        
        if (eax_5 != 0)
            esi[0x2a] = &esi[0xa]
            esi[0x2b] = eax_5 + esi + 0x28
        else
            char* eax_7 = esi[0x2b] - 1
            esi[8] = 0
            esi[0x2a] = eax_7
            *eax_7 = 0
        
        eax_3 = esi[0x2a]
        goto label_597d3e
    
    data_273ac1c = "only 8-bit"
    return 0
}
