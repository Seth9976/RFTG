// 函数名称: sub_573970
// 虚拟地址: 0x573970
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_573970()
{
    // 第一条实际指令: HMENU hMenu = CreatePopupMenu()
    HMENU hMenu = CreatePopupMenu()
    POINT point
    GetCursorPos(&point)
    HMENU eax = CreatePopupMenu()
    InsertMenuA(eax, 0xffffffff, MF_BYPOSITION, 0x11, "SizeToSource")
    char eax_1 = sub_573800()
    HMENU eax_2 = CreatePopupMenu()
    uint32_t ecx = zx.d(eax_1)
    int32_t ecx_1 = neg.d(ecx)
    InsertMenuA(eax_2, 0xffffffff, (sbb.d(ecx_1, ecx_1, ecx != 0) & 8) | 0x400, 0x16, "Lock")
    InsertMenuA(hMenu, 0xffffffff, 0x410, eax_2, "Layer")
    InsertMenuA(hMenu, 0xffffffff, 0x410, eax, "Transform")
    BOOL result = TrackPopupMenu(hMenu, TPM_RETURNCMD, point.x, point.y, 0, data_30785e0, nullptr)
    
    if (result == 0)
        return result
    
    if (result == 0x11)
        return sub_573790()
    
    if (result == 0x16)
        return sub_5738b0()
    
    sub_4c5870("Halt", &data_83f3d3, "Editor\FabEditor.cpp", 0x7a1, "FabDoRClickMenu")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
