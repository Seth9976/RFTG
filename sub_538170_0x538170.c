// 函数名称: sub_538170
// 虚拟地址: 0x538170
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_538170()
{
    // 第一条实际指令: HWND hWnd = GetDlgItem(data_3078830, 0x8c)
    HWND hWnd = GetDlgItem(data_3078830, 0x8c)
    LRESULT eax
    int32_t edx
    eax, edx = sub_536e40()
    
    if (eax != 0)
        void* eax_1
        eax_1.b = *(sub_531280(eax, edx, &data_8c35ec) + 0x10) == 0xa
        
        if (eax_1.b != 0)
            ShowWindow(hWnd, SW_SHOW)
            
            if (sub_536ea0() == 0)
                return SendMessageA(hWnd, 0x186, 1, 0)
            
            return SendMessageA(hWnd, 0x186, 0, 0)
    
    return ShowWindow(hWnd, SW_HIDE)
}
