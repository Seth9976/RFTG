// 函数名称: sub_5cd440
// 虚拟地址: 0x5cd440
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_5cd440(int32_t arg1, uint32_t arg2, char* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ecx = arg2
    int32_t ecx = arg2
    char* result = arg3
    int32_t esi = arg1
    void* result_3 = result
    
    if (ecx s<= 0 && (ecx s< 0 || esi u< 0))
        int32_t temp2_1 = esi
        esi = neg.d(esi)
        *result = 0x2d
        result_3 = &result[1]
        ecx = neg.d(adc.d(ecx, 0, temp2_1 != 0))
    
    if ((esi | ecx) == 0)
        *result_3 = 0x30
        result_3 += 1
    else if (ecx s>= 0 && (ecx s> 0 || esi != 0))
        int32_t eax_3
        uint32_t edx_1
        edx_1:eax_3 = sx.q(arg4)
        
        while (true)
            uint32_t eax_5
            int32_t ecx_2
            int32_t edx_3
            eax_5, ecx_2, edx_3 = __alldvrm(esi, ecx, eax_3, edx_1)
            ecx_2.b = (*"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZI64")[ecx_2]
            *result_3 = ecx_2.b
            ecx = edx_3
            result_3 += 1
            char* result_2 = result
            esi = eax_5
            
            if (ecx s<= 0)
                if (ecx s< 0)
                    break
                
                if (esi == 0)
                    break
        
        result = arg3
    
    *result_3 = 0
    
    if (*result != 0x2d)
        char* result_1 = result
        sub_5cd3d0()
        return result
    
    void* var_1c_2 = &result[1]
    sub_5cd3d0()
    return result
}
