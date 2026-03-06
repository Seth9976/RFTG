// 函数名称: sub_59f3f0
// 虚拟地址: 0x59f3f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_59f3f0(void* arg1 @ edi, int32_t* arg2)
{
    // 第一条实际指令: int128_t* ebx = arg2[2]
    int128_t* ebx = arg2[2]
    int32_t* ecx
    void* edx_1
    
    if (ebx != 0)
        if ((arg2[7] & 0x1c).b != 0xc)
            goto label_59f480
        
        void* esi_4 = arg2[1] * *arg2 * 4
        int128_t* eax_6 = sub_5a881a(esi_4)
        arg2[2] = eax_6
        
        if (eax_6 == 0)
            data_273ac1c = "outofmem"
            return 0
        
        ecx, edx_1 = sub_5ab990(eax_6, ebx, esi_4)
    label_59f480:
        
        while (true)
            char* eax_11 = *(arg1 + 0xa8)
            
            if (eax_11 u< *(arg1 + 0xac))
            label_59f4d9:
                ecx.b = *eax_11
                ecx = zx.d(ecx.b)
                void* eax_12 = &eax_11[1]
                *(arg1 + 0xa8) = eax_12
                
                if (ecx != 0x21)
                    if (ecx == 0x2c)
                        uint32_t eax_49 = sub_595ac0(arg1)
                        uint32_t eax_50 = sub_595ac0(arg1)
                        uint32_t eax_51 = sub_595ac0(arg1)
                        uint32_t eax_52 = sub_595ac0(arg1)
                        int32_t ecx_19 = *arg2
                        
                        if (eax_51 + eax_49 s> ecx_19 || eax_52 + eax_50 s> arg2[1])
                            data_273ac1c = "bad Image Descriptor"
                            break
                        
                        int32_t ecx_21 = ecx_19 * 4
                        arg2[0x1212] = ecx_21
                        int32_t edx_17 = ecx_21 * eax_50
                        uint32_t esi_20 = eax_49 << 2
                        arg2[0x120c] = esi_20
                        arg2[0x120d] = edx_17
                        arg2[0x120e] = esi_20 + (eax_51 << 2)
                        arg2[0x120f] = ecx_21 * eax_52 + edx_17
                        arg2[0x1210] = esi_20
                        arg2[0x1211] = edx_17
                        char* eax_55 = *(arg1 + 0xa8)
                        uint32_t ecx_24
                        
                        if (eax_55 u< *(arg1 + 0xac))
                            int32_t ecx_23
                            ecx_23.b = *eax_55
                            *(arg1 + 0xa8) = &eax_55[1]
                            ecx_24 = zx.d(ecx_23.b)
                        else if (*(arg1 + 0x20) == 0)
                            ecx_24 = 0
                        else
                            int32_t eax_58 =
                                (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
                            
                            if (eax_58 != 0)
                                *(arg1 + 0xa8) = arg1 + 0x28
                                *(arg1 + 0xac) = eax_58 + arg1 + 0x28
                            else
                                *(arg1 + 0x20) = eax_58
                                char* eax_60 = *(arg1 + 0xac) - 1
                                *(arg1 + 0xa8) = eax_60
                                *eax_60 = 0
                            
                            char* eax_62 = *(arg1 + 0xa8)
                            char ecx_26 = *eax_62
                            *(arg1 + 0xa8) = &eax_62[1]
                            ecx_24 = zx.d(ecx_26)
                        
                        arg2[0x120b] = ecx_24
                        
                        if ((ecx_24.b & 0x40) == 0)
                            arg2[0x120a] = arg2[0x1212]
                            arg2[0x1209] = 0
                        else
                            arg2[0x120a] = arg2[0x1212] * 8
                            arg2[0x1209] = 3
                        
                        if (ecx_24.b s< 0)
                            int32_t eax_65
                            
                            if ((arg2[7].b & 1) == 0)
                                eax_65 = 0xffffffff
                            else
                                eax_65 = arg2[6]
                            
                            int32_t var_1c_14 = eax_65
                            int32_t ecx_27 = ecx_24 & 7
                            sub_59e7d0(2 << ecx_27.b, &arg2[0x108], arg1, ecx_27)
                            arg2[0x1208] = &arg2[0x108]
                            return sub_59ef50(arg1, arg2)
                        
                        if ((arg2[3].b & 0x80) == 0)
                            data_273ac1c = "missing color table"
                            return 0
                        
                        void* eax_69 = arg2 + 0x23
                        int32_t i_1 = 0x100
                        int32_t i
                        
                        do
                            *eax_69 = 0xff
                            eax_69 += 4
                            i = i_1
                            i_1 -= 1
                        while (i != 1)
                        int32_t eax_70 = arg2[6]
                        
                        if (eax_70 s>= 0 && (arg2[7].b & 1) != 0)
                            *(&arg2[eax_70] + 0x23) = i_1.b
                        
                        arg2[0x1208] = &arg2[8]
                        return sub_59ef50(arg1, arg2)
                    
                    if (ecx == 0x3b)
                        return 1
                else
                    if (eax_12 u< *(arg1 + 0xac))
                    label_59f541:
                        ecx.b = *eax_12
                        *(arg1 + 0xa8) = eax_12 + 1
                        
                        if (zx.d(ecx.b) == 0xf9)
                            ecx = *(arg1 + 0xa8)
                            uint32_t eax_18
                            uint32_t eax_21
                            
                            if (ecx u< *(arg1 + 0xac))
                            label_59f5ad:
                                eax_18.b = *ecx
                                eax_21 = zx.d(eax_18.b)
                                *(arg1 + 0xa8) = ecx + 1
                                
                                if (eax_21 != 4)
                                    goto label_59f5dd
                                
                                uint32_t eax_22
                                
                                if (ecx + 1 u< *(arg1 + 0xac))
                                    eax_21.b = *(ecx + 1)
                                    *(arg1 + 0xa8) = ecx + 2
                                    eax_22 = zx.d(eax_21.b)
                                else if (*(arg1 + 0x20) == 0)
                                    eax_22 = 0
                                else
                                    int32_t eax_26 =
                                        (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
                                    
                                    if (eax_26 != 0)
                                        *(arg1 + 0xa8) = arg1 + 0x28
                                        *(arg1 + 0xac) = arg1 + 0x28 + eax_26
                                    else
                                        *(arg1 + 0x20) = eax_26
                                        char* eax_28 = *(arg1 + 0xac) - 1
                                        *(arg1 + 0xa8) = eax_28
                                        *eax_28 = 0
                                    
                                    char* eax_29 = *(arg1 + 0xa8)
                                    char ecx_12 = *eax_29
                                    *(arg1 + 0xa8) = &eax_29[1]
                                    eax_22 = zx.d(ecx_12)
                                
                                arg2[7] = eax_22
                                sub_595ac0(arg1)
                                char* eax_31 = *(arg1 + 0xa8)
                                uint32_t eax_33
                                
                                if (eax_31 u< *(arg1 + 0xac))
                                    char ecx_13 = *eax_31
                                    *(arg1 + 0xa8) = &eax_31[1]
                                    eax_33 = zx.d(ecx_13)
                                else if (*(arg1 + 0x20) == 0)
                                    eax_33 = 0
                                else
                                    int32_t eax_35
                                    eax_35, edx_1 =
                                        (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
                                    
                                    if (eax_35 != 0)
                                        *(arg1 + 0xa8) = arg1 + 0x28
                                        *(arg1 + 0xac) = arg1 + 0x28 + eax_35
                                    else
                                        *(arg1 + 0x20) = eax_35
                                        char* eax_37 = *(arg1 + 0xac) - 1
                                        *(arg1 + 0xa8) = eax_37
                                        *eax_37 = 0
                                    
                                    char* eax_38 = *(arg1 + 0xa8)
                                    char ecx_15 = *eax_38
                                    *(arg1 + 0xa8) = &eax_38[1]
                                    eax_33 = zx.d(ecx_15)
                                
                                arg2[6] = eax_33
                            else
                                if (*(arg1 + 0x20) != 0)
                                    eax_18, edx_1 =
                                        (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
                                    
                                    if (eax_18 != 0)
                                        *(arg1 + 0xa8) = arg1 + 0x28
                                        *(arg1 + 0xac) = arg1 + 0x28 + eax_18
                                    else
                                        *(arg1 + 0x20) = eax_18
                                        eax_18 = *(arg1 + 0xac) - 1
                                        *(arg1 + 0xa8) = eax_18
                                        *eax_18 = 0
                                    
                                    ecx = *(arg1 + 0xa8)
                                    goto label_59f5ad
                                
                                eax_21 = 0
                            label_59f5dd:
                                
                                if (*(arg1 + 0x10) != 0)
                                    edx_1 = *(arg1 + 0xac)
                                    ecx = edx_1 - *(arg1 + 0xa8)
                                    
                                    if (ecx s< eax_21)
                                        *(arg1 + 0xa8) = edx_1
                                        edx_1, ecx = (*(arg1 + 0x14))(*(arg1 + 0x1c), eax_21 - ecx)
                                        continue
                                
                                *(arg1 + 0xa8) += eax_21
                                continue
                    else if (*(arg1 + 0x20) != 0)
                        int32_t eax_14
                        eax_14, edx_1, ecx =
                            (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
                        
                        if (eax_14 != 0)
                            *(arg1 + 0xa8) = arg1 + 0x28
                            *(arg1 + 0xac) = arg1 + 0x28 + eax_14
                        else
                            *(arg1 + 0x20) = eax_14
                            char* eax_16 = *(arg1 + 0xac) - 1
                            *(arg1 + 0xa8) = eax_16
                            *eax_16 = 0
                        
                        eax_12 = *(arg1 + 0xa8)
                        goto label_59f541
                    
                    while (true)
                        char* eax_44 = *(arg1 + 0xa8)
                        
                        if (eax_44 u>= *(arg1 + 0xac))
                            if (*(arg1 + 0x20) == 0)
                                break
                            
                            int32_t eax_41
                            eax_41, edx_1 =
                                (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
                            
                            if (eax_41 != 0)
                                *(arg1 + 0xa8) = arg1 + 0x28
                                *(arg1 + 0xac) = arg1 + 0x28 + eax_41
                            else
                                *(arg1 + 0x20) = eax_41
                                char* eax_43 = *(arg1 + 0xac) - 1
                                *(arg1 + 0xa8) = eax_43
                                *eax_43 = 0
                            
                            eax_44 = *(arg1 + 0xa8)
                        
                        edx_1.b = *eax_44
                        uint32_t eax_45 = zx.d(edx_1.b)
                        *(arg1 + 0xa8) = &eax_44[1]
                        
                        if (eax_45 == 0)
                            break
                        
                        if (*(arg1 + 0x10) != 0)
                            int32_t esi_18 = *(arg1 + 0xac)
                            edx_1 = esi_18 - &eax_44[1]
                            
                            if (edx_1 s< eax_45)
                                int32_t ecx_17 = *(arg1 + 0x1c)
                                int32_t edx_12 = *(arg1 + 0x14)
                                *(arg1 + 0xa8) = esi_18
                                edx_1, ecx = edx_12(ecx_17, eax_45 - edx_1)
                                continue
                        
                        *(arg1 + 0xa8) = &eax_44[1 + eax_45]
                    
                    continue
            else if (*(arg1 + 0x20) != 0)
                int32_t eax_8
                eax_8, edx_1, ecx = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
                
                if (eax_8 != 0)
                    *(arg1 + 0xa8) = arg1 + 0x28
                    *(arg1 + 0xac) = arg1 + 0x28 + eax_8
                else
                    *(arg1 + 0x20) = eax_8
                    char* eax_10 = *(arg1 + 0xac) - 1
                    *(arg1 + 0xa8) = eax_10
                    *eax_10 = 0
                
                eax_11 = *(arg1 + 0xa8)
                goto label_59f4d9
            
            data_273ac1c = "unknown code"
            return 0
    else
        int128_t* var_1c_1 = ebx
        int32_t eax
        int32_t var_20_1 = eax
        uint32_t* edx
        
        if (sub_59e970(arg1, edx, ecx, arg2) != 0)
            int32_t eax_3 = sub_5a881a(arg2[1] * *arg2 * 4)
            arg2[2] = eax_3
            
            if (eax_3 != 0)
                ecx, edx_1 = sub_59f390(arg2)
                goto label_59f480
            
            data_273ac1c = "outofmem"
    return 0
}
