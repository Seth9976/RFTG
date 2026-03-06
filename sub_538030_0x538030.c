// 函数名称: sub_538030
// 虚拟地址: 0x538030
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_538030()
{
    // 第一条实际指令: LRESULT eax
    LRESULT eax
    int32_t edx
    eax, edx = sub_536e40()
    
    if (eax != 0)
        void* eax_1
        eax_1.b = *(sub_531280(eax, edx, &data_8c35ec) + 0x10) == 8
        
        if (eax_1.b != 0)
            ShowWindow(GetDlgItem(data_3078830, 0x93), SW_SHOW)
            PSTR lpString = sub_536f50()
            return SetDlgItemTextA(data_3078830, 0x93, lpString)
    
    return ShowWindow(GetDlgItem(data_3078830, 0x93), SW_HIDE)
}
