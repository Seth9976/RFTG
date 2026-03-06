// 函数名称: sub_4e33f0
// 虚拟地址: 0x4e33f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4e33f0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t ecx_1 = (arg3 - arg1) s>> 2
    int32_t ecx_1 = (arg3 - arg1) s>> 2
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(ecx_1)
    int32_t* result = eax_1 - edx
    int32_t edi_1 = result s>> 1
    int32_t var_c = ecx_1
    
    if (edi_1 s> 0)
        int32_t esi_1 = edi_1 * 2 + 2
        
        while (true)
            int32_t eax_2 = *(arg1 + (edi_1 << 2) - 4)
            edi_1 -= 1
            int32_t esi_2 = esi_1 - 2
            int32_t var_10_1 = esi_2
            int32_t var_14 = eax_2
            int32_t var_8_1 = edi_1
            bool cond:0_1 = esi_2 != ecx_1
            
            if (esi_2 s< ecx_1)
                do
                    char eax_3
                    eax_3, edx = arg4(*(arg1 + (esi_2 << 2)), *(arg1 + (esi_2 << 2) - 4))
                    
                    if (eax_3 != 0)
                        esi_2 -= 1
                    
                    int32_t ecx_3 = var_8_1
                    int32_t eax_4 = *(arg1 + (esi_2 << 2))
                    var_8_1 = esi_2
                    esi_2 = esi_2 * 2 + 2
                    *(arg1 + (ecx_3 << 2)) = eax_4
                while (esi_2 s< var_c)
                
                ecx_1 = var_c
                cond:0_1 = esi_2 != ecx_1
            
            if (not(cond:0_1))
                edx = *(arg1 + (ecx_1 << 2) - 4)
                *(arg1 + (var_8_1 << 2)) = edx
                var_8_1 = ecx_1 - 1
            
            int32_t* var_24_2 = arg4
            int32_t* var_28_2 = &var_14
            result, edx = sub_4657e0(var_8_1, edx, arg4, edi_1)
            
            if (edi_1 s<= 0)
                break
            
            ecx_1 = var_c
            esi_1 = var_10_1
    
    return result
}
