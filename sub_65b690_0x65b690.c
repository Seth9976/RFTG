// 函数名称: sub_65b690
// 虚拟地址: 0x65b690
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_65b690(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* ecx = arg1[7]
    void* ecx = arg1[7]
    int32_t i = 0
    int32_t var_10 = 0
    int32_t var_8 = 0xffffffff
    int32_t* edi = arg2
    int32_t edx
    int32_t* ebx = _calloc(arg1, edx, ecx, 1, 0x460)
    arg1 = ebx
    int32_t eax_2 = sub_68b0a0(edi, 5)
    *ebx = eax_2
    
    if (eax_2 s> 0)
        void* var_c_1 = &ebx[1]
        
        do
            int32_t eax_3 = sub_68b0a0(edi, 4)
            *var_c_1 = eax_3
            
            if (eax_3 s< 0)
                goto label_65b922
            
            if (var_8 s< eax_3)
                var_8 = eax_3
            
            var_c_1 += 4
            i += 1
        while (i s< *ebx)
    
    int32_t i_3 = 0
    
    if (var_8 + 1 s> 0)
        void* var_8_1 = &ebx[0x50]
        void* esi = &ebx[0x40]
        int32_t i_1
        
        do
            *(esi - 0x80) = sub_68b0a0(edi, 3) + 1
            int32_t eax_8 = sub_68b0a0(edi, 2)
            *(esi - 0x40) = eax_8
            
            if (eax_8 s< 0)
                goto label_65b922
            
            if (eax_8 != 0)
                *esi = sub_68b0a0(edi, 8)
            
            int32_t eax_10 = *esi
            
            if (eax_10 s< 0)
                goto label_65b922
            
            if (eax_10 s>= *(ecx + 0x18))
                goto label_65b922
            
            if (1 << (*(esi - 0x40)).b s> 0)
                void* edi_1 = var_8_1
                int32_t j = 0
                
                do
                    int32_t eax_13 = sub_68b0a0(arg2, 8) - 1
                    *edi_1 = eax_13
                    
                    if (eax_13 s< 0xffffffff)
                        goto label_65b917
                    
                    if (eax_13 s>= *(ecx + 0x18))
                        goto label_65b917
                    
                    j += 1
                    edi_1 += 4
                while (j s< 1 << (*(esi - 0x40)).b)
            
            var_8_1 += 0x20
            ebx = arg1
            edi = arg2
            i_1 = i_3 + 1
            esi += 4
            i_3 = i_1
        while (i_1 s< var_8 + 1)
    
    ebx[0xd0] = sub_68b0a0(edi, 2) + 1
    int32_t eax_17 = sub_68b0a0(edi, 4)
    
    if (eax_17 s>= 0)
        int32_t* eax_18 = arg1
        int32_t ebx_1 = 0
        int32_t var_c_2 = 0
        int32_t esi_2
        
        if (*eax_18 s<= 0)
            esi_2 = 0
        else
            void* var_8_2 = &eax_18[1]
            
            while (true)
                esi_2 = var_10 + eax_18[*var_8_2 + 0x20]
                var_10 = esi_2
                
                if (esi_2 s> 0x3f)
                    goto label_65b917
                
                if (ebx_1 s< esi_2)
                    void* esi_3 = &arg1[ebx_1 + 0xd3]
                    
                    do
                        int32_t eax_20 = sub_68b0a0(arg2, eax_17)
                        *esi_3 = eax_20
                        
                        if (eax_20 s< 0)
                            goto label_65b917
                        
                        if (eax_20 s>= 1 << eax_17.b)
                            goto label_65b917
                        
                        ebx_1 += 1
                        esi_3 += 4
                    while (ebx_1 s< var_10)
                    
                    esi_2 = var_10
                
                var_8_2 += 4
                int32_t eax_22 = var_c_2 + 1
                var_c_2 = eax_22
                
                if (eax_22 s>= *arg1)
                    eax_18 = arg1
                    break
                
                eax_18 = arg1
        
        eax_18[0xd1] = 0
        eax_18[0xd2] = 1 << eax_17.b
        int32_t i_2 = 0
        int32_t var_11c[0x41]
        
        if (esi_2 + 2 s> 0)
            void* ecx_11 = &eax_18[0xd1]
            
            do
                var_11c[i_2] = ecx_11
                i_2 += 1
                ecx_11 += 4
            while (i_2 s< esi_2 + 2)
        
        sub_5a7ac0(&var_11c, esi_2 + 2, 4, sub_65b670)
        int32_t eax_23 = 1
        
        if (esi_2 + 2 s<= 1)
            return arg1
        
        int32_t __saved_ebx
        
        while (*(&__saved_ebx)[eax_23] != *var_11c[eax_23])
            eax_23 += 1
            
            if (eax_23 s>= esi_2 + 2)
                return arg1
        
    label_65b917:
        ebx = arg1
    
    label_65b922:
    sub_5abfc0(ebx, 0, 0x460)
    __free_base(ebx)
    return 0
}
