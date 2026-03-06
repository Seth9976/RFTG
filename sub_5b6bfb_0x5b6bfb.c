// 函数名称: sub_5b6bfb
// 虚拟地址: 0x5b6bfb
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5b6bfb(EXCEPTION_RECORD* arg1, int32_t* arg2, int32_t arg3, void* arg4, void* arg5, int32_t arg6, int32_t arg7, int32_t* arg8)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    
    if (*esi == 0x80000003)
        return 
    
    int32_t edi
    int32_t var_18_1 = edi
    
    if (__getptd()[0x20] == 0)
    label_5b6c6c:
        
        if (*(arg5 + 0xc) == 0)
            _inconsistency()
            noreturn
        
        int32_t esi_1 = arg6
        int32_t var_10
        int32_t var_8
        int32_t* eax = sub_5ab6d3(arg5, arg7, esi_1, &var_8, &var_10)
        
        if (var_8 u< var_10)
            eax = &eax[3]
            int32_t* var_c_1 = eax
            
            do
                if (esi_1 s>= eax[-3] && esi_1 s<= eax[-2])
                    void* ecx_4 = (*eax << 4) + eax[1]
                    void* edx_1 = *(ecx_4 - 0xc)
                    
                    if ((edx_1 == 0 || *(edx_1 + 8) == 0) && (*(ecx_4 - 0x10) & 0x40) == 0)
                        sub_5b6b8d(arg2, &eax[-3], arg1, arg3, arg4, arg5, nullptr, arg7, arg8)
                        esi_1 = arg6
                        eax = var_c_1
                
                var_8 += 1
                eax = &eax[5]
                var_c_1 = eax
            while (var_8 u< var_10)
    else
        void* edi_1 = &__getptd()[0x20]
        int32_t eax_3 = sub_5accf7()
        
        if (*edi_1 == eax_3)
            goto label_5b6c6c
        
        int32_t eax_4 = *esi
        
        if (eax_4 == 0xe0434f4d || eax_4 == 0xe0434352)
            goto label_5b6c6c
        
        int32_t* __saved_ebx_1 = arg8
        
        if (sub_5ab55d(esi, arg2, arg3, arg4, arg5, arg7) == 0)
            goto label_5b6c6c
}
