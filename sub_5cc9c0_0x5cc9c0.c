// 函数名称: sub_5cc9c0
// 虚拟地址: 0x5cc9c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5cc9c0(void* arg1)
{
    // 第一条实际指令: void* esi = *(arg1 + 0x74)
    void* esi = *(arg1 + 0x74)
    
    if (esi == 0)
        return arg1
    
    ReleaseDC(*(esi + 4), *(esi + 8))
    
    if (*(esi + 0x18) != 0)
        DestroyWindow(*(esi + 4))
        void* var_c_3 = esi
        return sub_5d0af0()
    
    int32_t dwNewLong = *(esi + 0x14)
    
    if (dwNewLong != 0)
        SetWindowLongW(*(esi + 4), 0xfffffffc, dwNewLong)
    
    void* var_c_5 = esi
    return sub_5d0af0()
}
