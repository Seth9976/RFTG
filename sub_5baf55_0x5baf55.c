// 函数名称: sub_5baf55
// 虚拟地址: 0x5baf55
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_5baf55(PSTR arg1)
{
    // 第一条实际指令: PSTR lpMultiByteStr_1 = arg1
    PSTR lpMultiByteStr_1 = arg1
    PSTR var_c = arg1
    int32_t edi
    int32_t var_18 = edi
    int32_t* edi_1 = data_bec5a0
    lpMultiByteStr_1 = nullptr
    
    for (wchar16* lpWideCharStr = *edi_1; lpWideCharStr != 0; lpWideCharStr = *edi_1)
        int32_t cbMultiByte =
            WideCharToMultiByte(0, 0, lpWideCharStr, 0xffffffff, nullptr, 0, nullptr, nullptr)
        
        if (cbMultiByte == 0)
            return 0xffffffff
        
        PSTR lpMultiByteStr = __calloc_crt(cbMultiByte, 1)
        lpMultiByteStr_1 = lpMultiByteStr
        
        if (lpMultiByteStr == 0)
            return 0xffffffff
        
        if (WideCharToMultiByte(0, 0, *edi_1, 0xffffffff, lpMultiByteStr, cbMultiByte, nullptr, nullptr)
                == 0)
            __free_base(lpMultiByteStr_1)
            return 0xffffffff
        
        if (sub_5bb936(&lpMultiByteStr_1, 0) s< 0 && lpMultiByteStr_1 != 0)
            __free_base(lpMultiByteStr_1)
            lpMultiByteStr_1 = nullptr
        
        edi_1 = &edi_1[1]
    
    return 0
}
