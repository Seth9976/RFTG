// 函数名称: sub_528460
// 虚拟地址: 0x528460
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_528460()
{
    // 第一条实际指令: if (data_30da51c != 1)
    if (data_30da51c != 1)
        return 
    
    int16_t eax_1 = GetKeyState(0x11)
    HWND eax_2
    
    if ((0x8000 & eax_1) != 0 && *(data_27e7bbc + 0x18) != 0)
        eax_2 = GetFocus()
    
    if ((0x8000 & eax_1) != 0 && *(data_27e7bbc + 0x18) != 0 && eax_2 == data_30785e0)
        return 
    
    int16_t eax_3 = GetKeyState(0x12)
    HWND eax_4
    
    if ((0x8000 & eax_3) != 0 && *(data_27e7bbc + 0x18) != 0)
        eax_4 = GetFocus()
    
    if ((0x8000 & eax_3) != 0 && *(data_27e7bbc + 0x18) != 0 && eax_4 == data_30785e0)
        return 
    
    float var_c
    sub_4c6230(&var_c)
    int32_t edi_2 = data_30d951c
    void* var_8
    void* ecx_1 = var_8
    float var_14 = var_c
    void* var_10_1 = ecx_1
    
    if (edi_2 - 1 s>= 0)
        int32_t edi_4 = edi_2 - 1
        int32_t temp1_1
        
        do
            void* eax_6
            eax_6, ecx_1 = sub_530500(ecx_1, data_30d74ec)
            void* eax_7 = sub_528410(eax_6, edi_4)
            
            if (eax_7 == 0)
                sub_4c5870("result", &data_83f3d3, "UI2.cpp", 0xd64, "UI2ElementByIndex")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*(eax_7 + 0x1510) == 0 && *(eax_7 + 0x1511) == 0)
                ecx_1 = eax_7 + 8
                
                if (sub_4057a0(ecx_1, &var_14) != 0)
                    int32_t edx_5 = *(eax_7 + 0x19dc)
                    
                    if (edx_5 == 0)
                        break
                    
                    int32_t edx_6 = *(sub_530500(ecx_1, edx_5) + 4)
                    void* eax_13 = &(&data_30d9514)[data_315b330 * 0x407]
                    data_30d951c = edx_6
                    sub_5ab990(eax_13, &data_30d9518, 0x1018)
                    return 
            
            temp1_1 = edi_4
            edi_4 -= 1
        while (temp1_1 - 1 s>= 0)
    
    void* ecx_4 = &(&data_30d9514)[data_315b330 * 0x407]
    data_30da51c = 0
    sub_5ab990(ecx_4, &data_30d9518, 0x1018)
}
