// 函数名称: sub_51e950
// 虚拟地址: 0x51e950
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_51e950(int32_t* arg1 @ edi)
{
    // 第一条实际指令: int32_t* esi = *arg1
    int32_t* esi = *arg1
    
    if (sub_51eb90(esi) != 0)
        int32_t result = data_26a6518
        data_26a6524 -= 1
        *esi = result
        data_26a6518 = esi
        *arg1 = 0
        return result
    
    sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 0x10c, 
        "XTypedAllocator<struct RTreeNode>::Free")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
