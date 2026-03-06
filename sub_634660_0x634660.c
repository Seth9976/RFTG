// 函数名称: sub_634660
// 虚拟地址: 0x634660
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_634660(void* arg1)
{
    // 第一条实际指令: int32_t* ecx = arg1
    int32_t* ecx = arg1
    int32_t i = ecx[7]
    int32_t eax_1 = ecx[0xe]
    arg1 = *ecx
    int32_t edx_1 = ecx[0xc]
    int32_t esi = ecx[6]
    int32_t eax_3
    int32_t edx_2
    edx_2:eax_3 = sx.q(esi + 7)
    int32_t eax_7
    int32_t edx_4
    edx_4:eax_7 = sx.q(ecx[9])
    int32_t ebx_2 = ecx[4] - ((eax_3 + (edx_2 & 7)) s>> 3) + esi
    void* result = (eax_7 - edx_4) s>> 1
    int16_t* edi = ecx[5]
    int32_t var_14 = ebx_2
    
    if (i != 0)
        result *= 2
        void* result_1 = result
        
        do
            i -= 1
            ecx.b = 0
            int32_t edx_5 = 0
            
            if (esi s> 0)
                do
                    if ((edx_5.b & 7) == 0)
                        char* eax_9 = arg1
                        ecx.b = *eax_9
                        arg1 = &eax_9[1]
                    
                    result.b = ecx.b
                    result.b u>>= 7
                    result = zx.d(result.b)
                    
                    if (result != eax_1)
                        result.w = *(edx_1 + (result << 1))
                        *edi = result.w
                    
                    edx_5 += 1
                    ecx.b *= 2
                    edi = &edi[1]
                while (edx_5 s< esi)
                
                ebx_2 = var_14
            
            arg1 += ebx_2
            edi += result_1
        while (i != 0)
    
    return result
}
