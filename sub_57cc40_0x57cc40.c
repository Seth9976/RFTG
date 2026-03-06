// 函数名称: sub_57cc40
// 虚拟地址: 0x57cc40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOL __convention("regparm")sub_57cc40(int32_t arg1)
{
    // 第一条实际指令: void* ecx = data_26a6554
    void* ecx = data_26a6554
    int32_t eax
    
    if (arg1 == 0 || (*(ecx + 0x14) != arg1 && *(ecx + 0x1c) != arg1 && *(ecx + 0x20) != arg1
            && *(ecx + 0x10) != arg1 && *(ecx + 0xc) != arg1))
        eax = 0
    else
        eax = 1
    
    *(ecx + 0x38) = eax
    BOOL result = data_26a6554
    
    if (*(result + 0x38) != 0)
        return result
    
    return RedrawWindow(*(result + 0x14), nullptr, nullptr, RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW)
}
