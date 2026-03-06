// 函数名称: sub_56f3d0
// 虚拟地址: 0x56f3d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_56f3d0()
{
    // 第一条实际指令: HWND hWnd = GetDlgItem(data_3078830, 0xab)
    HWND hWnd = GetDlgItem(data_3078830, 0xab)
    void* eax = sub_50c140(data_26a6760)
    SendMessageA(hWnd, 0x19b, 0, zx.d(*(eax + 4)) << 0x10)
    int32_t i = 0
    
    if (*(eax + 4) s> 0)
        int32_t ecx_2 = data_26a7764
        
        do
            int32_t eax_1 = 0
            
            if (ecx_2 s> 0)
                do
                    if ((&data_26a6764)[eax_1] == i)
                        uint32_t eax_2 = zx.d(i.w)
                        SendMessageA(hWnd, 0x19b, 1, eax_2 << 0x10 | eax_2)
                        ecx_2 = data_26a7764
                        break
                    
                    eax_1 += 1
                while (eax_1 s< ecx_2)
            
            i += 1
        while (i s< *(eax + 4))
    
    return sub_541330() __tailcall
}
