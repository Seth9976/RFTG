// 函数名称: sub_579c60
// 虚拟地址: 0x579c60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULT __fastcallsub_579c60(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_c = arg1
    int32_t var_c = arg1
    int32_t ecx = data_273bc2c
    int32_t eax = 0
    
    if (ecx s> 0)
        do
            if ((&data_273ac2c)[eax] == arg2)
                HWND hDlg = data_3078830
                data_273bc2c = ecx - 1
                (&data_273ac2c)[eax] = (&data_273ac2c)[ecx - 1]
                HWND hWnd
                char edx
                hWnd, edx = GetDlgItem(hDlg, 0xab)
                char* ecx_3 = data_273ac20
                
                if (*(ecx_3 + 4) != 0x1e)
                    sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                        "UIDefGet")
                    
                    if (IsDebuggerPresent() != 1)
                        sub_4c5a30()
                        noreturn
                    
                    breakpoint
                
                if (*ecx_3 == 0)
                    sub_520800(hWnd, edx, ecx_3, 0)
                    
                    if (*ecx_3 == 0)
                        sub_509540(ecx_3)
                
                int32_t* esi_1 = **ecx_3
                SendMessageA(hWnd, 0x19b, 0, zx.d(esi_1[1].w) << 0x10)
                
                if (esi_1[1] s> 0)
                    int32_t edx_1 = data_273bc2c
                    int32_t ebx_1 = 0
                    int32_t i = 0
                    
                    do
                        int32_t eax_5 = 0
                        
                        if (edx_1 s> 0)
                            do
                                if ((&data_273ac2c)[eax_5] == *(*esi_1 + ebx_1))
                                    uint32_t eax_6 = zx.d(i.w)
                                    SendMessageA(hWnd, 0x19b, 1, eax_6 << 0x10 | eax_6)
                                    edx_1 = data_273bc2c
                                    break
                                
                                eax_5 += 1
                            while (eax_5 s< edx_1)
                        
                        i += 1
                        ebx_1 += 0x118
                    while (i s< esi_1[1])
                
                return sub_541ab0()
            
            eax += 1
        while (eax s< ecx)
    
    (&data_273ac2c)[ecx] = arg2
    data_273bc2c += 1
    return sub_57c6a0()
}
