// 函数名称: sub_64fcf0
// 虚拟地址: 0x64fcf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_64fcf0(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t esi = arg3
    int32_t esi = arg3
    int32_t eax = esi
    
    if (esi == 0)
        eax = arg2
    
    int32_t* result_1 = sub_5a881a(eax * 4)
    int32_t* result = result_1
    void var_90
    sub_5abfc0(&var_90, 0, 0x84)
    int32_t edi = 0
    
    if (arg2 s> 0)
        do
            int32_t i_3 = *(arg1 + (edi << 2))
            
            if (i_3 s> 0)
                int32_t esi_1 = *(&var_90 + (i_3 << 2))
                
                if (i_3 s< 0x20 && esi_1 u>> i_3.b != 0)
                    __free_base(result)
                    return 0
                
                *result_1 = esi_1
                result_1 = &result_1[1]
                int32_t i = i_3
                int32_t __saved_ebx
                
                do
                    int32_t edx_2 = *(&var_90 + (i << 2))
                    
                    if ((edx_2.b & 1) != 0)
                        int32_t __saved_ebp
                        
                        if (i != 1)
                            (&__saved_ebp)[i - 0x23] = (&__saved_ebx)[i] * 2
                        else
                            int32_t var_8c = var_8c + 1
                        break
                    
                    *(&var_90 + (i << 2)) = edx_2 + 1
                    i -= 1
                while (i s> 0)
                
                for (int32_t i_1 = i_3 + 1; i_1 s< 0x21; i_1 += 1)
                    int32_t ecx_1 = *(&var_90 + (i_1 << 2))
                    
                    if (ecx_1 u>> 1 != esi_1)
                        break
                    
                    esi_1 = ecx_1
                    *(&var_90 + (i_1 << 2)) = (&__saved_ebx)[i_1] * 2
            else if (esi == 0)
                result_1 = &result_1[1]
            
            esi = arg3
            edi += 1
        while (edi s< arg2)
        
        result_1 = result
    
    if (esi != 1)
        for (int32_t i_2 = 1; i_2 s< 0x21; i_2 += 1)
            if ((*(&var_90 + (i_2 << 2)) & 0xffffffff u>> (0x20 - i_2.b)) != 0)
                __free_base(result_1)
                return 0
    
    int32_t esi_2 = 0
    int32_t var_c = 0
    
    if (arg2 s> 0)
        int32_t* result_2 = result
        
        do
            int32_t edx_10 = *(arg1 + (esi_2 << 2))
            int32_t eax_7 = 0
            int32_t ecx_5 = 0
            
            if (edx_10 s> 0)
                do
                    uint32_t ebx_1 = *result_2 u>> ecx_5.b
                    ecx_5 += 1
                    eax_7 = (eax_7 * 2) | (ebx_1 & 1)
                while (ecx_5 s< edx_10)
                
                esi_2 = var_c
            
            if (arg3 == 0 || edx_10 != 0)
                *result_2 = eax_7
                result_2 = &result_2[1]
            
            esi_2 += 1
            var_c = esi_2
        while (esi_2 s< arg2)
    
    return result
}
