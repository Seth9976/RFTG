// 函数名称: sub_573a70
// 虚拟地址: 0x573a70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULT __convention("regparm")sub_573a70(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_c = arg3
    int32_t var_c = arg3
    LRESULT result = 0
    
    if (data_273abf0 != 0)
        return result
    
    if (arg3 == 0)
        data_26a7764 = 0
        return sub_56f3d0()
    
    if (arg3 s> 0)
        do
            (&data_26a6764)[result] = *(arg4 - &data_26a6764 + (result << 2) + &data_26a6764)
            result += 1
        while (result s< arg3)
    
    HWND hDlg = data_3078830
    data_26a7764 = arg3
    HWND hWnd = GetDlgItem(hDlg, 0xab)
    void* eax_1 = sub_50c140(data_26a6760)
    SendMessageA(hWnd, 0x19b, 0, zx.d(*(eax_1 + 4)) << 0x10)
    int32_t i = 0
    
    if (*(eax_1 + 4) s> 0)
        int32_t ecx_2 = data_26a7764
        
        do
            int32_t eax_2 = 0
            
            if (ecx_2 s> 0)
                do
                    if ((&data_26a6764)[eax_2] == i)
                        uint32_t eax_3 = zx.d(i.w)
                        SendMessageA(hWnd, 0x19b, 1, eax_3 << 0x10 | eax_3)
                        ecx_2 = data_26a7764
                        break
                    
                    eax_2 += 1
                while (eax_2 s< ecx_2)
            
            i += 1
        while (i s< *(eax_1 + 4))
    
    return sub_541330()
}
