// 函数名称: sub_521380
// 虚拟地址: 0x521380
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_521380()
{
    // 第一条实际指令: int32_t eax = data_26a6530
    int32_t eax = data_26a6530
    
    if (eax s<= 0)
        sub_4c5870("mGrowCount > 0", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 0x122, 
            "XTypedAllocator<struct SphereTreeNode>::Grow")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* result = sub_4cce80(eax * 0x1c + 4)
    *result = data_26a652c
    int32_t* result_1 = data_26a6528
    int32_t i = 0
    data_26a652c = result
    
    if (data_26a6530 s> 0)
        result = &result[1]
        
        do
            *result = result_1
            result_1 = result
            i += 1
            result = &result[7]
        while (i s< data_26a6530)
    
    data_26a6528 = result_1
    return result
}
