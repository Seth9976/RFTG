// 函数名称: sub_5bd4e0
// 虚拟地址: 0x5bd4e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5bd4e0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: void var_74
    void var_74
    sub_5bf810(&var_74)
    int32_t* entry_ebx
    int32_t esi = entry_ebx[3]
    int32_t var_1c_1
    int32_t var_18_1
    int32_t var_14_1
    int32_t var_10_1
    int32_t eax_2
    int32_t ecx_2
    
    if ((entry_ebx[2] | esi) == 0)
        eax_2 = 0
        ecx_2 = 0
    else
        void* ecx_1 = **entry_ebx
        eax_2 = *(ecx_1 + 0x48)
        ecx_2 = *(ecx_1 + 0x4c)
        var_14_1 = eax_2
        var_10_1 = ecx_2
        var_1c_1 = eax_2
        var_18_1 = ecx_2
    
    int32_t var_24_1
    __builtin_memset(&var_24_1, 0, 0x18)
    
    if (esi u>= 0 && (esi u> 0 || entry_ebx[2] u> 0))
        while (true)
            int32_t edx_1 = *entry_ebx
            int32_t esi_2 = var_24_1 << 4
            void* eax_3 = *(esi_2 + edx_1)
            int32_t edx_2 = *(eax_3 + 0x48)
            int32_t eax_4 = *(eax_3 + 0x4c)
            
            if (eax_4 u<= var_18_1 && (eax_4 u< var_18_1 || edx_2 u< var_1c_1))
                var_1c_1 = edx_2
                var_18_1 = eax_4
            
            int32_t temp3_1 = entry_ebx[9]
            
            if (var_18_1 u> temp3_1)
                zip_error_set(arg2, 0x13, 0)
                return 0xffffffff
            
            if (var_18_1 u>= temp3_1 && var_1c_1 u> entry_ebx[8])
                zip_error_set(arg2, 0x13, 0)
                return 0xffffffff
            
            int16_t eax_7 = sub_5bf2c0(*(*(esi_2 + edx_1) + 0x30))
            int32_t* esi_3 = esi_2 + *entry_ebx
            void* edi_1 = *esi_3
            int32_t esi_4 = *(edi_1 + 0x48)
            int32_t esi_5 = esi_4 + *(edi_1 + 0x20)
            int32_t eax_9
            int32_t edx_4
            edx_4:eax_9 = sx.q(zx.d(eax_7))
            int32_t esi_6 = esi_5 + eax_9
            int32_t ecx_8 = adc.d(
                adc.d(adc.d(*(edi_1 + 0x4c), *(edi_1 + 0x24), esi_4 + *(edi_1 + 0x20) u< esi_4), edx_4, 
                    esi_5 + eax_9 u< esi_5), 
                0, esi_6 u>= 0xffffffe2)
            
            if (ecx_8 u>= var_10_1 && (ecx_8 u> var_10_1 || esi_6 + 0x1e u> var_14_1))
                var_14_1 = esi_6 + 0x1e
                var_10_1 = ecx_8
            
            int32_t temp9_1 = entry_ebx[9]
            
            if (var_10_1 u> temp9_1)
                zip_error_set(arg2, 0x13, 0)
                return 0xffffffff
            
            if (var_10_1 u>= temp9_1 && var_14_1 u> entry_ebx[8])
                zip_error_set(arg2, 0x13, 0)
                return 0xffffffff
            
            void* eax_11 = *esi_3
            
            if (zip_source_seek(*arg1, *(eax_11 + 0x48), *(eax_11 + 0x4c), 0) s< 0)
                sub_5bf050(arg2, *arg1)
                return 0xffffffff
            
            uint32_t eax_15
            int32_t edx_8
            eax_15, edx_8 = sub_5bfd40(&var_74, *arg1, nullptr, 1, arg2)
            
            if ((eax_15 & edx_8) == 0xffffffff)
                sub_5bf780(&var_74)
                return 0xffffffff
            
            if (sub_5bc9e0(&var_74, *(esi_2 + *entry_ebx)) != 0)
                zip_error_set(arg2, 0x15, 0)
                sub_5bf780(&var_74)
                return 0xffffffff
            
            int32_t* var_40
            *(*(esi_2 + *entry_ebx) + 0x34) = sub_5c14b0(*(*(esi_2 + *entry_ebx) + 0x34), var_40)
            *(*(esi_2 + *entry_ebx) + 4) = 1
            var_40 = nullptr
            sub_5bf780(&var_74)
            int32_t temp10_1 = var_24_1
            var_24_1 += 1
            int32_t var_20_1
            int32_t eax_23 = adc.d(var_20_1, 0, temp10_1 u>= 0xffffffff)
            var_20_1 = eax_23
            int32_t temp11_1 = entry_ebx[3]
            
            if (eax_23 u>= temp11_1)
                if (eax_23 u> temp11_1)
                    break
                
                if (var_24_1 u>= entry_ebx[2])
                    break
        
        eax_2 = var_14_1
        ecx_2 = var_10_1
    
    int32_t result = eax_2 - var_1c_1
    int32_t ecx_14 = sbb.d(ecx_2, var_18_1, eax_2 u< var_1c_1)
    
    if (ecx_14 u> 0x7fffffff)
        result = 0xffffffff
    else if (ecx_14 u>= 0x7fffffff && result u>= 0xffffffff)
        result = 0xffffffff
    
    return result
}
