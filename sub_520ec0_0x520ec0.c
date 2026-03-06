// 函数名称: sub_520ec0
// 虚拟地址: 0x520ec0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_520ec0(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    
    if (arg1 == 0)
        return 
    
    int32_t* esi_1 = &arg1[5]
    
    if (arg1[5] != 0)
        int32_t i_1 = 2
        int32_t i
        
        do
            sub_520ec0(*esi_1)
            esi_1 = &esi_1[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (sub_521410(arg1) == 0)
        sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 0x10c, 
            "XTypedAllocator<struct SphereTreeNode>::Free")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t ecx_1 = data_26a6528
    data_26a6534 -= 1
    *arg1 = ecx_1
    data_26a6528 = arg1
}
