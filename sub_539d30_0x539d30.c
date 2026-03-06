// 函数名称: sub_539d30
// 虚拟地址: 0x539d30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOL __convention("regparm")sub_539d30(WPARAM arg1)
{
    // 第一条实际指令: int32_t* esi = data_3079208
    int32_t* esi = data_3079208
    void* const var_8
    
    if (esi == 0 || esi[1] != 0x1b)
        var_8 = nullptr
    else
        var_8 = sub_543be0(esi)
    
    HWND hWnd_2 = GetDlgItem(data_3078830, 0x76)
    HWND hWnd_3 = hWnd_2
    WPARAM wParam_1
    
    if (arg1 == 0xffffffff || arg1 s>= *(var_8 + 4))
        WPARAM wParam_3 = SendMessageA(hWnd_2, 0x188, 0, 0)
        wParam_1 = wParam_3
        
        if (wParam_3 == 0xffffffff)
            wParam_1 = 0
    else
        wParam_1 = arg1
    
    SendMessageA(hWnd_2, 0x184, 0, 0)
    int32_t i = 0
    int32_t i_2 = 0
    
    if (*(var_8 + 4) s> 0)
        do
            int32_t i_1 = i
            char* lParam_1
            sub_4c4a50(&lParam_1, "Graph %d")
            char* lParam = lParam_1
            
            if (lParam == 0)
                lParam = &data_83f3d3
            
            SendMessageA(hWnd_2, 0x180, 0, lParam)
            char* lParam_2 = lParam_1
            
            if (lParam_2 != 0 && *lParam_2 != 0)
                if (*(lParam_2 - 0x10) != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp0_1 = *(lParam_2 - 0xc)
                *(lParam_2 - 0xc) -= 1
                
                if (temp0_1 == 1)
                    int32_t edi_2 = *(lParam_2 - 4) + 0x10
                    
                    if (data_26a44e4 == 0)
                        sub_4f4250()
                    
                    int32_t eax_3 = 0
                    int32_t* ecx_4
                    
                    while (true)
                        if (edi_2 s<= 1 << (eax_3.b + 4))
                            ecx_4 = data_26a44e4 + eax_3 * 0x14
                            break
                        
                        eax_3 += 1
                        
                        if (eax_3 s>= 7)
                            ecx_4 = data_26a44e4 + 0x8c
                            break
                    
                    sub_4f4430(&lParam_2[0xfffffff0], ecx_4, edi_2)
                    i = i_2
                
                hWnd_2 = hWnd_3
            
            i += 1
            i_2 = i
        while (i s< *(var_8 + 4))
    
    ShowWindow(GetDlgItem(data_3078830, 0x77), SW_SHOW)
    ShowWindow(GetDlgItem(data_3078830, 0x78), SW_SHOW)
    ShowWindow(GetDlgItem(data_3078830, 0x79), SW_SHOW)
    ShowWindow(GetDlgItem(data_3078830, 0x7a), SW_SHOW)
    ShowWindow(GetDlgItem(data_3078830, 0x8d), SW_SHOW)
    SendMessageA(hWnd_2, 0x186, wParam_1, 0)
    ShowWindow(GetDlgItem(data_3078830, 0x7b), SW_HIDE)
    ShowWindow(GetDlgItem(data_3078830, 0x7c), SW_HIDE)
    ShowWindow(GetDlgItem(data_3078830, 0x7d), SW_HIDE)
    ShowWindow(GetDlgItem(data_3078830, 0x7e), SW_HIDE)
    ShowWindow(GetDlgItem(data_3078830, 0x7f), SW_HIDE)
    ShowWindow(GetDlgItem(data_3078830, 0x9e), SW_HIDE)
    InvalidateRect(data_3078830, nullptr, 0)
    sub_5381f0()
    int32_t eax_21
    char* ecx_9
    eax_21, ecx_9 = sub_537110()
    
    if (eax_21 != 0)
        sub_5373e0(&data_3078844)
    
    char* ecx_10 = sub_537f00(ecx_9)
    sub_538030()
    sub_5380a0(ecx_10)
    HWND hWnd = GetDlgItem(data_3078830, 0x8c)
    int32_t* eax_22 = data_3079208
    
    if (eax_22 == 0 || eax_22[1] != 0x19)
        ShowWindow(hWnd, SW_HIDE)
    else if (sub_466320(eax_22) == 0)
        ShowWindow(hWnd, SW_HIDE)
    else
        HWND hWnd_1 = GetDlgItem(data_3078830, 0x7b)
        LRESULT wParam_2 = SendMessageA(hWnd_1, 0x188, 0, 0)
        
        if (wParam_2 == 0xffffffff)
            ShowWindow(hWnd, SW_HIDE)
        else
            LRESULT eax_24
            int32_t edx_8
            eax_24, edx_8 = SendMessageA(hWnd_1, 0x199, wParam_2, 0)
            
            if (eax_24 == 0)
                ShowWindow(hWnd, SW_HIDE)
            else
                void* eax_25
                eax_25.b = *(sub_531280(eax_24, edx_8, &data_8c35ec) + 0x10) == 0xa
                
                if (eax_25.b != 0)
                    ShowWindow(hWnd, SW_SHOW)
                    WPARAM wParam
                    
                    if (sub_536ea0() == 0)
                        wParam = 1
                    else
                        wParam = 0
                    
                    SendMessageA(hWnd, 0x186, wParam, 0)
                else
                    ShowWindow(hWnd, SW_HIDE)
    
    BOOL result = EnableWindow(GetDlgItem(data_3078830, 0x8e), zx.d(data_307885c))
    data_3078838 = 0xffffffff
    return result
}
