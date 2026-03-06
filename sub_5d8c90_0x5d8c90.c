// 函数名称: sub_5d8c90
// 虚拟地址: 0x5d8c90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d8c90(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: char* ecx = arg1[5]
    char* ecx = arg1[5]
    HDC hdc = CreateCompatibleDC(nullptr)
    int32_t pvParam = 0x1f4
    SystemParametersInfoW(SPI_GETNONCLIENTMETRICS, 0, &pvParam, 0)
    void var_114
    LOGFONTW lplf
    __builtin_memcpy(&lplf, &var_114, 0x5c)
    SelectObject(hdc, CreateFontIndirectW(&lplf))
    TEXTMETRICW lptm
    GetTextMetricsW(hdc, &lptm)
    char* ecx_1 = arg1[3]
    int32_t tmHeight = lptm.tmHeight
    data_bf7fc0 = lptm.tmAveCharWidth + 1
    data_bf7fbc = tmHeight
    void* var_2c0_3 = sub_5cd1b0(ecx_1) + 1
    int32_t var_2c4 = arg1[3]
    wchar16* lpchText = sub_5dd160("UTF-16LE", "UTF-8")
    int32_t var_2d0 = 0x10
    int32_t var_2d4 = 0
    RECT lprc
    RECT* var_2d8 = &lprc
    sub_5cd100()
    DrawTextW(hdc, lpchText, 0xffffffff, &lprc, DT_CALCRECT)
    lprc.right += 2
    lprc.bottom += 2
    DeleteDC(hdc)
    wchar16* lpchText_1 = lpchText
    sub_5d0af0()
    int32_t edi_3 = lprc.right - lprc.left + 0x20
    int32_t eax_6 = arg1[4] * 0x64 + 0xc
    
    if (edi_3 s< eax_6)
        edi_3 = eax_6
    
    int32_t ebx_3 = lprc.bottom - lprc.top + 0x4a
    int32_t* eax_7 = sub_5d8af0(edi_3.w, ebx_3.w, arg1[2])
    
    if (eax_7 != 0)
        int32_t edx_5 = lprc.right - lprc.left
        
        if (sub_5d8a60(arg1[3], edx_5, lprc.bottom - lprc.top, eax_7, 0x10, 0x10, edx_5.w) != 0)
            char* ebx_5 = nullptr
            int32_t var_8_1 = edi_3 - 0x64
            
            if (arg1[4] s<= 0)
            label_5d8e37:
                *arg2 =
                    *(ecx + DialogBoxIndirectParamW(nullptr, *eax_7, nullptr, sub_5d87c0, 0) * 0xc + 4)
                sub_5d8ad0(eax_7)
                return 0
            
            char* edi_5 = ecx
            
            while (true)
                int32_t var_2bc_7 = zx.d(*edi_5) & 1
                
                if (sub_5d8a90(ebx_3 - 0x26, ebx_5, *(edi_5 + 8), eax_7.w, var_8_1.w, (ebx_3 - 0x26).w, 
                        0x58, 0x1a) == 0)
                    break
                
                var_8_1 -= 0x64
                ebx_5 = &ebx_5[1]
                edi_5 = &edi_5[0xc]
                
                if (ebx_5 s>= arg1[4])
                    goto label_5d8e37
        
        sub_5d8ad0(eax_7)
    
    return 0xffffffff
}
