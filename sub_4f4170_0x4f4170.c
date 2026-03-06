// 函数名称: sub_4f4170
// 虚拟地址: 0x4f4170
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4f4170(int32_t* arg1 @ esi)
{
    // 第一条实际指令: int32_t eax_4 = arg1[2]
    int32_t eax_4 = arg1[2]
    
    if (eax_4 s<= 0)
        sub_4c5870("mGrowCount > 0", &data_83f3d3, "xAlloc.cpp", 0x32, "XAllocator::Grow")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edi = arg1[4]
    
    if (edi u< 4)
        sub_4c5870("mItemSize >= sizeof(void*)", &data_83f3d3, "xAlloc.cpp", 0x33, "XAllocator::Grow")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* result = sub_4cce80(eax_4 * edi + 4)
    *result = arg1[1]
    int32_t* result_1 = *arg1
    int32_t i = 0
    arg1[1] = result
    
    if (arg1[2] s> 0)
        result = &result[1]
        
        do
            *result = result_1
            result_1 = result
            i += 1
            result += edi
        while (i s< arg1[2])
    
    *arg1 = result_1
    return result
}
