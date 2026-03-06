// 函数名称: sub_5dd660
// 虚拟地址: 0x5dd660
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5dd660(void* arg1, uint8_t* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: uint32_t nNumberOfBytesToWrite = arg3 * arg4
    uint32_t nNumberOfBytesToWrite = arg3 * arg4
    
    if (arg1 != 0)
        HANDLE hFile = *(arg1 + 0x1c)
        
        if (hFile != 0xffffffff && nNumberOfBytesToWrite != 0 && arg3 != 0)
            int32_t eax_1 = *(arg1 + 0x28)
            
            if (eax_1 != 0)
                SetFilePointer(hFile, neg.d(eax_1), nullptr, FILE_CURRENT)
                *(arg1 + 0x28) = 0
            
            if (*(arg1 + 0x18) == 0)
            label_5dd6ca:
                
                if (WriteFile(*(arg1 + 0x1c), arg2, nNumberOfBytesToWrite, &arg4, nullptr) != 0)
                    return divu.dp.d(0:arg4, arg3)
            else if (SetFilePointer(*(arg1 + 0x1c), 0, nullptr, FILE_END) != 0xffffffff)
                goto label_5dd6ca
            
            sub_5cd050(2)
    
    return 0
}
