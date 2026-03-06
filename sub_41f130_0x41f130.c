// 函数名称: sub_41f130
// 虚拟地址: 0x41f130
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_41f130()
{
    // 第一条实际指令: int32_t esi
    int32_t esi
    void* result = sub_46b2b0(esi)
    int32_t edx = *(result + 0x1f54)
    int32_t ecx = 0
    
    if (edx s> 0)
        result += 0x1f44
        
        do
            if (*(result + 5) != 0 && (*result == 0 || *(result + 4) != 0))
                result.b = 1
                return result
            
            ecx += 1
            result += 8
        while (ecx s< edx)
    
    result.b = 0
    return result
}
