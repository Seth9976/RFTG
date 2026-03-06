// 函数名称: sub_57c6a0
// 虚拟地址: 0x57c6a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULTsub_57c6a0()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    HWND hWnd = GetDlgItem(data_3078830, 0xab)
    int32_t* eax_1 = sub_4f4890(data_273ac20)
    SendMessageA(hWnd, 0x19b, 0, zx.d(eax_1[1].w) << 0x10)
    int32_t i = 0
    
    if (eax_1[1] s> 0)
        int32_t edx_1 = data_273bc2c
        int32_t ebx_1 = 0
        
        do
            int32_t eax_2 = 0
            
            if (edx_1 s> 0)
                do
                    if ((&data_273ac2c)[eax_2] == *(*eax_1 + ebx_1))
                        uint32_t eax_3 = zx.d(i.w)
                        SendMessageA(hWnd, 0x19b, 1, eax_3 << 0x10 | eax_3)
                        edx_1 = data_273bc2c
                        break
                    
                    eax_2 += 1
                while (eax_2 s< edx_1)
            
            i += 1
            ebx_1 += 0x118
        while (i s< eax_1[1])
    
    return sub_541ab0()
}
