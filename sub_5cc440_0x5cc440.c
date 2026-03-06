// 函数名称: sub_5cc440
// 虚拟地址: 0x5cc440
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5cc440(void* arg1, void* arg2, HWND arg3)
{
    // 第一条实际指令: int32_t nMaxCount = GetWindowTextLengthW(arg3)
    int32_t nMaxCount = GetWindowTextLengthW(arg3)
    int32_t edx = __alloca_probe_16(nMaxCount * 2 + 2)
    int32_t __saved_edi
    
    if (&__saved_edi != 0)
        int32_t eax_1
        eax_1, edx = GetWindowTextW(arg3, &__saved_edi, nMaxCount)
        
        if (eax_1 s> 0)
            int32_t var_18_2 = sub_5cd1d0(&__saved_edi) * 2 + 2
            int32_t* var_1c_2 = &__saved_edi
            int32_t eax_4
            eax_4, edx = sub_5dd160("UTF-8", "UTF-16LE")
            *(arg2 + 8) = eax_4
    
    int32_t edx_1
    edx_1.b = sub_5cc240(arg1, edx, arg2, arg3, 0) s>= 0
    return edx_1 - 1
}
