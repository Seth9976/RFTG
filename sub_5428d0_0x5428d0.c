// 函数名称: sub_5428d0
// 虚拟地址: 0x5428d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_5428d0()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    BOOL hWnd = data_3078830
    
    if (hWnd != 0)
        hWnd = DestroyWindow(hWnd)
        data_3078830 = 0
    
    if (data_3078818 != 0)
        hWnd = data_3079208
        BOOL hWnd_5 = hWnd
        
        if (hWnd != 0)
            hWnd = *(hWnd + 4)
            
            if (hWnd == 0x1e)
                return sub_5427d0()
            
            if (hWnd == 0x20)
                return sub_5419b0()
            
            if (hWnd != 0x1d && hWnd != 0x22 && (hWnd == 0x19 || hWnd == 0x1b))
                HWND hWnd_1 =
                    CreateDialogParamA(GetModuleHandleA(nullptr), 0x75, data_3078818, sub_53ddd0, 0)
                data_3078830 = hWnd_1
                ShowWindow(hWnd_1, SW_SHOW)
                HWND hWnd_2 = GetDlgItem(data_3078830, 0x8c)
                SendMessageA(hWnd_2, 0x180, 0, "True")
                SendMessageA(hWnd_2, 0x180, 0, "False")
                HWND hWnd_3 = GetDlgItem(data_3078830, 0x91)
                char const* const lParam = "Constant"
                void* const esi_2 = &data_83f9a8
                
                do
                    SendMessageA(hWnd_3, 0x151, SendMessageA(hWnd_3, 0x143, 0, lParam), *esi_2)
                    lParam = *(esi_2 + 0xc)
                    esi_2 += 8
                while (lParam != 0)
                
                HWND hWnd_4 = GetDlgItem(data_3078830, 0x90)
                char const* const lParam_1 = "Uniform"
                void* const esi_3 = &data_83f978
                
                do
                    SendMessageA(hWnd_4, 0x151, SendMessageA(hWnd_4, 0x143, 0, lParam_1), *esi_3)
                    lParam_1 = *(esi_3 + 0xc)
                    esi_3 += 8
                while (lParam_1 != 0)
                
                *(hWnd_5 + 0x1c) -= 1
                sub_5096c0(hWnd_5)
                int32_t edx_3 = sub_4b4a90(hWnd_5)
                
                if (*(hWnd_5 + 4) == 0x19)
                    edx_3 = sub_53e750()
                
                for (int32_t i = 0; i s< 0x100; i += 1)
                    *((i << 3) + &data_3078874) = i
                    *((i << 3) + &data_3078878) = 0
                
                int32_t var_18_6 = 0xffffffff
                sub_53ad00(0xffffffff, edx_3)
                return sub_536ca0()
    
    return hWnd
}
