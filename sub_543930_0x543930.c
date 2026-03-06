// 函数名称: sub_543930
// 虚拟地址: 0x543930
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_543930(MSG* arg1 @ edi)
{
    // 第一条实际指令: if (data_3078830 == 0)
    if (data_3078830 == 0)
        return 0
    
    if (arg1->message == 0x100 && arg1->wParam == 0x53)
        if ((0x8000 & GetKeyState(0x11)) != 0)
            int16_t eax_3
            char* ecx_1
            eax_3, ecx_1 = GetKeyState(0x10)
            
            if ((0x8000 & eax_3) != 0)
                sub_542f30(ecx_1)
                return 1
        
        if (arg1->wParam == 0x53 && (0x8000 & GetKeyState(0x11)) != 0)
            sub_542a90(0x8000)
            return 1
    
    return IsDialogMessageA(data_3078830, arg1)
}
