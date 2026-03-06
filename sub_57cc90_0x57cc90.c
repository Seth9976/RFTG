// 函数名称: sub_57cc90
// 虚拟地址: 0x57cc90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOL __fastcallsub_57cc90(int32_t arg1)
{
    // 第一条实际指令: void* eax = data_26a6554
    void* eax = data_26a6554
    
    if (*(eax + 4) != 0)
        void* edx_1 = *(eax + 4)
        
        if (*(edx_1 + 0x14) == 8)
            *(edx_1 + 8) = &data_8951dc
            eax = data_26a6554
    
    int32_t ecx
    
    if (arg1 == 0 || (*(eax + 0x14) != arg1 && *(eax + 0x1c) != arg1 && *(eax + 0x20) != arg1
            && *(eax + 0x10) != arg1 && *(eax + 0xc) != arg1))
        ecx = 0
    else
        ecx = 1
    
    *(eax + 0x38) = ecx
    BOOL result = data_26a6554
    
    if (*(result + 0x38) != 0)
        return result
    
    return RedrawWindow(*(result + 0x14), nullptr, nullptr, RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW)
}
