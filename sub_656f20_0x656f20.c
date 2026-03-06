// 函数名称: sub_656f20
// 虚拟地址: 0x656f20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_656f20(void* arg1, float* arg2, int32_t arg3)
{
    // 第一条实际指令: void* edx = *(arg1 + 8)
    void* edx = *(arg1 + 8)
    int32_t ebx = arg3
    int32_t esi_1 = *(arg1 + 4) - 6
    
    if (esi_1 s> 0)
        sub_656c50(ebx, edx, arg2)
    
    int32_t esi_2 = esi_1 - 1
    int32_t ecx_2 = 1
    int32_t result = 2
    int32_t var_10 = 1
    int32_t var_14 = esi_2
    int32_t result_1 = 2
    
    if (esi_2 s> 0)
        while (true)
            if (result s> 0)
                float* ebx_1 = arg2
                int32_t edi_3 = ebx s>> ecx_2.b
                int32_t var_c_1 = result
                int32_t i
                
                do
                    sub_656db0(result, edx, edi_3, 4 << ecx_2.b)
                    result = edi_3 << 2
                    ebx_1 += result
                    i = var_c_1
                    var_c_1 -= 1
                while (i != 1)
                ebx = arg3
                esi_2 = var_14
                ecx_2 = var_10
                result = result_1
            
            ecx_2 += 1
            esi_2 -= 1
            result = rol.d(result, 1)
            var_10 = ecx_2
            result_1 = result
            var_14 = esi_2
            
            if (esi_2 s<= 0)
                break
            
            result = result_1
    
    if (ebx s> 0)
        float* esi_4 = arg2
        int32_t i_2 = ((ebx - 1) u>> 5) + 1
        int32_t i_1
        
        do
            result = sub_656a30(esi_4)
            esi_4 -= 0xffffff80
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    return result
}
