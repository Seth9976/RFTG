// 函数名称: sub_5978c0
// 虚拟地址: 0x5978c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5978c0()
{
    // 第一条实际指令: int32_t* entry_ebx
    int32_t* entry_ebx
    uint32_t eax = sub_5959c0(*entry_ebx)
    void* esi_1 = *entry_ebx
    char* eax_1 = *(esi_1 + 0xa8)
    uint32_t eax_3
    
    if (eax_1 u< *(esi_1 + 0xac))
        char ecx_1 = *eax_1
        *(esi_1 + 0xa8) = &eax_1[1]
        eax_3 = zx.d(ecx_1)
    else if (*(esi_1 + 0x20) == 0)
        eax_3 = 0
    else
        int32_t eax_5 = (*(esi_1 + 0x10))(*(esi_1 + 0x1c), esi_1 + 0x28, *(esi_1 + 0x24))
        
        if (eax_5 != 0)
            *(esi_1 + 0xa8) = esi_1 + 0x28
            *(esi_1 + 0xac) = eax_5 + esi_1 + 0x28
        else
            *(esi_1 + 0x20) = eax_5
            char* eax_7 = *(esi_1 + 0xac) - 1
            *(esi_1 + 0xa8) = eax_7
            *eax_7 = 0
        
        char* eax_9 = *(esi_1 + 0xa8)
        char ecx_3 = *eax_9
        *(esi_1 + 0xa8) = &eax_9[1]
        eax_3 = zx.d(ecx_3)
    
    entry_ebx[0xda3] = eax_3
    
    if (eax_3 s< 1 || eax_3 s> 4 || eax_3 s> *(*entry_ebx + 8))
        data_273ac1c = "bad SOS component count"
        return 0
    
    if (eax != eax_3 * 2 + 6)
        data_273ac1c = "bad SOS len"
        return 0
    
    int32_t i_1 = 0
    void* ecx_4
    
    if (eax_3 s> 0)
        void* var_10_1 = &entry_ebx[0xda4]
        int32_t i
        
        do
            void* esi_2 = *entry_ebx
            char* eax_13 = *(esi_2 + 0xa8)
            uint32_t j
            
            if (eax_13 u< *(esi_2 + 0xac))
                ecx_4.b = *eax_13
                *(esi_2 + 0xa8) = &eax_13[1]
                j = zx.d(ecx_4.b)
            else if (*(esi_2 + 0x20) == 0)
                j = 0
            else
                int32_t eax_16
                eax_16, ecx_4 = (*(esi_2 + 0x10))(*(esi_2 + 0x1c), esi_2 + 0x28, *(esi_2 + 0x24))
                
                if (eax_16 != 0)
                    *(esi_2 + 0xa8) = esi_2 + 0x28
                    *(esi_2 + 0xac) = eax_16 + esi_2 + 0x28
                else
                    *(esi_2 + 0x20) = eax_16
                    char* eax_18 = *(esi_2 + 0xac) - 1
                    *(esi_2 + 0xa8) = eax_18
                    *eax_18 = 0
                
                char* eax_19 = *(esi_2 + 0xa8)
                ecx_4.b = *eax_19
                *(esi_2 + 0xa8) = &eax_19[1]
                j = zx.d(ecx_4.b)
            
            void* esi_3 = *entry_ebx
            char* eax_22 = *(esi_3 + 0xa8)
            uint32_t esi_4
            
            if (eax_22 u< *(esi_3 + 0xac))
                ecx_4.b = *eax_22
                *(esi_3 + 0xa8) = &eax_22[1]
                esi_4 = zx.d(ecx_4.b)
            else if (*(esi_3 + 0x20) == 0)
                esi_4 = 0
            else
                int32_t eax_25
                void* ecx_7
                eax_25, ecx_7 = (*(esi_3 + 0x10))(*(esi_3 + 0x1c), esi_3 + 0x28, *(esi_3 + 0x24))
                
                if (eax_25 != 0)
                    *(esi_3 + 0xa8) = esi_3 + 0x28
                    *(esi_3 + 0xac) = eax_25 + esi_3 + 0x28
                else
                    *(esi_3 + 0x20) = eax_25
                    char* eax_27 = *(esi_3 + 0xac) - 1
                    *(esi_3 + 0xa8) = eax_27
                    *eax_27 = 0
                
                char* eax_28 = *(esi_3 + 0xa8)
                ecx_7.b = *eax_28
                *(esi_3 + 0xa8) = &eax_28[1]
                esi_4 = zx.d(ecx_7.b)
            
            int32_t edx_7 = *(*entry_ebx + 8)
            int32_t eax_30 = 0
            
            if (edx_7 s> 0)
                int32_t* ecx_8 = &entry_ebx[0xd67]
                
                while (*ecx_8 != j)
                    eax_30 += 1
                    ecx_8 = &ecx_8[0xe]
                    
                    if (eax_30 s>= *(*entry_ebx + 8))
                        break
            
            if (eax_30 == edx_7)
                return 0
            
            int32_t ecx_10 = esi_4 s>> 4
            void* edx_10 = &entry_ebx[eax_30 * 0xe]
            *(edx_10 + 0x35ac) = ecx_10
            
            if (ecx_10 s> 3)
                data_273ac1c = "bad DC huff"
                return 0
            
            int32_t ecx_12 = esi_4 & 0xf
            *(edx_10 + 0x35b0) = ecx_12
            
            if (ecx_12 s> 3)
                data_273ac1c = "bad AC huff"
                return 0
            
            *var_10_1 = eax_30
            i = i_1 + 1
            i_1 = i
            var_10_1 += 4
        while (i s< entry_ebx[0xda3])
    
    void* esi_5 = *entry_ebx
    char* eax_32 = *(esi_5 + 0xa8)
    
    if (eax_32 u< *(esi_5 + 0xac))
    label_597b95:
        ecx_4.b = *eax_32
        *(esi_5 + 0xa8) = &eax_32[1]
        
        if (zx.d(ecx_4.b) == 0)
            goto label_597bb7
    else
        if (*(esi_5 + 0x20) != 0)
            int32_t eax_34
            eax_34, ecx_4 = (*(esi_5 + 0x10))(*(esi_5 + 0x1c), esi_5 + 0x28, *(esi_5 + 0x24))
            
            if (eax_34 != 0)
                *(esi_5 + 0xa8) = esi_5 + 0x28
                *(esi_5 + 0xac) = eax_34 + esi_5 + 0x28
            else
                *(esi_5 + 0x20) = eax_34
                char* eax_36 = *(esi_5 + 0xac) - 1
                *(esi_5 + 0xa8) = eax_36
                *eax_36 = 0
            
            eax_32 = *(esi_5 + 0xa8)
            goto label_597b95
        
    label_597bb7:
        void* esi_6 = *entry_ebx
        int32_t eax_43 = *(esi_6 + 0xa8)
        
        if (eax_43 u< *(esi_6 + 0xac))
            *(esi_6 + 0xa8) = eax_43 + 1
        else if (*(esi_6 + 0x20) != 0)
            int32_t eax_46
            eax_46, ecx_4 = (*(esi_6 + 0x10))(*(esi_6 + 0x1c), esi_6 + 0x28, *(esi_6 + 0x24))
            
            if (eax_46 != 0)
                *(esi_6 + 0xa8) = esi_6 + 0x28
                *(esi_6 + 0xac) = eax_46 + esi_6 + 0x28
            else
                *(esi_6 + 0x20) = eax_46
                char* eax_48 = *(esi_6 + 0xac) - 1
                *(esi_6 + 0xa8) = eax_48
                *eax_48 = 0
            
            *(esi_6 + 0xa8) += 1
        
        void* esi_7 = *entry_ebx
        char* eax_49 = *(esi_7 + 0xa8)
        
        if (eax_49 u>= *(esi_7 + 0xac))
            if (*(esi_7 + 0x20) == 0)
                return 1
            
            int32_t eax_51
            eax_51, ecx_4 = (*(esi_7 + 0x10))(*(esi_7 + 0x1c), esi_7 + 0x28, *(esi_7 + 0x24))
            
            if (eax_51 != 0)
                *(esi_7 + 0xa8) = esi_7 + 0x28
                *(esi_7 + 0xac) = eax_51 + esi_7 + 0x28
            else
                *(esi_7 + 0x20) = eax_51
                char* eax_53 = *(esi_7 + 0xac) - 1
                *(esi_7 + 0xa8) = eax_53
                *eax_53 = 0
            
            eax_49 = *(esi_7 + 0xa8)
        
        ecx_4.b = *eax_49
        *(esi_7 + 0xa8) = &eax_49[1]
        
        if (zx.d(ecx_4.b) == 0)
            return 1
    
    data_273ac1c = "bad SOS"
    return 0
}
