// 函数名称: sub_549030
// 虚拟地址: 0x549030
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_549030(int32_t arg1, void* arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t result_1 = 0
    data_30794c8(arg4, 0x8b86, &result_1)
    int32_t result = result_1
    *(arg2 + 0x100) = 0
    int32_t esi_3 = result * 0xc
    *(arg3 + 0xc) = 0
    int128_t* ecx_1
    
    if (esi_3 != 0)
        int128_t* eax_3 = sub_4cce80(esi_3)
        sub_5abfc0(eax_3, 0, esi_3)
        result = result_1
        ecx_1 = eax_3
    else
        ecx_1 = nullptr
    
    *(arg3 + 0x10) = ecx_1
    int32_t ecx_2 = 0
    int32_t var_e4 = 0
    int32_t var_e0 = 0
    
    if (result s> 0)
        do
            int32_t var_dc = 0
            int32_t var_ec = 0
            char var_d0[0x64]
            data_30794b8(arg4, ecx_2, 0x64, 0, &var_dc, &var_ec, &var_d0)
            int32_t eax_5 = 0
            char var_6c[0x64]
            char i
            
            do
                i = var_d0[eax_5]
                var_6c[eax_5] = i
                eax_5 += 1
            while (i != 0)
            void* eax_6 = sub_5a9450(&var_6c, 0x5b)
            
            if (eax_6 != 0)
                *eax_6 = 0
            
            int32_t ebx_2 = 0
            int32_t edx_1
            int32_t edi_3
            
            if (data_8bd33c s> 0)
                void* esi_4 = nullptr
                void* edx
                
                while (true)
                    edx = data_8bd338
                    uint32_t eax_7
                    eax_7, edx_1 = sub_5a9697(*(esi_4 + edx + 4), &var_6c)
                    
                    if (eax_7 == 0)
                        break
                    
                    ebx_2 += 1
                    esi_4 += 0x3c
                    
                    if (ebx_2 s>= data_8bd33c)
                        goto label_54916a
                
                edi_3 = *(esi_4 + edx)
            
            if (data_8bd33c s> 0 && edi_3 != 0xffffffff)
                void* eax_9 = sub_531280(edi_3, edx_1, &data_8bd334)
                int32_t* esi_5 = *(arg3 + 0x10) + *(arg3 + 0xc) * 0xc
                esi_5[2] = edi_3
                esi_5[1] = var_dc
                
                if (*(eax_9 + 0x10) == 0xf)
                    esi_5[1] = var_e4
                    var_e4 += 1
                
                *esi_5 = data_30794d8(arg4, &var_d0)
                *(arg3 + 0xc) += 1
                result = esi_5[1] + *esi_5
                int32_t result_2 = *(arg2 + 0x100)
                
                if (result_2 s> result)
                    result = result_2
                
                *(arg2 + 0x100) = result
            else
            label_54916a:
                char (* var_fc_4)[0x64] = &var_6c
                result = sub_4c5680("Unknown shader constant '%s'")
            
            ecx_2 = var_e0 + 1
            var_e0 = ecx_2
        while (ecx_2 s< result_1)
    
    if (*(arg3 + 0xc) == 0)
        result = *(arg3 + 0x10)
        
        if (result != 0)
            result = _aligned_free_base(result)
        
        *(arg3 + 0x10) = 0
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
