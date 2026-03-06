// 函数名称: sub_5c4cb0
// 虚拟地址: 0x5c4cb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c4cb0(int32_t* arg1 @ esi)
{
    // 第一条实际指令: HANDLE hFile = arg1[8]
    HANDLE hFile = arg1[8]
    int32_t ebx = 0
    int32_t var_10 = 0
    PSECURITY_DESCRIPTOR pSID_1 = nullptr
    int32_t* var_18 = nullptr
    
    if (hFile != 0xffffffff && GetFileType(hFile) == FILE_TYPE_DISK)
        HANDLE hObj = arg1[8]
        uint32_t sIRequested = 0x20000004
        uint32_t lpnLengthNeeded = 0
        
        if (GetUserObjectSecurity(hObj, &sIRequested, nullptr, 0, &lpnLengthNeeded) != 0)
        label_5c4d55:
            int32_t var_28 = 0xc
            int32_t var_20_1 = 0
            PSECURITY_DESCRIPTOR pSID_2 = pSID_1
            var_18 = &var_28
        else if (GetLastError() == ERROR_INSUFFICIENT_BUFFER)
            uint32_t nLength = lpnLengthNeeded
            PSECURITY_DESCRIPTOR pSID = sub_5a881a(nLength)
            pSID_1 = pSID
            
            if (pSID == 0)
                zip_error_set(arg1, 0xe, pSID)
                return 0xffffffff
            
            ebx = 0
            
            if (GetUserObjectSecurity(arg1[8], &sIRequested, pSID, nLength, &lpnLengthNeeded) != 0)
                goto label_5c4d55
    
    uint32_t eax_6 = GetTickCount()
    int32_t edi = 0xffffffff
    
    while (true)
        if (edi == 0xffffffff)
            edi = (*(arg1[6] + 8))(arg1, &var_10, ebx + eax_6, var_18)
            
            if (edi == 0xffffffff && GetLastError() != ERROR_FILE_EXISTS)
                break
            
            ebx += 1
            
            if (ebx s< 0x400)
                continue
            else if (edi == 0xffffffff)
                break
        
        __free_base(pSID_1)
        int32_t edx_3 = var_10
        arg1[0x21] = edi
        arg1[0x20] = edx_3
        return 0
    
    __free_base(var_10)
    __free_base(pSID_1)
    
    switch (GetLastError() - 2)
        case 0
            zip_error_set(arg1, 0xc, 2)
            return 0xffffffff
        case 2
            zip_error_set(arg1, 0xc, 0x18)
            return 0xffffffff
        case 3
            zip_error_set(arg1, 0xc, 0xd)
            return 0xffffffff
        case 4
            zip_error_set(arg1, 0xc, 9)
            return 0xffffffff
        case 0x4e
            zip_error_set(arg1, 0xc, 0x11)
            return 0xffffffff
        case 0x55
            zip_error_set(arg1, 0xc, 0x16)
            return 0xffffffff
        case 0x6e
            zip_error_set(arg1, 0xc, 0x1c)
            return 0xffffffff
    
    zip_error_set(arg1, 0xc, 0)
    return 0xffffffff
}
