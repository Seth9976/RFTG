// 函数名称: sub_46a2e0
// 虚拟地址: 0x46a2e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_46a2e0(int32_t arg1, void* arg2)
{
    // 第一条实际指令: void* result = sub_46b2b0(arg1)
    void* result = sub_46b2b0(arg1)
    int32_t ecx = *(result + 0x1f34)
    int32_t edx = *(result + 0x1f30)
    
    if (ecx s> edx)
        edx = ecx
    
    int32_t ecx_1 = 0
    
    if (edx s> 0)
        result += 0x1a10
        
        do
            if (*result == *(arg2 + 0xac))
                result.b = 1
                return result
            
            ecx_1 += 1
            result += 4
        while (ecx_1 s< edx)
    
    result.b = 0
    return result
}
