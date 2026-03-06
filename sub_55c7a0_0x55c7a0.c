// 函数名称: sub_55c7a0
// 虚拟地址: 0x55c7a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_55c7a0()
{
    // 第一条实际指令: HWND hWnd_1 = GetParent(*(data_3079200 + 0x70))
    HWND hWnd_1 = GetParent(*(data_3079200 + 0x70))
    HWND hWnd = *(data_3079200 + 0x70)
    
    if (hWnd_1 != 0)
        hWnd = hWnd_1
    
    if (IsIconic(hWnd) == 0)
        sub_4c5680("Resetting D3D\n")
        int32_t* edi_1 = *(data_3079200 + 8)
        sub_559c90()
        int128_t var_40[0x3]
        sub_5598e0(&var_40)
        
        if ((*(*edi_1 + 0x40))(edi_1, &var_40) s>= 0)
            int32_t eax_4
            eax_4.b = 1
            return eax_4
        
        if (*(data_27e7fd0 + 0x22) != 0)
            sub_4c5680("Failed to reset in full screen mode - setting to windowed mode\n")
            *(data_27e7fd0 + 0x22) = 0
        
        sub_4c5680("D3D Reset failed\n")
    
    BOOL eax_1
    eax_1.b = 0
    return eax_1
}
