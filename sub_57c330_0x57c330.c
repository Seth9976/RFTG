// 函数名称: sub_57c330
// 虚拟地址: 0x57c330
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_57c330()
{
    // 第一条实际指令: HMENU hMenu = CreatePopupMenu()
    HMENU hMenu = CreatePopupMenu()
    POINT point
    GetCursorPos(&point)
    char eax = sub_57bec0()
    char eax_1 = sub_57bfe0()
    HMENU eax_2 = CreatePopupMenu()
    uint32_t ecx = zx.d(eax)
    int32_t ecx_1 = neg.d(ecx)
    InsertMenuA(eax_2, 0xffffffff, (sbb.d(ecx_1, ecx_1, ecx != 0) & 8) | 0x400, 0x16, "Lock")
    uint32_t edx = zx.d(eax_1)
    int32_t edx_1 = neg.d(edx)
    InsertMenuA(eax_2, 0xffffffff, (sbb.d(edx_1, edx_1, edx != 0) & 8) | 0x400, 0x17, "Hide")
    HMENU eax_4 = CreatePopupMenu()
    InsertMenuA(eax_4, 0xffffffff, MF_BYPOSITION, 0xa, "Left")
    InsertMenuA(eax_4, 0xffffffff, MF_BYPOSITION, 0xb, &data_88fac0)
    InsertMenuA(eax_4, 0xffffffff, MF_BYPOSITION, 0xc, "Right")
    InsertMenuA(eax_4, 0xffffffff, MF_BYPOSITION, 0xd, "Bottom")
    InsertMenuA(eax_4, 0xffffffff, MF_BYPOSITION, 0xe, "Horizontal")
    InsertMenuA(eax_4, 0xffffffff, MF_BYPOSITION, 0xf, "Vertical")
    InsertMenuA(eax_4, 0xffffffff, MF_BYPOSITION, 0x10, "Center")
    InsertMenuA(eax_4, 0xffffffff, 0xc00, 0, &data_83f3d3)
    InsertMenuA(eax_4, 0xffffffff, MF_BYPOSITION, 0x12, "Move Forward\tCtrl-]")
    InsertMenuA(eax_4, 0xffffffff, MF_BYPOSITION, 0x13, "Move Back\tCtrl-[")
    InsertMenuA(eax_4, 0xffffffff, MF_BYPOSITION, 0x14, "To Front\tCtrl-Shift-]")
    InsertMenuA(eax_4, 0xffffffff, MF_BYPOSITION, 0x15, "To Back\tCtrl-Shift-[")
    HMENU eax_5 = CreatePopupMenu()
    InsertMenuA(eax_5, 0xffffffff, MF_BYPOSITION, 0x11, "SizeToSource")
    InsertMenuA(hMenu, 0xffffffff, 0x410, eax_2, "Layer")
    InsertMenuA(hMenu, 0xffffffff, 0x410, eax_4, "Align")
    InsertMenuA(hMenu, 0xffffffff, 0x410, eax_5, "Transform")
    
    switch (TrackPopupMenu(hMenu, TPM_RETURNCMD, point.x, point.y, 0, data_30785e0, nullptr))
        case 0
            goto label_57c56e
        case 0xa
            sub_57ab50()
        label_57c56e:
            DestroyMenu(hMenu)
            DestroyMenu(eax_4)
            DestroyMenu(eax_5)
            return DestroyMenu(eax_2)
        case 0xb
            sub_57aff0()
            goto label_57c56e
        case 0xc
            sub_57ade0()
            goto label_57c56e
        case 0xd
            sub_57b1e0()
            goto label_57c56e
        case 0xe
            sub_57b610()
            sub_5758a0(1)
            goto label_57c56e
        case 0xf
            goto label_57c527
        case 0x10
            sub_57b610()
        label_57c527:
            sub_57b3f0()
            sub_5758a0(1)
            goto label_57c56e
        case 0x11
            sub_57b840()
            goto label_57c56e
        case 0x12
            sub_57a220()
            goto label_57c56e
        case 0x13
            sub_57a2a0()
            goto label_57c56e
        case 0x14
            sub_57a1a0()
            goto label_57c56e
        case 0x15
            sub_57a1e0()
            goto label_57c56e
        case 0x16
            sub_57c0f0()
            goto label_57c56e
        case 0x17
            sub_57c210()
            goto label_57c56e
    
    sub_4c5870("Halt", &data_83f3d3, "Editor\UIEditor.cpp", 0x8ed, "DoRClickMenu")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
