// 函数名称: sub_564210
// 虚拟地址: 0x564210
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_564210(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* result = *arg1
    int32_t* result = *arg1
    int32_t ecx
    ecx.b = result[1] == 3
    bool edx = *(*arg2 + 4) == 3
    
    if (ecx.b != 0)
        int32_t ecx_2
        
        if (edx != 0)
            int32_t* eax = sub_4ca0f0(result)
            int32_t* eax_2 = sub_4ca0f0(*arg2)
            int32_t* edx_1 = *eax
            ecx_2 = edx_1[1] * *edx_1
            int32_t* edx_2 = *eax_2
            result = edx_2[1] * *edx_2
        
        if (edx == 0 || result s< ecx_2)
            result.b = 1
            return result
        
        if (result s> ecx_2)
            result.b = 0
            return result
    else if (edx != 0)
        result.b = 0
        return result
    
    return neg.d(sbb.d(result, result, arg1 u< arg2))
}
