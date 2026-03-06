// 函数名称: sub_5c43f0
// 虚拟地址: 0x5c43f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5c43f0(int32_t* arg1 @ esi, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t edx = arg1[0xa]
    int32_t edx = arg1[0xa]
    int32_t ecx = arg1[8]
    int32_t ebx = arg4
    uint32_t edi = arg1[0xb]
    int32_t ecx_1 = ecx - edx
    int32_t eax_1 = sbb.d(arg1[9], edi, ecx u< edx)
    
    if (ebx u>= eax_1 && (ebx u> eax_1 || arg3 u>= ecx_1))
        arg3 = ecx_1
        arg4 = eax_1
        ebx = eax_1
    
    if ((arg3 | ebx) == 0)
        return 0
    
    if (ebx u>= 0x7fffffff && (ebx u> 0x7fffffff || arg3 u> 0xffffffff))
        return 0xffffffff
    
    uint32_t eax_5
    int32_t ecx_5
    int32_t edx_3
    eax_5, ecx_5, edx_3 = __aulldvrm(edx, edi, *arg1, arg1[1])
    int32_t var_24 = ecx_5
    int32_t ecx_6 = ebx
    void* result = nullptr
    int32_t edi_1 = 0
    uint32_t var_14 = eax_5
    int32_t var_10 = edx_3
    int32_t var_18 = 0
    
    if (arg4 u>= 0 && (arg4 u> 0 || arg3 u> 0))
        while (true)
            int32_t edx_4 = *arg1
            void* edx_5 = edx_4 - var_24
            int32_t eax_7 = sbb.d(arg1[1], ecx_6, edx_4 u< var_24)
            void* ecx_8 = arg3 - result
            int32_t ecx_10 = sbb.d(arg4, edi_1, arg3 u< result)
            
            if (ecx_10 u<= eax_7 && ecx_10 u>= eax_7)
                edi_1 = var_18
            
            int32_t var_8_1
            
            if (ecx_10 u> eax_7 || (ecx_10 u>= eax_7 && ecx_8 u>= edx_5))
                var_8_1 = eax_7
            else
                edx_5 = ecx_8
                var_8_1 = ecx_10
            
            sub_5ab990(result + arg2, *(arg1[2] + (var_14 << 2)) + var_24, edx_5)
            void* result_1 = result
            result += edx_5
            ecx_6 = 0
            edi_1 = adc.d(edi_1, var_8_1, result_1 + edx_5 u< result_1)
            uint32_t temp8_1 = var_14
            var_14 += 1
            var_18 = edi_1
            var_24 = 0
            var_10 = adc.d(var_10, 0, temp8_1 u>= 0xffffffff)
            
            if (edi_1 u>= arg4)
                if (edi_1 u> arg4)
                    break
                
                if (result u>= arg3)
                    break
    
    int32_t temp2 = arg1[0xa]
    arg1[0xa] += result
    arg1[0xb] = adc.d(arg1[0xb], edi_1, temp2 + result u< temp2)
    return result
}
