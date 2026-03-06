// 函数名称: sub_686633
// 虚拟地址: 0x686633
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

HANDLEsub_686633(SECURITY_ATTRIBUTES* arg1, uint32_t arg2, int32_t arg3, int32_t arg4, enum THREAD_CREATION_FLAGS arg5, int32_t* arg6)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    int32_t var_c = edi
    int32_t edi_1 = arg3
    enum WIN32_ERROR ebx = NO_ERROR
    
    if (edi_1 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return nullptr
    
    sub_5acd29()
    void* lpParameter = __calloc_crt(1, 0x214)
    
    if (lpParameter != 0)
        sub_5acdb7(lpParameter, __getptd()[0x1b])
        *(lpParameter + 4) = 0xffffffff
        *(lpParameter + 0x58) = arg4
        int32_t* lpThreadId = arg6
        *(lpParameter + 0x54) = edi_1
        
        if (lpThreadId == 0)
            lpThreadId = &arg3
        
        HANDLE result = CreateThread(arg1, arg2, sub_6865ce, lpParameter, arg5, lpThreadId)
        
        if (result != 0)
            return result
        
        ebx = GetLastError()
    
    __free_base(lpParameter)
    
    if (ebx != NO_ERROR)
        ___acrt_errno_map_os_error(ebx)
    
    return nullptr
}
