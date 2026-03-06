// 函数名称: sub_5972f0
// 虚拟地址: 0x5972f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_5972f0(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* ebx = arg2
    int32_t* var_50 = ebx
    
    if (arg1 - 0xc2 u> 0x3d)
    label_5977e0:
        
        if ((arg1 s< 0xe0 || arg1 s> 0xef) && arg1 != 0xfe)
            goto label_597339
        
        uint32_t eax_73 = sub_5959c0(*ebx)
        void* ecx_32 = *ebx
        
        if (*(ecx_32 + 0x10) != 0)
            int32_t esi_13 = *(ecx_32 + 0xac)
            int32_t edx_15 = esi_13 - *(ecx_32 + 0xa8)
            
            if (edx_15 s< eax_73 - 2)
                int32_t eax_76 = *(ecx_32 + 0x1c)
                *(ecx_32 + 0xa8) = esi_13
                (*(ecx_32 + 0x14))(eax_76, eax_73 - 2 - edx_15)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return 1
        
        *(ecx_32 + 0xa8) += eax_73 - 2
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return 1
    
    switch (arg1)
        case 0xc2
            data_273ac1c = "progressive jpeg"
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 0
        case 0xc3, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 
                0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xd8, 0xd9, 0xda, 0xdc, 0xde, 0xdf, 0xe0, 0xe1, 0xe2, 
                0xe3, 0xe4, 0xe5, 0xe6, 0xe7, 0xe8, 0xe9, 0xea, 0xeb, 0xec, 0xed, 0xee, 0xef, 0xf0, 
                0xf1, 0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7, 0xf8, 0xf9, 0xfa, 0xfb, 0xfc, 0xfd, 0xfe
            goto label_5977e0
        case 0xc4
            uint32_t eax_35
            void* ecx_20
            eax_35, ecx_20 = sub_5959c0(*ebx)
            int32_t eax_36 = eax_35 - 2
            int32_t var_4c_2 = eax_36
            
            if (eax_36 s> 0)
                while (true)
                    void* esi_7 = *ebx
                    char* eax_38 = *(esi_7 + 0xa8)
                    int32_t var_58_1 = 0
                    uint32_t eax_40
                    
                    if (eax_38 u< *(esi_7 + 0xac))
                        ecx_20.b = *eax_38
                        *(esi_7 + 0xa8) = &eax_38[1]
                        eax_40 = zx.d(ecx_20.b)
                    else if (*(esi_7 + 0x20) == 0)
                        eax_40 = 0
                    else
                        int32_t eax_42 =
                            (*(esi_7 + 0x10))(*(esi_7 + 0x1c), esi_7 + 0x28, *(esi_7 + 0x24))
                        
                        if (eax_42 != 0)
                            *(esi_7 + 0xa8) = esi_7 + 0x28
                            *(esi_7 + 0xac) = eax_42 + esi_7 + 0x28
                        else
                            *(esi_7 + 0x20) = eax_42
                            char* eax_44 = *(esi_7 + 0xac) - 1
                            *(esi_7 + 0xa8) = eax_44
                            *eax_44 = 0
                        
                        char* eax_46 = *(esi_7 + 0xa8)
                        char ecx_24 = *eax_46
                        *(esi_7 + 0xa8) = &eax_46[1]
                        eax_40 = zx.d(ecx_24)
                    
                    int32_t edi_5 = eax_40 s>> 4
                    int32_t edx_6 = eax_40 & 0xf
                    int32_t var_5c_1 = edi_5
                    int32_t var_54_2 = edx_6
                    
                    if (edi_5 s> 1 || edx_6 s> 3)
                        data_273ac1c = "bad DHT header"
                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                        return 0
                    
                    int32_t var_48[0x10]
                    
                    for (int32_t i = 0; i s< 0x10; i += 1)
                        void* esi_8 = *var_50
                        char* eax_49 = *(esi_8 + 0xa8)
                        uint32_t eax_51
                        
                        if (eax_49 u< *(esi_8 + 0xac))
                            int32_t* ecx_25
                            ecx_25.b = *eax_49
                            *(esi_8 + 0xa8) = &eax_49[1]
                            eax_51 = zx.d(ecx_25.b)
                        else if (*(esi_8 + 0x20) == 0)
                            eax_51 = 0
                        else
                            int32_t eax_53 =
                                (*(esi_8 + 0x10))(*(esi_8 + 0x1c), esi_8 + 0x28, *(esi_8 + 0x24))
                            
                            if (eax_53 != 0)
                                *(esi_8 + 0xa8) = esi_8 + 0x28
                                *(esi_8 + 0xac) = eax_53 + esi_8 + 0x28
                            else
                                *(esi_8 + 0x20) = eax_53
                                char* eax_55 = *(esi_8 + 0xac) - 1
                                *(esi_8 + 0xa8) = eax_55
                                *eax_55 = 0
                            
                            char* eax_56 = *(esi_8 + 0xa8)
                            char ecx_27 = *eax_56
                            edx_6 = var_54_2
                            edi_5 = var_5c_1
                            *(esi_8 + 0xa8) = &eax_56[1]
                            eax_51 = zx.d(ecx_27)
                        
                        var_58_1 += eax_51
                        var_48[i] = eax_51
                    
                    void* esi_9 = edx_6 * 0x690 + var_50
                    int32_t (* var_6c_5)[0x10] = &var_48
                    void* esi_10
                    
                    if (edi_5 != 0)
                        int32_t eax_60
                        eax_60, ecx_20 = sub_5961c0(esi_9 + 0x1a44, var_6c_5)
                        
                        if (eax_60 == 0)
                            goto label_597339
                        
                        esi_10 = esi_9 + 0x1e44
                    else
                        int32_t eax_59
                        eax_59, ecx_20 = sub_5961c0(esi_9 + 4, var_6c_5)
                        
                        if (eax_59 == 0)
                            goto label_597339
                        
                        esi_10 = esi_9 + 0x404
                    
                    int32_t edx_12 = var_58_1
                    int32_t ebx_2 = 0
                    
                    if (edx_12 s> 0)
                        do
                            void* esi_11 = *var_50
                            char* eax_62 = *(esi_11 + 0xa8)
                            char eax_64
                            
                            if (eax_62 u< *(esi_11 + 0xac))
                                ecx_20.b = *eax_62
                                *(esi_11 + 0xa8) = &eax_62[1]
                                eax_64 = ecx_20.b
                            else if (*(esi_11 + 0x20) == 0)
                                eax_64 = 0
                            else
                                int32_t eax_66
                                void* ecx_29
                                eax_66, ecx_29 = (*(esi_11 + 0x10))(*(esi_11 + 0x1c), esi_11 + 0x28, 
                                    *(esi_11 + 0x24))
                                
                                if (eax_66 != 0)
                                    *(esi_11 + 0xa8) = esi_11 + 0x28
                                    *(esi_11 + 0xac) = eax_66 + esi_11 + 0x28
                                else
                                    *(esi_11 + 0x20) = eax_66
                                    char* eax_68 = *(esi_11 + 0xac) - 1
                                    *(esi_11 + 0xa8) = eax_68
                                    *eax_68 = 0
                                
                                char* eax_69 = *(esi_11 + 0xa8)
                                ecx_29.b = *eax_69
                                edx_12 = var_58_1
                                *(esi_11 + 0xa8) = &eax_69[1]
                                eax_64 = ecx_29.b
                            
                            *(esi_10 + ebx_2) = eax_64
                            ebx_2 += 1
                        while (ebx_2 s< edx_12)
                    
                    eax_36 = var_4c_2 - 0x11 - edx_12
                    var_4c_2 = eax_36
                    
                    if (eax_36 s<= 0)
                        break
                    
                    ebx = var_50
            
            int32_t edx_4
            edx_4.b = eax_36 == 0
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return edx_4
        case 0xdb
            uint32_t eax_10
            uint32_t ecx_8
            eax_10, ecx_8 = sub_5959c0(*ebx)
            int32_t edi_1 = eax_10 - 2
            int32_t var_4c_1 = edi_1
            
            if (edi_1 s> 0)
                while (true)
                    void* esi_4 = *ebx
                    char* eax_12 = *(esi_4 + 0xa8)
                    
                    if (eax_12 u< *(esi_4 + 0xac))
                        ecx_8.b = *eax_12
                        *(esi_4 + 0xa8) = &eax_12[1]
                        ecx_8 = zx.d(ecx_8.b)
                    else if (*(esi_4 + 0x20) == 0)
                        ecx_8 = 0
                    else
                        int32_t eax_15
                        void* ecx_12
                        eax_15, ecx_12 =
                            (*(esi_4 + 0x10))(*(esi_4 + 0x1c), esi_4 + 0x28, *(esi_4 + 0x24))
                        
                        if (eax_15 != 0)
                            *(esi_4 + 0xa8) = esi_4 + 0x28
                            *(esi_4 + 0xac) = eax_15 + esi_4 + 0x28
                        else
                            *(esi_4 + 0x20) = eax_15
                            char* eax_17 = *(esi_4 + 0xac) - 1
                            *(esi_4 + 0xa8) = eax_17
                            *eax_17 = 0
                        
                        char* eax_18 = *(esi_4 + 0xa8)
                        ecx_12.b = *eax_18
                        *(esi_4 + 0xa8) = &eax_18[1]
                        ecx_8 = zx.d(ecx_12.b)
                    
                    int32_t eax_21 = ecx_8 & 0xf
                    
                    if ((ecx_8 & 0xfffffff0) != 0)
                        data_273ac1c = "bad DQT type"
                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                        return 0
                    
                    if (eax_21 s> 3)
                        data_273ac1c = "bad DQT table"
                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                        return 0
                    
                    for (void* i_1 = nullptr; i_1 s< 0x40; )
                        void* esi_5 = *var_50
                        char* eax_23 = *(esi_5 + 0xa8)
                        char eax_25
                        
                        if (eax_23 u< *(esi_5 + 0xac))
                            ecx_8.b = *eax_23
                            *(esi_5 + 0xa8) = &eax_23[1]
                            eax_25 = ecx_8.b
                        else if (*(esi_5 + 0x20) == 0)
                            eax_25 = 0
                        else
                            int32_t eax_27 =
                                (*(esi_5 + 0x10))(*(esi_5 + 0x1c), esi_5 + 0x28, *(esi_5 + 0x24))
                            
                            if (eax_27 != 0)
                                *(esi_5 + 0xa8) = esi_5 + 0x28
                                *(esi_5 + 0xac) = eax_27 + esi_5 + 0x28
                            else
                                *(esi_5 + 0x20) = eax_27
                                char* eax_29 = *(esi_5 + 0xac) - 1
                                *(esi_5 + 0xa8) = eax_29
                                *eax_29 = 0
                            
                            char* eax_31 = *(esi_5 + 0xa8)
                            char ecx_14 = *eax_31
                            edi_1 = var_4c_1
                            *(esi_5 + 0xa8) = &eax_31[1]
                            eax_25 = ecx_14
                        
                        ecx_8 = zx.d(*(i_1 + 0x8bc5b0)) + (eax_21 << 6)
                        i_1 += 1
                        *(ecx_8 + var_50 + 0x3484) = eax_25
                    
                    edi_1 -= 0x41
                    var_4c_1 = edi_1
                    
                    if (edi_1 s<= 0)
                        break
                    
                    ebx = var_50
            
            int32_t eax_11
            eax_11.b = edi_1 == 0
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_11
        case 0xdd
            if (sub_5959c0(*ebx) == 4)
                ebx[0xda8] = sub_5959c0(*ebx)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return 1
            
            data_273ac1c = "bad DRI len"
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 0
        case 0xff
            data_273ac1c = "expected marker"
        label_597339:
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 0
}
