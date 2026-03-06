// 函数名称: sub_57ebb0
// 虚拟地址: 0x57ebb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_57ebb0(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    uint32_t eax = arg1
    
    if (eax == 0 || *(eax + 0x14) == 0x63)
        int32_t ecx_1
        ecx_1.b = *(eax + 0x18) == 0
        *(eax + 0x18) = ecx_1
        
        if (ecx_1 == 0)
            *(data_26a6554 + 0x14)
            eax = sub_57eb10(*eax)
            uint32_t var_8_1 = eax
            
            if (eax != 0xffffffff)
                eax = SendMessageA(*(data_26a6554 + 0x18), 0x18b, 0, 0)
                WPARAM wParam_1 = eax - 1
                
                if (eax - 1 s>= 0)
                    WPARAM wParam_2
                    
                    do
                        LRESULT eax_8 = SendMessageA(*(data_26a6554 + 0x18), 0x199, wParam_1, 0)
                        int32_t esi_2 = neg.d(eax_8 + 1)
                        LPARAM lParam_1 = sbb.d(esi_2, esi_2, eax_8 != 0xffffffff) & eax_8
                        eax = *lParam_1
                        
                        if (eax != 0)
                            eax = __Cnd_wait(eax, *arg1)
                            
                            if (eax == 0 && *(lParam_1 + 0x14) != 0x63)
                                eax = SendMessageA(*(data_26a6554 + 0x14), 0x181, var_8_1 + 1, lParam_1)
                        
                        wParam_2 = wParam_1
                        wParam_1 -= 1
                    while (wParam_2 - 1 s>= 0)
        else
            eax = SendMessageA(*(data_26a6554 + 0x14), 0x18b, 0, 0)
            WPARAM wParam = eax - 1
            
            if (eax - 1 s>= 0)
                LRESULT lParam
                WPARAM wParam_3
                
                do
                    lParam = SendMessageA(*(data_26a6554 + 0x14), 0x199, wParam, 0)
                    LRESULT lParam_2 = lParam
                    
                    if (lParam_2 != 0xffffffff && lParam_2 != 0)
                        lParam = __Cnd_wait(*lParam_2, *arg1)
                        
                        if (lParam == 0 && *(lParam_2 + 0x14) != 0x63)
                            lParam = SendMessageA(*(data_26a6554 + 0x14), 0x182, wParam, lParam)
                    
                    wParam_3 = wParam
                    wParam -= 1
                while (wParam_3 - 1 s>= 0)
                return lParam
    
    return eax
}
