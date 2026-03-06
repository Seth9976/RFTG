// 函数名称: sub_4b7360
// 虚拟地址: 0x4b7360
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4b7360(int32_t arg1, void* arg2)
{
    // 第一条实际指令: void* result = sub_468810(arg1)
    void* result = sub_468810(arg1)
    
    if (result != 0)
        int32_t edx_1 = *(result + 0x140)
        int32_t ecx_1 = 0
        
        if (edx_1 s> 0)
            do
                if (*result == *(arg2 + 4))
                    result.b = 1
                    return result
                
                ecx_1 += 1
                result += 0x50
            while (ecx_1 s< edx_1)
    
    result.b = 0
    return result
}
