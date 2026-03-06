// 函数名称: sub_53b5c0
// 虚拟地址: 0x53b5c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_53b5c0(HWND arg1)
{
    // 第一条实际指令: SetDlgItemTextA(arg1, 0x86, "Pick parameters:")
    SetDlgItemTextA(arg1, 0x86, "Pick parameters:")
    SetWindowTextA(arg1, "Add parameters")
    HWND hWnd = GetDlgItem(arg1, 0x85)
    
    for (LPARAM lParam = 0; lParam s< 0x7a; lParam += 1)
        SendMessageA(hWnd, 0x19a, SendMessageA(hWnd, 0x180, 0, (&data_8c360c)[lParam * 2]), lParam)
    
    return GetClientRect(arg1, &data_307884c)
}
