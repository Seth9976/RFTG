// 函数名称: sub_536e40
// 虚拟地址: 0x536e40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULTsub_536e40()
{
    // 第一条实际指令: int32_t* eax = data_3079208
    int32_t* eax = data_3079208
    
    if (eax != 0 && eax[1] == 0x19 && sub_466320(eax) != 0)
        HWND hWnd = GetDlgItem(data_3078830, 0x7b)
        LRESULT wParam = SendMessageA(hWnd, 0x188, 0, 0)
        
        if (wParam != 0xffffffff)
            return SendMessageA(hWnd, 0x199, wParam, 0)
    
    return 0
}
