// 函数名称: sub_57eb10
// 虚拟地址: 0x57eb10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

WPARAMsub_57eb10(char* arg1)
{
    // 第一条实际指令: char* eax = arg1
    char* eax = arg1
    char i
    
    do
        i = *eax
        eax = &eax[1]
    while (i != 0)
    HWND entry_hWnd
    
    if (eax - &eax[1] != 0 && SendMessageA(entry_hWnd, 0x18b, 0, 0) s> 0)
        WPARAM wParam = 0
        
        if (SendMessageA(entry_hWnd, 0x18b, 0, 0) s> 0)
            LRESULT eax_8
            
            do
                LRESULT eax_5 = SendMessageA(entry_hWnd, 0x199, wParam, 0)
                
                if (eax_5 != 0xffffffff && eax_5 != 0 && __Cnd_wait(*eax_5, arg1) == 0)
                    return wParam
                
                wParam += 1
                eax_8 = SendMessageA(entry_hWnd, 0x18b, 0, 0)
            while (wParam s< eax_8)
    
    return 0xffffffff
}
