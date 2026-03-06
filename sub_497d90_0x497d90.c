// 函数名称: sub_497d90
// 虚拟地址: 0x497d90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_497d90(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t result = arg5
    int32_t var_528[0x148]
    
    if (result s> 0)
        __builtin_memset(&var_528, 0, result << 2)
    
    int32_t eax_2 = 0
    int32_t var_52c = 0
    
    if (result s> 0)
        do
            int32_t esi_2 = 0
            int32_t var_530_1 = 0
            
            do
                if (eax_2 != esi_2)
                    void* edx_2 = *(arg4 + *(arg3 + (esi_2 << 2)) * 0x14 + 0x46c)
                    void* eax_9 = *(arg4 + *(&var_528 + arg3 - &var_528 + (eax_2 << 2)) * 0x14 + 0x46c)
                    void* ecx_2
                    ecx_2.b = *(eax_9 + 0xe)
                    int32_t ebx = 0
                    int32_t var_53c_1 = 0
                    int32_t var_538_1 = 0
                    int32_t var_534_1 = 0
                    int32_t var_540_1 = 0
                    int32_t eax_26
                    
                    if (ecx_2.b == *(edx_2 + 0xe))
                        int32_t i_5 = sx.d(*(eax_9 + 0x15))
                        int32_t ecx_4 = *(eax_9 + 0x10) & 2
                        int32_t edi_2 = *(edx_2 + 0x10) & 2
                        int32_t var_548_1 = ecx_4
                        int32_t var_544_1 = edi_2
                        
                        if (i_5 s> 0)
                            void* ecx_5 = eax_9 + 0x28
                            int32_t i_3 = i_5
                            int32_t i
                            
                            do
                                ebx.b = *(ecx_5 - 0x10)
                                
                                if (ebx.b == 4 && (*(ecx_5 - 8) & 0x20) != 0)
                                    var_534_1 = sx.d(*ecx_5)
                                
                                if (ebx.b == 5 && (*(ecx_5 - 8) & 0x200) != 0)
                                    var_53c_1 = sx.d(*ecx_5)
                                
                                ecx_5 += 0x18
                                i = i_3
                                i_3 -= 1
                            while (i != 1)
                            ecx_4 = var_548_1
                            edi_2 = var_544_1
                            ebx = 0
                        
                        int32_t i_4 = sx.d(*(edx_2 + 0x15))
                        
                        if (i_4 s> 0)
                            void* ecx_6 = edx_2 + 0x28
                            int32_t i_2 = i_4
                            int32_t i_1
                            
                            do
                                ebx.b = *(ecx_6 - 0x10)
                                
                                if (ebx.b == 4 && (*(ecx_6 - 8) & 0x20) != 0)
                                    var_540_1 = sx.d(*ecx_6)
                                
                                if (ebx.b == 5 && (*(ecx_6 - 8) & 0x200) != 0)
                                    var_538_1 = sx.d(*ecx_6)
                                
                                ecx_6 += 0x18
                                i_1 = i_2
                                i_2 -= 1
                            while (i_1 != 1)
                            ecx_4 = var_548_1
                            edi_2 = var_544_1
                            ebx = var_538_1
                        
                        if ((ecx_4 == edi_2 && ebx s> var_53c_1) || (ecx_4 != 0 && edi_2 == 0
                                && var_53c_1 s<= ebx && var_534_1 == var_540_1))
                            eax_26 = 2
                            var_528[var_52c] = 1
                        else if (ecx_4 != edi_2 || var_534_1 != var_540_1 || var_53c_1 != ebx)
                            eax_26 = 0
                        else
                            eax_26 = 1
                    else
                        eax_26 = 0
                    
                    if (var_52c s< var_530_1 && eax_26 == 1)
                        var_528[var_52c] = eax_26
                    
                    esi_2 = var_530_1
                    eax_2 = var_52c
                    result = arg5
                
                esi_2 += 1
                var_530_1 = esi_2
            while (esi_2 s< result)
            
            eax_2 += 1
            var_52c = eax_2
        while (eax_2 s< result)
    
    int32_t eax_27 = 0
    
    if (result s> 0)
        void* ecx_9 = &(&__saved_ebp)[result - 0x14a]
        
        do
            if (var_528[eax_27] != 0)
                *(arg3 + (eax_27 << 2)) = *(ecx_9 + arg3 - &var_528)
                var_528[eax_27] = *ecx_9
                result -= 1
                ecx_9 -= 4
                eax_27 -= 1
            
            eax_27 += 1
        while (eax_27 s< result)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
