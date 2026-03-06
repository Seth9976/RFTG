// 函数名称: sub_59d630
// 虚拟地址: 0x59d630
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_59d630(void* arg1, uint32_t* arg2, uint32_t* arg3, uint32_t* arg4)
{
    // 第一条实际指令: uint32_t eax = sub_5959c0(arg1)
    uint32_t eax = sub_5959c0(arg1)
    
    if (sub_5959c0(arg1) + (eax << 0x10) != 0x38425053)
        data_273ac1c = "not PSD"
        return 0
    
    if (sub_5959c0(arg1) != 1)
        data_273ac1c = "wrong version"
        return 0
    
    int32_t eax_7
    int32_t ecx_1
    
    if (*(arg1 + 0x10) != 0)
        ecx_1 = *(arg1 + 0xac)
        eax_7 = ecx_1 - *(arg1 + 0xa8)
    
    if (*(arg1 + 0x10) == 0 || eax_7 s>= 6)
        *(arg1 + 0xa8) += 6
    else
        int32_t edx_1 = *(arg1 + 0x1c)
        *(arg1 + 0xa8) = ecx_1
        (*(arg1 + 0x14))(edx_1, 6 - eax_7)
    
    uint32_t eax_9 = sub_5959c0(arg1)
    
    if (eax_9 u> 0x10)
        data_273ac1c = "wrong channel count"
        return 0
    
    uint32_t ebx_2 = (sub_5959c0(arg1) << 0x10) + sub_5959c0(arg1)
    uint32_t eax_12 = sub_5959c0(arg1)
    uint32_t eax_14 = sub_5959c0(arg1) + (eax_12 << 0x10)
    
    if (sub_5959c0(arg1) != 8)
        data_273ac1c = "unsupported bit depth"
        return 0
    
    if (sub_5959c0(arg1) != 3)
        data_273ac1c = "wrong color format"
        return 0
    
    sub_5958f0(arg1, sub_595aa0(arg1))
    sub_5958f0(arg1, sub_595aa0(arg1))
    sub_5958f0(arg1, sub_595aa0(arg1))
    uint32_t eax_28 = sub_5959c0(arg1)
    
    if (eax_28 s> 1)
        data_273ac1c = "bad compression"
        return 0
    
    int32_t j_6 = eax_14 * ebx_2
    int32_t eax_31
    int32_t i_5
    eax_31, i_5 = sub_5a881a(j_6 << 2)
    int32_t var_1c = eax_31
    
    if (eax_31 == 0)
        data_273ac1c = "outofmem"
        return eax_31
    
    if (eax_28 == 0)
        int32_t i_6 = j_6
        void* edx_13 = nullptr
        void* var_8 = nullptr
        
        while (true)
            char* ebx_5 = edx_13 + eax_31
            
            if (edx_13 s<= eax_9)
                if (i_6 s> 0)
                    int32_t i_3 = i_6
                    int32_t i
                    
                    do
                        char* eax_58 = *(arg1 + 0xa8)
                        char eax_60
                        
                        if (eax_58 u< *(arg1 + 0xac))
                            i_5.b = *eax_58
                            *(arg1 + 0xa8) = &eax_58[1]
                            eax_60 = i_5.b
                        else if (*(arg1 + 0x20) == 0)
                            eax_60 = 0
                        else
                            int32_t eax_62
                            eax_62, i_5 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
                            
                            if (eax_62 != 0)
                                *(arg1 + 0xa8) = arg1 + 0x28
                                *(arg1 + 0xac) = arg1 + 0x28 + eax_62
                            else
                                *(arg1 + 0x20) = eax_62
                                char* eax_64 = *(arg1 + 0xac) - 1
                                *(arg1 + 0xa8) = eax_64
                                *eax_64 = 0
                            
                            char* eax_65 = *(arg1 + 0xa8)
                            i_5.b = *eax_65
                            edx_13 = var_8
                            i_6 = j_6
                            *(arg1 + 0xa8) = &eax_65[1]
                            eax_60 = i_5.b
                        
                        *ebx_5 = eax_60
                        ebx_5 = &ebx_5[4]
                        i = i_3
                        i_3 -= 1
                    while (i != 1)
            else if (i_6 s> 0)
                eax_31.b = edx_13 != 3
                eax_31.b -= 1
                i_5 = i_6
                int32_t i_1
                
                do
                    *ebx_5 = eax_31.b
                    ebx_5 = &ebx_5[4]
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
            
            edx_13 += 1
            var_8 = edx_13
            
            if (edx_13 s>= 4)
                break
            
            eax_31 = var_1c
    else
        sub_5958f0(arg1, ebx_2 * eax_9 * 2)
        void* i_4 = nullptr
        void* i_2
        
        do
            char* ecx_4 = i_4 + var_1c
            char* var_c_1 = ecx_4
            
            if (i_4 s< eax_9)
                int32_t var_14_1 = 0
                
                if (j_6 s> 0)
                    do
                        char* eax_38 = *(arg1 + 0xa8)
                        uint32_t edi_8
                        
                        if (eax_38 u< *(arg1 + 0xac))
                        label_59d879:
                            ecx_4.b = *eax_38
                            edi_8 = zx.d(ecx_4.b)
                            *(arg1 + 0xa8) = &eax_38[1]
                            
                            if (edi_8 != 0x80)
                                if (edi_8 s< 0x80)
                                    goto label_59d897
                                
                                if (edi_8 s> 0x80)
                                    int32_t j_4 = (edi_8 ^ 0xff) + 2
                                    char eax_50
                                    
                                    if (&eax_38[1] u< *(arg1 + 0xac))
                                        ecx_4.b = eax_38[1]
                                        *(arg1 + 0xa8) = &eax_38[2]
                                        eax_50 = ecx_4.b
                                    else if (*(arg1 + 0x20) == 0)
                                        eax_50 = 0
                                    else
                                        int32_t eax_52
                                        eax_52, ecx_4 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, 
                                            *(arg1 + 0x24))
                                        
                                        if (eax_52 != 0)
                                            *(arg1 + 0xa8) = arg1 + 0x28
                                            *(arg1 + 0xac) = arg1 + 0x28 + eax_52
                                        else
                                            *(arg1 + 0x20) = eax_52
                                            char* eax_54 = *(arg1 + 0xac) - 1
                                            *(arg1 + 0xa8) = eax_54
                                            *eax_54 = 0
                                        
                                        char* eax_55 = *(arg1 + 0xa8)
                                        ecx_4.b = *eax_55
                                        *(arg1 + 0xa8) = &eax_55[1]
                                        eax_50 = ecx_4.b
                                    
                                    var_14_1 += j_4
                                    
                                    if (j_4 != 0)
                                        ecx_4 = var_c_1
                                        int32_t j
                                        
                                        do
                                            *ecx_4 = eax_50
                                            ecx_4 = &ecx_4[4]
                                            j = j_4
                                            j_4 -= 1
                                        while (j != 1)
                                        var_c_1 = ecx_4
                        else
                            if (*(arg1 + 0x20) != 0)
                                int32_t eax_35
                                eax_35, ecx_4 =
                                    (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
                                
                                if (eax_35 != 0)
                                    *(arg1 + 0xa8) = arg1 + 0x28
                                    *(arg1 + 0xac) = arg1 + 0x28 + eax_35
                                else
                                    *(arg1 + 0x20) = eax_35
                                    char* eax_37 = *(arg1 + 0xac) - 1
                                    *(arg1 + 0xa8) = eax_37
                                    *eax_37 = 0
                                
                                eax_38 = *(arg1 + 0xa8)
                                goto label_59d879
                            
                            edi_8 = 0
                        label_59d897:
                            int32_t j_5 = edi_8 + 1
                            var_14_1 += j_5
                            
                            if (j_5 != 0)
                                int32_t j_1
                                
                                do
                                    char* eax_40 = *(arg1 + 0xa8)
                                    char eax_42
                                    
                                    if (eax_40 u< *(arg1 + 0xac))
                                        ecx_4.b = *eax_40
                                        *(arg1 + 0xa8) = &eax_40[1]
                                        eax_42 = ecx_4.b
                                    else if (*(arg1 + 0x20) == 0)
                                        eax_42 = 0
                                    else
                                        int32_t eax_44 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, 
                                            *(arg1 + 0x24))
                                        
                                        if (eax_44 != 0)
                                            *(arg1 + 0xa8) = arg1 + 0x28
                                            *(arg1 + 0xac) = arg1 + 0x28 + eax_44
                                        else
                                            *(arg1 + 0x20) = eax_44
                                            char* eax_46 = *(arg1 + 0xac) - 1
                                            *(arg1 + 0xa8) = eax_46
                                            *eax_46 = 0
                                        
                                        char* eax_47 = *(arg1 + 0xa8)
                                        char ecx_7 = *eax_47
                                        *(arg1 + 0xa8) = &eax_47[1]
                                        eax_42 = ecx_7
                                    
                                    *var_c_1 = eax_42
                                    j_1 = j_5
                                    j_5 -= 1
                                    var_c_1 = &var_c_1[4]
                                while (j_1 != 1)
                    while (var_14_1 s< j_6)
            else if (j_6 s> 0)
                int32_t j_3 = j_6
                void* eax_33
                eax_33.b = i_4 != 3
                eax_33.b -= 1
                int32_t j_2
                
                do
                    *ecx_4 = eax_33.b
                    ecx_4 = &ecx_4[4]
                    j_2 = j_3
                    j_3 -= 1
                while (j_2 != 1)
            
            i_2 = i_4 + 1
            i_4 = i_2
        while (i_2 s< 4)
    
    if (arg4 != 0)
        *arg4 = eax_9
    
    *arg3 = ebx_2
    *arg2 = eax_14
    return var_1c
}
