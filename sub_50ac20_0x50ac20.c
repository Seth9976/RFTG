// 函数名称: sub_50ac20
// 虚拟地址: 0x50ac20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_50ac20(int32_t* arg1 @ esi)
{
    // 第一条实际指令: int32_t eax = arg1[2]
    int32_t eax = arg1[2]
    
    if (eax s<= 0)
        sub_4c5870("mGrowCount > 0", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 0x122, 
            "XTypedAllocator<struct XAsset>::Grow")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* result = sub_4cce80(eax * 0x24 + 4)
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
            result = &result[9]
        while (i s< arg1[2])
    
    *arg1 = result_1
    return result
}
