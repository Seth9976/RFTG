// 函数名称: sub_53b9d0
// 虚拟地址: 0x53b9d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_53b9d0(LRESULT arg1, int32_t arg2, int32_t arg3, void* arg4)
{
    // 第一条实际指令: if (arg2 u<= 0x2c)
    if (arg2 u<= 0x2c)
        if (arg2 == 0x2c)
            int32_t eax_20
            int32_t edx_8
            edx_8:eax_20 = muls.dp.d(0x2aaaaaab, data_3078870 * 0xd)
            int32_t edx_9 = edx_8 s>> 4
            *(arg4 + 0x10) = (edx_9 u>> 0x1f) + edx_9
            return 1
        
        if (arg2 == 5)
            sub_53b830(arg1)
            return 0
        
        if (arg2 == 0x24)
            *(arg4 + 0x1c) = 0x12c
            return 1
        
        if (arg2 == 0x2b && *(arg4 + 8) != 0xffffffff)
            int32_t* eax_1 = sub_536db0()
            int32_t eax_2 = *(arg4 + 0xc)
            
            if (eax_2 != 0)
                if (eax_2 u<= 2)
                    LRESULT eax_6
                    int32_t ecx_2
                    eax_6, ecx_2 = SendMessageA(*(arg4 + 0x14), 0x199, *(arg4 + 8), 0)
                    
                    if (eax_6 u> 0x79)
                        sub_4c5870(
                            "paramToolIndex >= 0 && paramToolIndex < gParticleParamToolDataCount", 
                            &data_83f3d3, "Windows\EditorWindow.cpp", 0x88f, "PickDialogWndProc")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t eax_7 = *((eax_6 << 3) + &data_8c3608)
                    int32_t x
                    
                    if (eax_7 != 0x70)
                        HDC hdc
                        COLORREF color
                        
                        if (sub_530e10(ecx_2, eax_1, eax_7) != 0)
                            uint32_t color_2 = GetSysColor(COLOR_GRAYTEXT)
                            SetTextColor(*(arg4 + 0x18), color_2)
                            color = 0xffffff
                            hdc = *(arg4 + 0x18)
                        else if ((*(arg4 + 0x10) & 1) == 0)
                            uint32_t color_4 = GetSysColor(COLOR_WINDOWTEXT)
                            SetTextColor(*(arg4 + 0x18), color_4)
                            color = 0xffffff
                            hdc = *(arg4 + 0x18)
                        else
                            uint32_t color_3 = GetSysColor(COLOR_HIGHLIGHTTEXT)
                            SetTextColor(*(arg4 + 0x18), color_3)
                            color = GetSysColor(COLOR_HIGHLIGHT)
                            hdc = *(arg4 + 0x18)
                        
                        SetBkColor(hdc, color)
                        x = 0xc
                    else
                        HBRUSH eax_8 = CreateSolidBrush(0xe6e6e6)
                        FillRect(*(arg4 + 0x18), arg4 + 0x1c, eax_8)
                        DeleteObject(eax_8)
                        SetBkColor(*(arg4 + 0x18), 0xe6e6e6)
                        uint32_t color_1 = GetSysColor(COLOR_WINDOWTEXT)
                        SetTextColor(*(arg4 + 0x18), color_1)
                        x = 6
                    
                    uint8_t* lpString = (&data_8c360c)[eax_6 * 2]
                    char* lpString_1 = lpString
                    char i
                    
                    do
                        i = *lpString_1
                        lpString_1 = &lpString_1[1]
                    while (i != 0)
                    TextOutA(*(arg4 + 0x18), x, *(arg4 + 0x20), lpString, lpString_1 - &lpString_1[1])
                    return 1
                
                if (eax_2 == 4)
                    DrawFocusRect(*(arg4 + 0x18), arg4 + 0x1c)
            
            return 1
    else if (arg2 == 0x110)
        sub_53b5c0(arg1)
    else if (arg2 == 0x111)
        uint32_t eax_28 = arg3 u>> 0x10
        uint32_t ecx_12 = zx.d(arg3.w)
        
        if (eax_28 == 0)
            if (ecx_12 == 1)
                sub_53b640(arg1)
                return 0
            
            if (ecx_12 == 2)
                EndDialog(arg1, arg3)
        else if (eax_28 == 2)
            sub_53b640(arg1)
    
    return 0
}
