// 函数名称: sub_5cc240
// 虚拟地址: 0x5cc240
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5cc240(void* arg1, int32_t arg2, void* arg3, HWND arg4, int32_t arg5)
{
    // 第一条实际指令: void* ecx = *(arg1 + 0x274)
    void* ecx = *(arg1 + 0x274)
    int32_t var_28 = 0x24
    int32_t var_2c = 1
    int32_t* hData = sub_5d0ad0()
    
    if (hData == 0)
        sub_5cd050(hData)
        return 0xffffffff
    
    *hData = arg3
    hData[1] = arg4
    hData[2] = GetDC(arg4)
    hData[6] = arg5
    hData[7] = 0
    hData[8] = ecx
    *(arg3 + 0x74) = hData
    
    if (SetPropW(arg4, u"SDL_WindowData", hData) == 0)
        ReleaseDC(arg4, hData[2])
        int32_t* hData_1 = hData
        sub_5d0af0()
        sub_5dc5a0("SetProp() failed")
        return 0xffffffff
    
    int32_t eax_3 = GetWindowLongW(arg4, 0xfffffffc)
    hData[5] = eax_3
    
    if (eax_3 != sub_5db530)
        SetWindowLongW(arg4, 0xfffffffc, sub_5db530)
    else
        hData[5] = 0
    
    void var_18
    POINT point
    
    if (GetClientRect(arg4, &var_18) != 0)
        int32_t eax_5 = *(arg3 + 0x18)
        int32_t x = point.x
        int32_t eax_6
        int32_t y
        
        if (eax_5 == 0 || eax_5 == x)
            eax_6 = *(arg3 + 0x1c)
            y = point.y
        
        if ((eax_5 == 0 || eax_5 == x) && (eax_6 == 0 || eax_6 == y))
            *(arg3 + 0x18) = x
            *(arg3 + 0x1c) = y
        else
            sub_5cc190(arg3, 0x114)
    
    __builtin_memset(&point, 0, 8)
    
    if (ClientToScreen(arg4, &point) != 0)
        int32_t y_1 = point.y
        *(arg3 + 0x10) = point.x
        *(arg3 + 0x14) = y_1
    
    int32_t eax_8 = GetWindowLongW(arg4, 0xfffffff0)
    
    if ((eax_8 & 0x10000000) == 0)
        *(arg3 + 0x30) &= 0xfffffffb
    else
        *(arg3 + 0x30) |= 4
    
    if ((eax_8 & 0x840000) == 0)
        *(arg3 + 0x30) |= 0x10
    else
        *(arg3 + 0x30) &= 0xffffffef
    
    if ((eax_8 & 0x40000) == 0)
        *(arg3 + 0x30) &= 0xffffffdf
    else
        *(arg3 + 0x30) |= 0x20
    
    if ((eax_8 & 0x1000000) == 0)
        *(arg3 + 0x30) &= 0xffffff7f
    else
        *(arg3 + 0x30) |= 0x80
    
    if ((eax_8 & 0x20000000) == 0)
        *(arg3 + 0x30) &= 0xffffffbf
    else
        *(arg3 + 0x30) |= 0x40
    
    if (GetFocus() == arg4)
        *(arg3 + 0x30) |= 0x200
        sub_5d1090(*hData)
        
        if ((*(arg3 + 0x30) & 0x100) != 0)
            GetClientRect(arg4, &var_18)
            ClientToScreen(arg4, &var_18)
            ClientToScreen(arg4, &point)
            ClipCursor(&var_18)
    
    int32_t eax_11 = *(ecx + 0x14)
    
    if (eax_11 != 0)
        eax_11(arg4, 3)
    
    DragAcceptFiles(arg4, 1)
    return 0
}
