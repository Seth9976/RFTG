// 函数名称: sub_5bf6a0
// 虚拟地址: 0x5bf6a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5bf6a0(int32_t arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t* result = sub_5a881a(0x30)
    int32_t* result = sub_5a881a(0x30)
    
    if (result == 0)
        zip_error_set(arg3, 0xe, result)
        return 0
    
    int32_t ecx = arg1
    int32_t eax_2 = arg2
    int32_t edx_1 = ecx | eax_2
    
    if (edx_1 != 0)
        int32_t eax_3
        
        if (eax_2 u<= 0 && (eax_2 u< 0 || ecx u<= 0xfffffff))
            eax_3 = sub_5a881a(ecx << 4)
            *result = eax_3
        
        if (eax_2 u> 0 || (eax_2 u>= 0 && ecx u> 0xfffffff) || eax_3 == 0)
            zip_error_set(arg3, 0xe, 0)
            __free_base(result)
            return 0
        
        ecx = arg1
        eax_2 = arg2
    else
        *result = edx_1
    
    int32_t edi = 0
    int32_t ebx = 0
    
    if (eax_2 u>= 0 && (eax_2 u> 0 || ecx u> 0))
        while (true)
            sub_5c38d0((edi << 4) + *result)
            int32_t temp1_1 = edi
            edi += 1
            ebx = adc.d(ebx, 0, temp1_1 u>= 0xffffffff)
            
            if (ebx u>= arg2)
                if (ebx u> arg2)
                    break
                
                if (edi u>= arg1)
                    break
        
        ecx = arg1
        eax_2 = arg2
    
    result[5] = eax_2
    result[3] = eax_2
    result[4] = ecx
    result[2] = ecx
    __builtin_memset(&result[6], 0, 0x14)
    return result
}
